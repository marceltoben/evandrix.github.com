package org.neo4j.examples.workshopextra.solution.security;

import java.util.Stack;

import org.neo4j.examples.workshop.util.DbUtils;
import org.neo4j.graphdb.Direction;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Node;
import org.neo4j.graphdb.Transaction;
import org.neo4j.kernel.EmbeddedGraphDatabase;

public class ListFileStructure
{
    public static final String PATH = "db/security-tree";
    
    private static GraphDatabaseService graphDb;
    private static FileFactory fileFactory;
    private static PrincipalFactory principalFactory;
    private static SecurityManager securityManager;
    
    public static void main( String[] args )
    {
        if ( args.length == 0 )
        {
            System.out.println( "Please supply a principal name to do listing for" );
            return;
        }
        
        DbUtils.delete( PATH );
        graphDb = new EmbeddedGraphDatabase( PATH );
        fileFactory = new FileFactory( graphDb );
        principalFactory = new PrincipalFactory( graphDb );
        securityManager = new SecurityManager( graphDb );

        try
        {
            // Setup a file structure and principals with security
            File root = setupFileStructureAndAccess();
            
            // List files
            listFileStructure( root, args[0] );
            
            // Delete the entire file structure
            deleteFileStructure( root );
            deletePrincipals();
        }
        finally
        {
            graphDb.shutdown();
        }
    }
    
    private static Principal findPrincipal( String name )
    {
        return findPrincipal( getTopPrincipal(), name );
    }

    private static Principal findPrincipal( Principal principal, String name )
    {
        if ( principal.getName().equals( name ) )
        {
            return principal;
        }
        for ( Principal member : principal.getMembers() )
        {
            Principal foundPrincipal = findPrincipal( member, name );
            if ( foundPrincipal != null )
            {
                return foundPrincipal;
            }
        }
        return null;
    }

    private static File setupFileStructureAndAccess()
    {
        Transaction tx = graphDb.beginTx();
        try
        {
            // File structure
            File root = fileFactory.createFile( "root" );
            File bin = fileFactory.createFile( "bin" );
            root.addChild( bin );
            File boot = fileFactory.createFile( "boot" );
            root.addChild( boot );
            File dev = fileFactory.createFile( "dev" );
            root.addChild( dev );
            File etc = fileFactory.createFile( "etc" );
            File passwd = fileFactory.createFile( "passwd" );
            etc.addChild( passwd );
            File group = fileFactory.createFile( "group" );
            etc.addChild( group );
            root.addChild( etc );
            File home = fileFactory.createFile( "home" );
            File neo = fileFactory.createFile( "neo" );
            home.addChild( neo );
            neo.addChild( fileFactory.createFile( "application.jar" ) );
            neo.addChild( fileFactory.createFile( "readme.txt" ) );
            root.addChild( home );
            File lib = fileFactory.createFile( "lib" );
            root.addChild( lib );
            File usr = fileFactory.createFile( "usr" );
            root.addChild( usr );
            File sbin = fileFactory.createFile( "sbin" );
            File reboot = fileFactory.createFile( "reboot" );
            sbin.addChild( reboot );
            File fsck = fileFactory.createFile( "fsck" );
            sbin.addChild( fsck );
            root.addChild( sbin );
            File tmp = fileFactory.createFile( "tmp" );
            root.addChild( tmp );
            
            // Principals and access
            Principal allPrincipals = principalFactory.createPrincipal( "All" );
            securityManager.addAccess( allPrincipals, tmp, true );
            securityManager.addAccess( allPrincipals, home, true );
            Principal rootPrincipal = principalFactory.createPrincipal( "Root" );
            allPrincipals.addMember( rootPrincipal );
            securityManager.addAccess( rootPrincipal, root, true );
            Principal regularPrincipals = principalFactory.createPrincipal( "Regular" );
            allPrincipals.addMember( regularPrincipals );
            Principal neoPrincipal = principalFactory.createPrincipal( "Neo" );
            regularPrincipals.addMember( neoPrincipal );
            securityManager.addAccess( neoPrincipal, neo, true );
            Principal trinityPrincipal = principalFactory.createPrincipal( "Trinity" );
            regularPrincipals.addMember( trinityPrincipal );
            securityManager.addAccess( trinityPrincipal, neo, false );
            tx.success();
            return root;
        }
        finally
        {
            tx.finish();
        }
    }

    private static void listFileStructure( File root, String principalName )
    {
        Stack<String> stack = new Stack<String>();
        stack.push( "/" );
        Transaction tx = graphDb.beginTx();
        try
        {
            Principal principal = findPrincipal( principalName );
            if ( principal == null )
            {
                System.out.println( "Unknown principal '" + principalName + "'" );
                return;
            }
            
            for ( File child : root.getChildren() )
            {
                listFilesRecursive( child, principal, stack );
            }
            tx.success();
        }
        finally
        {
            tx.finish();
        }
    }

    private static void listFilesRecursive( File file, Principal principal,
            Stack<String> stack )
    {
        String fileName = stack.peek() + file.getFileName();
        if ( securityManager.hasAccess( principal, file ) )
        {
            System.out.println( fileName );
        }
        stack.push( fileName + "/" );
        for ( File child : file.getChildren() )
        {
            listFilesRecursive( child, principal, stack );
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
    
    private static Principal getTopPrincipal()
    {
        Node allPrincipalNode = graphDb.getReferenceNode().getSingleRelationship(
                SecurityRelationshipTypes.PRINCIPAL, Direction.OUTGOING ).getEndNode();
        return principalFactory.getPrincipal( allPrincipalNode );
    }
    
    private static void deletePrincipals()
    {
        Transaction tx = graphDb.beginTx();
        try
        {
            deletePrincipalAndDownwards( getTopPrincipal() );
        }
        finally
        {
            tx.finish();
        }
    }

    private static void deletePrincipalAndDownwards( Principal principal )
    {
        for ( Principal member : principal.getMembers() )
        {
            deletePrincipalAndDownwards( member );
        }
        principal.delete();
    }
}
