package org.neo4j.examples.workshop.tutor.tree;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import org.neo4j.examples.workshop.util.DbUtils;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Transaction;
import org.neo4j.kernel.EmbeddedGraphDatabase;

public class TestTree
{
	private static GraphDatabaseService graphDb;
	private static FileFactory fileFactory;
	private Transaction tx;
	
	@BeforeClass
	public static void setUpDb()
	{
	    DbUtils.delete( ListFileStructure.PATH );
		graphDb = new EmbeddedGraphDatabase( ListFileStructure.PATH );
		fileFactory = new FileFactory( graphDb );
	}
	
	@Before
	public void startTransaction()
	{
        tx = graphDb.beginTx();
	}
	
	@After
	public void finishTransaction()
	{
        tx.success();
        tx.finish();
	}
	
	@AfterClass
	public static void tearDown()
	{
		graphDb.shutdown();
	}
	
	private void restartTx()
	{
	    tx.success();
	    tx.finish();
	    tx = graphDb.beginTx();
	}
	
	@Test
	public void testCreateChangeDelete()
	{
		try
		{
			fileFactory.createFile( null );
			fail( "Shouldn't be able to create a file with null name" );
		}
		catch ( IllegalArgumentException e )
		{ // good
		}
		File parent = fileFactory.createFile( "parent" );
		File file1 = fileFactory.createFile( "root1" );
		File file2 = fileFactory.createFile( "root2" );
		parent.addChild( file1 );
		// just commit stuff we created so far
		restartTx();
		assertEquals( "root1", file1.getFileName() );
		assertEquals( "root2", file2.getFileName() );
		file1.changeFileName( "root3" );
		assertEquals( "root3", file1.getFileName() );
		file1.delete();
		file2.delete();
		assertFalse( parent.getChildren().iterator().hasNext() );
		parent.delete();
	}
	
	@Test
	public void testParentChild()
	{
		File root = fileFactory.createFile( "root" );
		assertTrue( root.getParent() == null );
		File child1 = fileFactory.createFile( "child1" );
		root.addChild( child1 );
		assertTrue( root.getParent() == null );
		assertEquals( root, child1.getParent() );
		int count = 0;
		for ( File child : root.getChildren() )
		{
			assertEquals( child, child1 );
			count++;
		}
		assertEquals( 1, count );
		// just commit stuff we created so far
		restartTx();
		File child2 = fileFactory.createFile( "child2" );
		root.addChild( child2 );
		count = 0;
		for ( File child : root.getChildren() )
		{
			assertTrue( child.equals( child1 ) || child.equals( child2 ) );
			count++;
		}
		assertEquals( 2, count );
		child1.disconnectFromParent();
		assertTrue( child1.getParent() == null );
		// verify we can do disconnect many times
		child1.disconnectFromParent();
		// add one more depth
		File child21 = fileFactory.createFile( "child21" );
		File child22 = fileFactory.createFile( "child22" );
		child2.addChild( child21 );
		child2.addChild( child22 );
		restartTx();
		count = 0;
		for ( File child : child2.getChildren() )
		{
			assertTrue( child.equals( child21 ) || child.equals( child22 ) );
			count++;
		}
		assertEquals( 2, count );
		count = 0;
		for ( File child : root.getChildren() )
		{
			assertEquals( child, child2 );
			count++;
		}
		assertEquals( 1, count );
		// cleanup
		root.delete(); // root,child2,child21,child22
		child1.delete();
	}
	
	@Test
	public void testWrongAddChild()
	{
		File root = fileFactory.createFile( "root" );
		File child1 = fileFactory.createFile( "child1" );
		File child2 = fileFactory.createFile( "child2" );
		root.addChild( child1 );
		root.addChild( child2 );
		try
		{
			child1.addChild( child2 );
			fail( "Should've thrown exception when adding a child to a parent " +
					"when it already has another parent" );
		}
		catch ( IllegalArgumentException e )
		{ // good
		}
	}
}
