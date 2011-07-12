package org.neo4j.examples.workshopextra.solution.security;

import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Node;

public class PrincipalFactory
{
    private final GraphDatabaseService graphDb;
    
    public PrincipalFactory( GraphDatabaseService graphDb )
    {
        this.graphDb = graphDb;
    }
    
    public Principal createPrincipal( String name )
    {
        if ( name == null )
        {
            throw new IllegalArgumentException( "Null name" );
        }
        // Create a node to represent the new principal and connect it to the reference node.
        // Set the name of the principal using Principal.NAME key.
        // Create the Principal object wrapping the node and return it
        Node principalNode = this.graphDb.createNode();
        graphDb.getReferenceNode().createRelationshipTo( principalNode,
                SecurityRelationshipTypes.PRINCIPAL );
        principalNode.setProperty( Principal.NAME, name );
        return new Principal( graphDb, principalNode );
    }
    
    public Principal getPrincipal( Node node )
    {
        return new Principal( graphDb, node );
    }
}
