package org.neo4j.examples.workshopextra.solution.security;

import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Node;

public abstract class NodeWrapper
{
    private final GraphDatabaseService graphDb;
    private final Node underlyingNode;
    
    public NodeWrapper( GraphDatabaseService graphDb, Node underlyingNode )
    {
        this.graphDb = graphDb;
        this.underlyingNode = underlyingNode;
    }
    
    protected GraphDatabaseService getGraphDb()
    {
        return this.graphDb;
    }
    
    protected Node getUnderlyingNode()
    {
        return this.underlyingNode;
    }

    @Override
    public boolean equals( Object o )
    {
        if ( !getClass().isAssignableFrom( o.getClass() ) )
        {
            return false;
        }
        return this.getUnderlyingNode().equals(
                ( (NodeWrapper) o ).getUnderlyingNode() );
    }

    @Override
    public int hashCode()
    {
        return getUnderlyingNode().hashCode();
    }
}
