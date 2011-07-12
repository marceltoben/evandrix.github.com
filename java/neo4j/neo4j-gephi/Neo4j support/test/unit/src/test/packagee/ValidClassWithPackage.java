package test.packagee;


import java.awt.Color;
import org.gephi.neo4j.api.DebugTarget;
import org.gephi.neo4j.api.Neo4jDelegateNodeDebugger;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Path;


public class ValidClassWithPackage implements Neo4jDelegateNodeDebugger {

    @Override
    public Iterable<Path> paths(GraphDatabaseService graphDB) {
        return null;
    }

    @Override
    public boolean isShowNodes() {
        return false;
    }

    @Override
    public boolean isShowRelationships() {
        return false;
    }

    @Override
    public Color getNodesColor() {
        return null;
    }

    @Override
    public Color getRelationshipsColor() {
        return null;
    }

    @Override
    public DebugTarget getDebugTarget() {
        return null;
    }
}
