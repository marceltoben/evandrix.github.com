package org.neo4j.examples.workshopextra.solution.security;

import org.neo4j.commons.iterator.IterableWrapper;
import org.neo4j.graphdb.Direction;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Node;
import org.neo4j.graphdb.Relationship;

public class Principal extends NodeWrapper
{
    public static final String NAME = "name";

    public Principal( GraphDatabaseService graphDb, Node underlyingNode )
    {
        super( graphDb, underlyingNode );
    }
    
    public String getName()
    {
        return (String) getUnderlyingNode().getProperty( NAME );
    }
    
    private Iterable<Principal> getMemberships( Direction direction )
    {
        Iterable<Relationship> rels = getUnderlyingNode().getRelationships(
                SecurityRelationshipTypes.MEMBER, direction );
        return new IterableWrapper<Principal, Relationship>( rels )
        {
            @Override
            protected Principal underlyingObjectToObject( Relationship relationship )
            {
                return new Principal( getGraphDb(),
                        relationship.getOtherNode( getUnderlyingNode() ) );
            }
        };
    }
    
    public Iterable<Principal> getMemberships()
    {
        // Return the principals that this principal is a member of If it
        //   isn't member in any principal an empty iterable is returned.
        return getMemberships( Direction.OUTGOING );
    }
    
    public Iterable<Principal> getMembers()
    {
        // Return the principals that are members of this principal. If it has no
        //   members an empty iterable is returned.
        return getMemberships( Direction.INCOMING );
    }
    
    private Relationship findMemberRelationshipTo( Principal principal )
    {
        for ( Relationship rel : principal.getUnderlyingNode().getRelationships(
                SecurityRelationshipTypes.MEMBER, Direction.OUTGOING ) )
        {
            if ( rel.getEndNode().equals( getUnderlyingNode() ) )
            {
                return rel;
            }
        }
        return null;
    }
    
    public void addMember( Principal principal )
    {
        // Add the principal as member in this principal if it isn't
        // already a member.
        if ( findMemberRelationshipTo( principal ) != null )
        {
            return;
        }
        principal.getUnderlyingNode().createRelationshipTo( getUnderlyingNode(),
                SecurityRelationshipTypes.MEMBER );
        principal.deleteRootRelIfAny();
    }
    
    private void deleteRootRelIfAny()
    {
        Relationship rootRel = getUnderlyingNode().getSingleRelationship(
                SecurityRelationshipTypes.PRINCIPAL, Direction.INCOMING );
        if ( rootRel != null )
        {
            rootRel.delete();
        }
    }
    
    public void removeMember( Principal principal )
    {
        Relationship rel = findMemberRelationshipTo( principal );
        if ( rel == null )
        {
            throw new IllegalArgumentException( principal + " not a member of " + this );
        }
        rel.delete();
        if ( !principal.getMemberships().iterator().hasNext() )
        {
            getGraphDb().getReferenceNode().createRelationshipTo(
                    principal.getUnderlyingNode(), SecurityRelationshipTypes.PRINCIPAL );
        }
    }
    
    public void delete()
    {
        for ( Principal memberOfPrincipal : getMemberships() )
        {
            memberOfPrincipal.removeMember( this );
        }
        for ( Relationship accessRel : getUnderlyingNode().getRelationships(
                SecurityRelationshipTypes.ACCESS ) )
        {
            accessRel.delete();
        }
        deleteRootRelIfAny();
        getUnderlyingNode().delete();
    }
    
    @Override
    public String toString()
    {
        return (String) getUnderlyingNode().getProperty( NAME );
    }
}
