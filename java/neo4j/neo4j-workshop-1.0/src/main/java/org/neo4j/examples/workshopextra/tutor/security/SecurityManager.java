package org.neo4j.examples.workshopextra.tutor.security;

import org.neo4j.graphdb.GraphDatabaseService;

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
        // "access" property on that relationship to the value of the
        // 'trueForAccessGranted' variable

        // TODO Your code here...
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

        // TODO Your code here...
        return false;
    }
}
