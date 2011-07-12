package org.gephi.neo4j.api;


import java.awt.Color;
import org.neo4j.graphdb.GraphDatabaseService;


/**
 *
 * @author Martin Škurla
 */
public interface Neo4jDelegateNodeDebugger {
    Iterable<org.neo4j.graphdb.Path> paths(GraphDatabaseService graphDB);

    boolean isShowNodes();
    boolean isShowRelationships();

    Color getNodesColor();
    Color getRelationshipsColor();

    DebugTarget getDebugTarget();
}
