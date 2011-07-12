package org.gephi.neo4j.api;


import java.awt.Color;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Path;


/**
 *
 * @author Martin Škurla
 */
public final class MutableNeo4jDelegateNodeDebugger implements Neo4jDelegateNodeDebugger {
    private final Neo4jDelegateNodeDebugger neo4jDebugger;

    private boolean     showNodes;
    private boolean     showRelationships;
    private Color       nodesColor;
    private Color       relationshipsColor;
    private DebugTarget debugTarget;


    public MutableNeo4jDelegateNodeDebugger(Neo4jDelegateNodeDebugger sourceNeo4jDebugger) {
        this.neo4jDebugger = sourceNeo4jDebugger;

        this.showNodes = sourceNeo4jDebugger.isShowNodes();
        this.showRelationships = sourceNeo4jDebugger.isShowRelationships();

        this.nodesColor = sourceNeo4jDebugger.getNodesColor();
        this.relationshipsColor = sourceNeo4jDebugger.getRelationshipsColor();

        this.debugTarget = sourceNeo4jDebugger.getDebugTarget();
    }


    @Override
    public Iterable<Path> paths(GraphDatabaseService graphDB) {
        return neo4jDebugger.paths(graphDB);
    }

// <editor-fold defaultstate="collapsed" desc="Getters & setters">
    @Override
    public boolean isShowNodes() {
        return showNodes;
    }

    public void setShowNodes(boolean showNodes) {
        this.showNodes = showNodes;
    }

    @Override
    public boolean isShowRelationships() {
        return showRelationships;
    }

    public void setShowRelationships(boolean showRelationships) {
        this.showRelationships = showRelationships;
    }

    @Override
    public Color getNodesColor() {
        return nodesColor;
    }

    public void setNodesColor(Color nodesColor) {
        this.nodesColor = nodesColor;
    }

    @Override
    public Color getRelationshipsColor() {
        return relationshipsColor;
    }

    public void setRelationshipsColor(Color relationshipsColor) {
        this.relationshipsColor = relationshipsColor;
    }

    @Override
    public DebugTarget getDebugTarget() {
        return debugTarget;
    }

    public void setDebugTarget(DebugTarget debugTarget) {
        this.debugTarget = debugTarget;
    }
// </editor-fold>
}
