package org.neo4j.examples.workshopextra.tutor.security;

import org.neo4j.commons.iterator.IterableWrapper;
import org.neo4j.graphdb.Direction;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Node;
import org.neo4j.graphdb.Relationship;
import org.neo4j.graphdb.ReturnableEvaluator;
import org.neo4j.graphdb.StopEvaluator;
import org.neo4j.graphdb.Traverser;
import org.neo4j.graphdb.Traverser.Order;

public class File extends NodeWrapper
{
    public static final String NAME = "filename";
    
    File( GraphDatabaseService graphDb, Node underlyingNode )
    {
        super( graphDb, underlyingNode );
    }

    public String getFileName()
    {
        // Read the "filename" property from the underlying node and return it.
        return (String) getUnderlyingNode().getProperty( NAME );
    }

    public void changeFileName( String newName )
    {
        // Set the new "filename" property on the underlying node
        getUnderlyingNode().setProperty( NAME, newName );
    }

    public File getParent()
    {
        // If this file has a parent return the parent, else null
        // Find the parent node by following the incoming FILE relationship
        // and wrap it in a File object and return.
        Relationship parentRelationship = getUnderlyingNode().getSingleRelationship(
                SecurityRelationshipTypes.FILE, Direction.INCOMING );
        return parentRelationship != null ?
                new File( getGraphDb(), parentRelationship.getStartNode() ) : null;
    }

    public void addChild( File child )
    {
        // Verify that child doesn't have a parent, if it has parent throw
        // IllegalArgumentException.
        // Connect this file to child via FILE relationship.
        // Remove the ROOT_FILE relationship since this file is no longer a root.
        if ( child.getParent() != null )
        {
            throw new IllegalArgumentException( "Child already has a parent" );
        }
        getUnderlyingNode().createRelationshipTo( child.getUnderlyingNode(),
                SecurityRelationshipTypes.FILE );
        child.deleteRootRelIfAny();
    }
    
    private void deleteRootRelIfAny()
    {
        Relationship rootRel = getUnderlyingNode().getSingleRelationship(
                SecurityRelationshipTypes.ROOT_FILE, Direction.INCOMING );
        if ( rootRel != null )
        {
            rootRel.delete();
        }
    }

    public void disconnectFromParent()
    {
        // Delete FILE relationship between this and parent
        // If this file doesn't have a parent do nothing
        Relationship parentRelationship = getUnderlyingNode().getSingleRelationship(
                SecurityRelationshipTypes.FILE, Direction.INCOMING );
        if ( parentRelationship != null )
        {
            parentRelationship.delete();
            getGraphDb().getReferenceNode().createRelationshipTo( getUnderlyingNode(),
                    SecurityRelationshipTypes.ROOT_FILE );
        }
    }

    public Iterable<File> getChildren()
    {
        // Create traverser that returns all files (not including this one)
        // with a depth limit of 1.
        // Pass the traverser into an IterableWrapper and return.
        Traverser traverser = getUnderlyingNode().traverse( Order.BREADTH_FIRST, 
                StopEvaluator.DEPTH_ONE, ReturnableEvaluator.ALL_BUT_START_NODE,
                SecurityRelationshipTypes.FILE, Direction.OUTGOING ); 
        return new IterableWrapper<File, Node>( traverser )
        {
            @Override
            protected File underlyingObjectToObject( Node node )
            {
                return new File( getGraphDb(), node );
            }
        };
    }

    public void delete()
    {
        // If has parent disconnect from it
        // If it has ACCESS relationships, delete them
        // Delete all children, recursively
        // Delete this node
        for ( Relationship accessRel : getUnderlyingNode().getRelationships(
                SecurityRelationshipTypes.ACCESS ) )
        {
            accessRel.delete();
        }
        disconnectFromParent();
        for ( File file : getChildren() )
        {
            file.delete();
        }
        deleteRootRelIfAny();
        getUnderlyingNode().delete();
    }
}
