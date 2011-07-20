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
import org.neo4j.kernel.EmbeddedGraphDatabase;

public class MatrixWithShell
{
    public static final String PATH = "db/matrix-with-shell";
    
    private static GraphDatabaseService graphDb;

    private static enum MatrixRelationshipTypes implements RelationshipType
    {
        KNOWS,
        CODED_BY
    }

    public static void main( String args[] ) throws Exception
    {
        // Start up the Neo4j database in db/matrix-with-shell. It is cleared
        // before the example is run
        DbUtils.delete( PATH );
        graphDb = new EmbeddedGraphDatabase( PATH );
        graphDb.enableRemoteShell();

        // Start a transaction (every operation performed on the graph needs
        // to be in a transactional context.
        Node thomasAnderson = null;
        Transaction tx = graphDb.beginTx();
        try
        {
            // Set up the matrix and all its social connections
            thomasAnderson = setupMatrix();
            System.out.println( "Thomas Anderson is " + thomasAnderson );
            
            // Let Neo4j know that the transaction was successful
            tx.success();
        }
        finally
        {
            // Finish the transaction and shutdown Neo4j
            tx.finish();
        }
        
        // Halt here until user presses ENTER
        System.out.println( "Matrix example started with shell enabled, press ENTER to quit" );
        System.in.read();
        
        // Print the friends after the shell session has ended
        tx = graphDb.beginTx();
        try
        {
            System.out.println();
            printFriends( thomasAnderson );
            tx.success();
        }
        finally
        {
            tx.finish();
        }
        
        graphDb.shutdown();
    }

    private static Node setupMatrix()
    {
        // Create the matrix social network outlined in
        // http://wiki.neo4j.org/content/Workshop#Tasks and return
        // the node representing Thomas Anderson
        Node thomasAnderson = graphDb.createNode();
        thomasAnderson.setProperty( "name", "Thomas Anderson" );
        thomasAnderson.setProperty( "age", 29 );
        
        Node trinity = graphDb.createNode();
        trinity.setProperty( "name", "Trinity" );
        Relationship rel = thomasAnderson.createRelationshipTo( trinity, 
                MatrixRelationshipTypes.KNOWS );
        rel.setProperty( "age", "3 days" );
        
        Node morpheus = graphDb.createNode();
        morpheus.setProperty( "name", "Morpheus" );
        morpheus.setProperty( "rank", "Captain" );
        morpheus.setProperty( "occupation", "Total badass" );
        thomasAnderson.createRelationshipTo( morpheus, MatrixRelationshipTypes.KNOWS );
        rel = morpheus.createRelationshipTo( trinity, 
                MatrixRelationshipTypes.KNOWS );
        rel.setProperty( "age", "12 years" );
        
        Node cypher = graphDb.createNode();
        cypher.setProperty( "name", "Cypher" );
        cypher.setProperty( "last name", "Reagan" );
        rel = morpheus.createRelationshipTo( cypher, 
                MatrixRelationshipTypes.KNOWS );
        rel.setProperty( "disclosure", "public" );
        
        Node smith = graphDb.createNode();
        smith.setProperty( "name", "Agent Smith" );
        smith.setProperty( "version", "1.0b" );
        smith.setProperty( "language", "C++" );
        rel = cypher.createRelationshipTo( smith, MatrixRelationshipTypes.KNOWS );
        rel.setProperty( "disclosure", "secret" );
        rel.setProperty( "age", "6 months" );
        
        Node architect = graphDb.createNode();
        architect.setProperty( "name", "The Architect" );
        smith.createRelationshipTo( architect, MatrixRelationshipTypes.CODED_BY );
        
        return thomasAnderson;
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
}
