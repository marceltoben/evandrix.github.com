package org.neo4j.examples.workshopextra.tutor.security;

import junit.framework.TestCase;

import org.neo4j.examples.workshop.util.DbUtils;
import org.neo4j.examples.workshopextra.tutor.security.File;
import org.neo4j.examples.workshopextra.tutor.security.FileFactory;
import org.neo4j.examples.workshopextra.tutor.security.ListFileStructure;
import org.neo4j.examples.workshopextra.tutor.security.Principal;
import org.neo4j.examples.workshopextra.tutor.security.PrincipalFactory;
import org.neo4j.examples.workshopextra.tutor.security.SecurityManager;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Transaction;
import org.neo4j.kernel.EmbeddedGraphDatabase;

public class TestSecurity extends TestCase
{
    private GraphDatabaseService graphDb;
    private FileFactory fileFactory;
    private PrincipalFactory principalFactory;
    private SecurityManager securityManager;
    private Transaction tx;
    
    public void setUp()
    {
        DbUtils.delete( ListFileStructure.PATH );
        graphDb = new EmbeddedGraphDatabase( ListFileStructure.PATH );
        fileFactory = new FileFactory( graphDb );
        principalFactory = new PrincipalFactory( graphDb );
        securityManager = new SecurityManager( graphDb );
        tx = graphDb.beginTx();
    }
    
    public void tearDown()
    {
        tx.success();
        tx.finish();
        graphDb.shutdown();
    }
    
    private void restartTx()
    {
        tx.success();
        tx.finish();
        tx = graphDb.beginTx();
    }
    
    public void testAccessRights() throws Exception
    {
        File root = fileFactory.createFile( "root" );
        File tmp = fileFactory.createFile( "tmp" );
        root.addChild( tmp );
        File etc = fileFactory.createFile( "etc" );
        root.addChild( etc );
        File opt = fileFactory.createFile( "opt" );
        root.addChild( opt );
        
        Principal all = principalFactory.createPrincipal( "all" );
        Principal rootPrincipal = principalFactory.createPrincipal( "root" );
        all.addMember( rootPrincipal );
        Principal user = principalFactory.createPrincipal( "user" );
        all.addMember( user );
        Principal guest = principalFactory.createPrincipal( "guest" );
        all.addMember( guest );
        
        securityManager.addAccess( all, tmp, true );
        securityManager.addAccess( all, opt, true );
        securityManager.addAccess( rootPrincipal, root, true );
        securityManager.addAccess( guest, opt, false );
        
        restartTx();
        
        // Check the access rights
        assertTrue( securityManager.hasAccess( all, opt ) );
        assertTrue( securityManager.hasAccess( all, tmp ) );
        assertFalse( securityManager.hasAccess( all, etc ) );
        assertTrue( securityManager.hasAccess( rootPrincipal, tmp ) );
        assertTrue( securityManager.hasAccess( rootPrincipal, etc ) );
        assertTrue( securityManager.hasAccess( user, opt ) );
        assertTrue( securityManager.hasAccess( user, tmp ) );
        assertFalse( securityManager.hasAccess( user, etc ) );
        assertTrue( securityManager.hasAccess( guest, tmp ) );
        assertFalse( securityManager.hasAccess( guest, opt ) );
    }
}
