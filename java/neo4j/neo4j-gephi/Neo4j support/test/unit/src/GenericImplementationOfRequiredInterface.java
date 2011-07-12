
import java.awt.Color;
import org.gephi.neo4j.api.DebugTarget;
import org.gephi.neo4j.api.Neo4jDelegateNodeDebugger;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.kernel.Traversal;

/**
 *
 * @author Martin Škurla
 */
public class GenericImplementationOfRequiredInterface implements Neo4jDelegateNodeDebugger {
    private Iterable<org.neo4j.graphdb.Path> paths;

    @Override
    public Iterable<org.neo4j.graphdb.Path> paths(GraphDatabaseService graphDB) {
        if (paths == null) {
            org.neo4j.graphdb.Node startNode = graphDB.getNodeById(0);
            paths = Traversal.description().breadthFirst().traverse(startNode);
        }

        return paths;
    }

    @Override
    public boolean isShowNodes() {
        return true;
    }

    @Override
    public boolean isShowRelationships() {
        return true;
    }

    @Override
    public Color getNodesColor() {
        return Color.RED;
    }

    @Override
    public Color getRelationshipsColor() {
        return Color.BLUE;
    }

    @Override
    public DebugTarget getDebugTarget() {
        return DebugTarget.PATHS;
    }
}
