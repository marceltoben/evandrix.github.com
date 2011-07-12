package org.neo4j.examples.workshop.tutor.tree;

import java.util.AbstractCollection;
import java.util.Iterator;

import org.neo4j.graphdb.Node;
import org.neo4j.graphdb.Traverser;

public class File
{
    public static final String NAME = "filename";

    private Node underlyingNode;

    File( Node underlyingNode )
    {
        this.underlyingNode = underlyingNode;
    }

    Node getUnderlyingNode()
    {
        return underlyingNode;
    }

    public String getFileName()
    {
        // Read the "filename" property from the underlying node and return it.
        
        // TODO Your code here...
        return null;
    }

    public void changeFileName( String newName )
    {
        // Set the new "filename" property on the underlying node

        // TODO Your code here...
    }

    public File getParent()
    {
        // If this file has a parent return the parent, else null
        // Find the parent node by following the incoming FILE relationship
        // and wrap it in a File object and return.
        
        // TODO Your code here...
        return null;
    }

    public void addChild( File child )
    {
        // Verify that child doesn't have a parent, if it has parent throw
        // IllegalArgumentException.
        // Connect this file to child via FILE relationship.

        // TODO Your code here...
    }

    public void disconnectFromParent()
    {
        // Delete FILE relationship between this and parent
        // If this file doesn't have a parent do nothing

        // TODO Your code here...
    }

    public Iterable<File> getChildren()
    {
        // Create traverser that returns all files (not including this one)
        // with a depth limit of 1.
        // Pass the traverser into a FileIterable instance and return.

        // TODO Your code here...
        return null;
    }

    // use this to convert from a Iterable<Node> to Iterable<File>
    // ex. return new FileIterable( node.traverse( ... ) );
    private static class FileIterable extends AbstractCollection<File>
    {
        private final Iterator<Node> nodeIterator;

        FileIterable( Traverser traverser )
        {
            this.nodeIterator = traverser.iterator();
        }

        @Override
        public Iterator<File> iterator()
        {
            return new Iterator<File>()
            {
                public boolean hasNext()
                {
                    return nodeIterator.hasNext();
                }

                public File next()
                {
                    return new File( nodeIterator.next() );
                }

                public void remove()
                {
                    throw new UnsupportedOperationException();
                }
            };
        }

        @Override
        public int size()
        {
            throw new UnsupportedOperationException();		
        }
    }

    public void delete()
    {
        // If has parent disconnect from it
        // Delete all children, recursively
        // Delete this node

        // TODO Your code here...
    }

    @Override
    public boolean equals( Object o )
    {
        if ( !( o instanceof File ) )
        {
            return false;
        }
        return this.getUnderlyingNode().equals( ( (File) o ).getUnderlyingNode() );
    }

    @Override
    public int hashCode()
    {
        return getUnderlyingNode().hashCode();
    }
}
