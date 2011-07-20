package org.neo4j.examples.workshopextra.solution.security;

import org.neo4j.graphdb.Direction;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Node;
import org.neo4j.graphdb.Relationship;
import org.neo4j.graphdb.ReturnableEvaluator;
import org.neo4j.graphdb.StopEvaluator;
import org.neo4j.graphdb.Traverser;
import org.neo4j.graphdb.Traverser.Order;

public class SecurityManager
{
    public static final String ACCESS = "access";
    
    private final GraphDatabaseService graphDb;
    
    public SecurityManager( GraphDatabaseService graphDb )
    {
        this.graphDb = graphDb;
    }
    
    public void addAccess( Principal principal, File file,
            boolean trueForAccessGranted )
    {
        // Add an ACCESS relationship from principal to file. If such a
        // relationship already exists between those two nodes, just set the
        // "access" property on that relationship to true or false.
        Relationship existingRel = null;
        for ( Relationship rel : principal.getUnderlyingNode().getRelationships(
                SecurityRelationshipTypes.ACCESS, Direction.OUTGOING ) )
        {
            if ( rel.getEndNode().equals( file.getUnderlyingNode() ) )
            {
                existingRel = rel;
                break;
            }
        }
        
        if ( existingRel == null )
        {
            existingRel = principal.getUnderlyingNode().createRelationshipTo(
                    file.getUnderlyingNode(), SecurityRelationshipTypes.ACCESS );
        }
        existingRel.setProperty( ACCESS, trueForAccessGranted );
    }
    
    private Integer depthOfPrincipal( Node from, Node to )
    {
        // Calculate the number of MEMBER hops there are between these
        // two nodes (representing principals). Assume that the "from" node
        // is higher in the herarchy than "to".
        // Return null if there are no MEMBER path between those two principals
        Traverser traverser = to.traverse( Order.DEPTH_FIRST, StopEvaluator.END_OF_GRAPH,
                ReturnableEvaluator.ALL, SecurityRelationshipTypes.MEMBER, Direction.OUTGOING );
        for ( Node principal : traverser )
        {
            if ( principal.equals( from ) )
            {
                return traverser.currentPosition().depth();
            }
        }
        return null;
    }
    
    public boolean hasAccess( Principal principal, File file )
    {
        // Traverse from the file node and upwards through the file system structure and
        // investigate each level for security information (ACCESS relationships).
        // On each level, see if there are any principals related to or identical with
        // the principal concerned.
        // Make sure to use the access information from the principal closest to the
        // principal concerned (i.e. lowest "principal depth").
        // If access information was found, return it. If there's one ACCESS which says NO
        // and another that says YES on the same principal depth, YES will win, but if
        // no ACCESS relationship are found at all, return false.
        // 
        // NOTE: This method might be easier to implement using Node#getRelationships
        // and other such core operations instead of using traversers.
        Integer lowestScore = null;
        Boolean lowestAccess = null;
        for ( Node fileNode : file.getUnderlyingNode().traverse( Order.BREADTH_FIRST,
                StopEvaluator.END_OF_GRAPH, ReturnableEvaluator.ALL,
                SecurityRelationshipTypes.FILE, Direction.INCOMING ) )
        {
            for ( Relationship accessRel : fileNode.getRelationships(
                    SecurityRelationshipTypes.ACCESS, Direction.INCOMING ) )
            {
                Node currentPrincipalNode = accessRel.getStartNode();
                Integer score = depthOfPrincipal( currentPrincipalNode,
                        principal.getUnderlyingNode() );
                if ( score != null )
                {
                    boolean access = (Boolean) accessRel.getProperty( ACCESS );
                    if ( lowestScore == null || score < lowestScore ||
                            ( score == lowestScore && access ) )
                    {
                        lowestScore = score;
                        lowestAccess = access;
                    }
                }
            }
            if ( lowestAccess != null )
            {
                break;
            }
        }
        return lowestAccess != null ? lowestAccess : false;
    }
}
