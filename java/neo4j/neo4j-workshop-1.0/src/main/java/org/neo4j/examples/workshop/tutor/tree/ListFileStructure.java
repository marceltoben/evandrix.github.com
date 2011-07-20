package org.neo4j.examples.workshop.tutor.tree;

import java.util.Stack;

import org.neo4j.examples.workshop.util.DbUtils;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Transaction;
import org.neo4j.kernel.EmbeddedGraphDatabase;

public class ListFileStructure
{
    public static final String PATH = "db/tree";
    
    private static GraphDatabaseService graphDb;
    private static FileFactory fileFactory;
    
    public static void main( String[] args )
    {
        DbUtils.delete( PATH );
        graphDb = new EmbeddedGraphDatabase( PATH );
        fileFactory = new FileFactory( graphDb );
        
        try
        {
            // Setup a file structure
            File root = setupFileStructure();
    
            // List files
            listFileStructure( root );
            
            // Delete the entire file structure
            deleteFileStructure( root );
        }
        finally
        {
            graphDb.shutdown();
        }
    }

    private static File setupFileStructure()
    {
        Transaction tx = graphDb.beginTx();
        try
        {
            File root = fileFactory.createFile( "root" );
            root.addChild( fileFactory.createFile( "bin" ) );
            root.addChild( fileFactory.createFile( "boot" ) );
            root.addChild( fileFactory.createFile( "dev" ) );
            File etc = fileFactory.createFile( "etc" );
            etc.addChild( fileFactory.createFile( "passwd" ) );
            etc.addChild( fileFactory.createFile( "group" ) );
            root.addChild( etc );
            File home = fileFactory.createFile( "home" );
            File neo = fileFactory.createFile( "neo" );
            home.addChild( neo );
            neo.addChild( fileFactory.createFile( "application.jar" ) );
            neo.addChild( fileFactory.createFile( "readme.txt" ) );
            root.addChild( home );
            root.addChild( fileFactory.createFile( "lib" ) );
            root.addChild( fileFactory.createFile( "usr" ) );
            File sbin = fileFactory.createFile( "sbin" );
            sbin.addChild( fileFactory.createFile( "reboot" ) );
            sbin.addChild( fileFactory.createFile( "fsck" ) );
            root.addChild( sbin );
            root.addChild( fileFactory.createFile( "tmp" ) );
            tx.success();
            return root;
        }
        finally
        {
            tx.finish();
        }
    }

    private static void listFileStructure( File root )
    {
        Stack<String> stack = new Stack<String>();
        stack.push( "/" );
        Transaction tx = graphDb.beginTx();
        try
        {
            for ( File child : root.getChildren() )
            {
                listFilesRecursive( child, stack );
            }
            tx.success();
        }
        finally
        {
            tx.finish();
        }
    }

    private static void listFilesRecursive( File file, Stack<String> stack )
    {
        String fileName = stack.peek() + file.getFileName();
        System.out.println( fileName );
        stack.push( fileName + "/" );
        for ( File child : file.getChildren() )
        {
            listFilesRecursive( child, stack );
        }
        stack.pop();
    }
    
    private static void deleteFileStructure( File root )
    {
        Transaction tx = graphDb.beginTx();
        try
        {
            root.delete();
            tx.success();
        }
        finally
        {
            tx.finish();
        }
    }
}
