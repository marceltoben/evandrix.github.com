package org.neo4j.examples.workshop.solution.matrix;

import org.neo4j.examples.workshop.util.DbUtils;
import org.neo4j.graphdb.Direction;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Node;
import org.neo4j.graphdb.Relationship;
import org.neo4j.graphdb.RelationshipType;
import org.neo4j.graphdb.ReturnableEvaluator;
import org.neo4j.graphdb.StopEvaluator;
import org.neo4j.graphdb.Transaction;
import org.neo4j.graphdb.TraversalPosition;
import org.neo4j.graphdb.Traverser;
import org.neo4j.graphdb.Traverser.Order;
import org.neo4j.index.IndexService;
import org.neo4j.index.lucene.LuceneIndexService;
import org.neo4j.kernel.EmbeddedGraphDatabase;

public class MatrixWithIndex
{
    public static final String PATH = "db/matrix-with-index";
    
    private static GraphDatabaseService graphDb;
    private static IndexService index;

    private static enum MatrixRelationshipTypes implements RelationshipType
    {
        KNOWS,
        CODED_BY
    }

    public static void main( String args[] )
    {
        // Start up the Neo4j database in db/matrix-with-index. It is cleared
        // before the example is run.
        DbUtils.delete( PATH );
        graphDb = new EmbeddedGraphDatabase( PATH );
        index = new LuceneIndexService( graphDb );

        // Start a transaction (every operation performed on the graph needs
        // to be in a transactional context.
        Transaction tx = graphDb.beginTx();
        try
        {
            // Set up the matrix and all its social connections
            setupMatrix();
            Node personToStartFrom = findPerson( "Thomas Anderson" );
            if ( personToStartFrom == null )
            {
                System.out.println( "ERROR: Thomas Anderson not found, " +
                        "the matrix social network doesn't seem to be created properly" );
                return;
            }
            
            // Query it for information
            printFriends( personToStartFrom );
            printHackers( personToStartFrom );
            
            // Let Neo4j know that the transaction was successful
            tx.success();
        }
        finally
        {
            // Finish the transaction and shutdown Neo4j
            tx.finish();
            index.shutdown();
            graphDb.shutdown();
        }
    }

    private static Node findPerson( String name )
    {
        // Look up the person with the given name from the 'indexService'
        // variable using the "person.name" key and return the node
        // representing that person.
        return index.getSingleNode( "person.name", name );
    }

    private static void indexPerson( Node person )
    {
        // Index the person name with the 'indexService' variable using
        // "person.name" key.
        index.index( person, "person.name", person.getProperty( "name" ) );
    }
    
    private static void setupMatrix()
    {
        // Create the matrix social network outlined in
        // http://wiki.neo4j.org/content/Workshop#Tasks and return
        // the node representing Thomas Anderson
        Node thomasAnderson = graphDb.createNode();
        thomasAnderson.setProperty( "name", "Thomas Anderson" );
        thomasAnderson.setProperty( "age", 29 );
        indexPerson( thomasAnderson );
        
        Node trinity = graphDb.createNode();
        trinity.setProperty( "name", "Trinity" );
        Relationship rel = thomasAnderson.createRelationshipTo( trinity, 
                MatrixRelationshipTypes.KNOWS );
        rel.setProperty( "age", "3 days" );
        indexPerson( trinity );
        
        Node morpheus = graphDb.createNode();
        morpheus.setProperty( "name", "Morpheus" );
        morpheus.setProperty( "rank", "Captain" );
        morpheus.setProperty( "occupation", "Total badass" );
        thomasAnderson.createRelationshipTo( morpheus, MatrixRelationshipTypes.KNOWS );
        rel = morpheus.createRelationshipTo( trinity, 
                MatrixRelationshipTypes.KNOWS );
        rel.setProperty( "age", "12 years" );
        indexPerson( morpheus );
        
        Node cypher = graphDb.createNode();
        cypher.setProperty( "name", "Cypher" );
        cypher.setProperty( "last name", "Reagan" );
        rel = morpheus.createRelationshipTo( cypher, 
                MatrixRelationshipTypes.KNOWS );
        rel.setProperty( "disclosure", "public" );
        indexPerson( cypher );
        
        Node smith = graphDb.createNode();
        smith.setProperty( "name", "Agent Smith" );
        smith.setProperty( "version", "1.0b" );
        smith.setProperty( "language", "C++" );
        rel = cypher.createRelationshipTo( smith, MatrixRelationshipTypes.KNOWS );
        rel.setProperty( "disclosure", "secret" );
        rel.setProperty( "age", "6 months" );
        indexPerson( smith );
        
        Node architect = graphDb.createNode();
        architect.setProperty( "name", "The Architect" );
        smith.createRelationshipTo( architect, MatrixRelationshipTypes.CODED_BY );
        indexPerson( architect );
    }

    private static void printFriends( Node person )
    {
        // Create traverser that finds the person's friends and 
        // prints them to console
        System.out.println( person.getProperty( "name" ) + "'s friends:" );
        Traverser traverser = person.traverse( Order.BREADTH_FIRST, 
                StopEvaluator.END_OF_GRAPH,
                ReturnableEvaluator.ALL_BUT_START_NODE, 
                MatrixRelationshipTypes.KNOWS, Direction.BOTH );
        for ( Node friend : traverser )
        {
            TraversalPosition position = traverser.currentPosition();
            System.out.println( "At depth " + position.depth() + 
                    " => " + friend.getProperty( "name" ) );
        }
    }

    private static void printHackers( Node startNode )
    {
        // Find all hackers from startNode by traversing the 
        // KNOWS and CODED_BY relationships and prints them to console
        ReturnableEvaluator codedByReturnableEvaluator = new ReturnableEvaluator()
        {
            public boolean isReturnableNode( TraversalPosition currentPosition )
            {
                Relationship rel = currentPosition.lastRelationshipTraversed();
                return rel != null && rel.isType( MatrixRelationshipTypes.CODED_BY );
            }
        };
        
        System.out.println( "Hackers:" );
        Traverser traverser = startNode.traverse( Order.DEPTH_FIRST, 
                StopEvaluator.END_OF_GRAPH, codedByReturnableEvaluator,
                MatrixRelationshipTypes.CODED_BY, Direction.OUTGOING, 
                MatrixRelationshipTypes.KNOWS, Direction.BOTH );
        for ( Node hacker : traverser )
        {
            TraversalPosition position = traverser.currentPosition();
            System.out.println( "At depth " + position.depth() + 
                    " => " + hacker.getProperty( "name" ) );
        }
    }
}
