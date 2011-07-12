package org.neo4j.examples.workshop.tutor.matrix;

import org.neo4j.examples.workshop.util.DbUtils;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Node;
import org.neo4j.graphdb.RelationshipType;
import org.neo4j.graphdb.Transaction;
import org.neo4j.kernel.EmbeddedGraphDatabase;

public class Matrix
{
    public static final String PATH = "db/matrix";
    
    private static GraphDatabaseService graphDb;

    private static enum MatrixRelationshipTypes implements RelationshipType
    {
        KNOWS,
        CODED_BY
    }

    public static void main( String args[] )
    {
        // Start up the Neo4j database in db/matrix. It is cleared before the
        // example is run.
        DbUtils.delete( PATH );
        graphDb = new EmbeddedGraphDatabase( PATH );

        // Start a transaction (every operation performed on the graph needs
        // to be in a transactional context.
        Transaction tx = graphDb.beginTx();
        try
        {
            // Set up the matrix and all its social connections
            Node thomasAnderson = setupMatrix();
            
            // Query it for information
            printFriends( thomasAnderson );
            printHackers( thomasAnderson );
            
            // Let Neo4j know that the transaction was successful
            tx.success();
        }
        finally
        {
            // Finish the transaction and shutdown Neo4j
            tx.finish();
            graphDb.shutdown();
        }
    }

    private static Node setupMatrix()
    {
        // Create the matrix social network outlined in
        // http://wiki.neo4j.org/content/Workshop#Tasks using the 'graphDb'
        // variable and return the node representing Thomas Anderson.
        //
        // NOTE: Feel free to use the predefined MatrixRelationshipTypes enum,
        // which contains the needed relationship types
        
        // TODO Your code here...
        return null;
    }

    private static void printFriends( Node startNode )
    {
        // Create traverser that finds the person's friends and
        // all their friends (a.s.o) and prints them to the console with
        // a note about at which depth each friend was found.

        // TODO Your code here...
    }

    private static void printHackers( Node startNode )
    {
        // Find all hackers from startNode by traversing the 
        // KNOWS and CODED_BY relationships and prints them to console.
        // 
        // NOTE: To check for relationship type equality, don't use
        // RelationshipType#equals, but instead Relationship#isType
        
        // TODO Your code here...
    }
}
