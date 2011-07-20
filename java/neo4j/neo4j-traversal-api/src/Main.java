import neo4j.Neo4jWrapper;


public class Main {
    private Main() {}

    public static void main(String[] args) {
        Neo4jWrapper neo4jWrapper = new Neo4jWrapper();
        neo4jWrapper.initializeDatabase();
        neo4jWrapper.testEmbeddedGraphDatabase();
        neo4jWrapper.testBatchInserter();
        neo4jWrapper.testNewTraversalAPI();
        neo4jWrapper.clean();
    }
}
