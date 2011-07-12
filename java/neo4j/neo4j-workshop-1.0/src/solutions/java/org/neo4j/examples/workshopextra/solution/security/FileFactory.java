package org.neo4j.examples.workshopextra.solution.security;

import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Node;

public class FileFactory
{
	private final GraphDatabaseService graphDb;
	
	public FileFactory( GraphDatabaseService graphDb )
	{
	    this.graphDb = graphDb;
	}
	
	public File createFile( String name )
	{
		if ( name == null )
		{
			throw new IllegalArgumentException( "Null name" );
		}
		// Create a node to represent the new file and connect it to the reference node
		// Set the name of the file using File.NAME key.
		// Create the File object wrapping the node and return it
		Node fileNode = this.graphDb.createNode();
		graphDb.getReferenceNode().createRelationshipTo( fileNode,
		        SecurityRelationshipTypes.ROOT_FILE );
		fileNode.setProperty( File.NAME, name );
		return new File( graphDb, fileNode );
	}
}
