package org.neo4j.examples.workshop.tutor.tree;

import org.neo4j.graphdb.GraphDatabaseService;

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
		// Create a node to represent the new file.
		// Set the name of the file using File.NAME key.
		// Create the File object wrapping the node and return it

        // TODO Your code here...
        return null;
	}
}
