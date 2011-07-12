package neo4j;

import java.io.File;
import java.util.HashMap;
import java.util.Map;
import java.util.Random;
import org.neo4j.graphdb.Direction;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Node;
import org.neo4j.graphdb.Relationship;
import org.neo4j.graphdb.Transaction;
import org.neo4j.kernel.EmbeddedGraphDatabase;
import org.neo4j.kernel.impl.batchinsert.BatchInserter;
import org.neo4j.kernel.impl.batchinsert.BatchInserterImpl;

public class Neo4jWrapper {
    private static final String DATABASE_PATH = "/Users/lwy08/Neo4j_database.db";
    private static final String PROPERTY_NAME = "name";
    private static final int    NUMBER_OF_ITERATIONS = 1;

    public void initializeDatabase() {
        GraphDatabaseService graphDB = new EmbeddedGraphDatabase(DATABASE_PATH);

        graphDB.shutdown();
    }

    public void testEmbeddedGraphDatabase() {
        EmbeddedGraphDatabaseTester.test();
    }

    public void testBatchInserter() {
        BatchInserterTester.test();
    }

    public void testNewTraversalAPI() {
        GraphDatabaseService graphDB = new EmbeddedGraphDatabase(DATABASE_PATH);

        Transaction transaction = graphDB.beginTx();

        try {
            insertRealData(graphDB);

            Node referenceNode = graphDB.getReferenceNode();
            testNewTraversalAbilities(referenceNode);

            transaction.success();
        }
        finally {
            transaction.finish();
        }

        graphDB.shutdown();
    }

    private void testNewTraversalAbilities(Node startingNode) {
        TraversalTester.testDefaultTraversing(startingNode);
        TraversalTester.testTraversingProjectAndUsesRelationshipsWithoutStartNode(startingNode);
        TraversalTester.testTraversingDepth3ContainingNodeValueC(startingNode);
        TraversalTester.testTraversingOnlyProjectsAndCustomersNodes(startingNode);
        TraversalTester.testTraversingPruneAfterProjectsOrCustomerRelationships(startingNode);
        TraversalTester.testTraversingRelTypes(startingNode);
    }

    private void insertRealData(GraphDatabaseService graphDB) {
        Node referenceNode = graphDB.getReferenceNode();
        // ignore inserting data again, if they already exist
        if (referenceNode.hasRelationship())
            return;

        // reference node [1]
        //     |- middle node for customers [1]
        //         |-customer [n]
        //             |- vehicle [1]
        Node middleCustomerNode = graphDB.createNode();
        middleCustomerNode.setProperty(PROPERTY_NAME, "middle customer node");
        referenceNode.createRelationshipTo(middleCustomerNode, MyRelationshipTypes.CUSTOMERS);

        String[] customerNames = {"Google", "Microsoft", "Oracle", "IBM", "SAP", "Apple"};
        for (String customerName : customerNames) {
            Node customerNode = graphDB.createNode();
            customerNode.setProperty(PROPERTY_NAME, customerName);

            middleCustomerNode.createRelationshipTo(customerNode, MyRelationshipTypes.CUSTOMER);

            String[] vehicles = {"CARS", "BUSES", "AIRPLANES"};
            Node vehicleNode = graphDB.createNode();
            vehicleNode.setProperty(PROPERTY_NAME, vehicles[new Random().nextInt(vehicles.length)]);

            customerNode.createRelationshipTo(vehicleNode, MyRelationshipTypes.USES);
        }

        // reference node [1]
        //     |- middle node for projects [1]
        //         |- project [n]
        Node middleProjectNode = graphDB.createNode();
        middleProjectNode.setProperty(PROPERTY_NAME, "middle project node");
        referenceNode.createRelationshipTo(middleProjectNode, MyRelationshipTypes.PROJECTS);

        String[] openSourceProjectNames = {"GCC", "KDE", "Gnome", "Mozilla", "Chromium", "Gephi", "OpenJDK", "Inkscape"};
        for (String openSourceProjectName : openSourceProjectNames) {
            Node projectNode = graphDB.createNode();
            projectNode.setProperty(PROPERTY_NAME, openSourceProjectName);

            middleProjectNode.createRelationshipTo(projectNode, MyRelationshipTypes.PROJECT);
        }

        // reference node [1]
        //     |- nodes for all primitive types, string and array of these types
         referenceNode.setProperty("byte",  (byte)  1);
         referenceNode.setProperty("short", (short) 2);
         referenceNode.setProperty("int",           3);
         referenceNode.setProperty("long",          4L);
         referenceNode.setProperty("float",         5.0f);
         referenceNode.setProperty("double",        6.0);
         referenceNode.setProperty("boolean",       true);
         referenceNode.setProperty("char",          'A');
         referenceNode.setProperty("string",        "LALALA");

         referenceNode.setProperty("array byte",    new byte[]    {1, 2, 3});
         referenceNode.setProperty("array short",   new short[]   {1, 2, 3});
         referenceNode.setProperty("array int",     new int[]     {1, 2, 3});
         referenceNode.setProperty("array long",    new long[]    {1, 2, 3});
         referenceNode.setProperty("array float",   new float[]   {1, 2, 3});
         referenceNode.setProperty("array double",  new double[]  {1, 2, 3});
         referenceNode.setProperty("array boolean", new boolean[] {true, false, true});
         referenceNode.setProperty("array char",    new char[]    {'a', 'b', 'c'});
         referenceNode.setProperty("array string",  new String[]  {"a", "b", "c"});
    }

    public void clean() {
        File databaseDirectory = new File(DATABASE_PATH);

        for (File databaseFile : databaseDirectory.listFiles())
            databaseFile.delete();

        databaseDirectory.delete();
    }


    private static class TraversalTester {
        private static final TraversalDescription traversalDescription;
        
        private static RelationshipExpander relationshipExpander;
        private static Predicate<Path>      predicate;
        private static PruneEvaluator       pruneEvaluator;


        static {
            traversalDescription = Traversal.description();
        }

        private TraversalTester() {}


        public static void testDefaultTraversing(Node startNode) {
            System.out.println("Default traversing through all nodes. {DEPTH_FIRST}");

            relationshipExpander = Traversal.expanderForAllTypes();
            predicate = new Predicate<Path>() {
                @Override
                public boolean accept(Path path) {
                    return true;
                }
            };
            pruneEvaluator = PruneEvaluator.NONE;

            doTraversing(startNode, TraversalOrder.DEPTH_FIRST);
        }

        public static void testTraversingProjectAndUsesRelationshipsWithoutStartNode(Node startNode) {
            System.out.println("Traversing through all nodes and return only those which are connected with" +
                    " PROJECT or USES relationships and without start node. {BREADTH_FIRST}");

            relationshipExpander = Traversal.expanderForAllTypes();
            predicate = new Predicate<Path>() {
                @Override
                public boolean accept(Path path) {
                    if (path.length() == 0)
                        return false;

                    return path.lastRelationship().isType(MyRelationshipTypes.PROJECT) ||
                           path.lastRelationship().isType(MyRelationshipTypes.USES);
                }
            };
            pruneEvaluator = PruneEvaluator.NONE;
            
            doTraversing(startNode, TraversalOrder.BREADTH_FIRST);
        }

        public static void testTraversingDepth3ContainingNodeValueC(Node startNode) {
            System.out.println("Traversing through nodes at depth 3 or all nodes which property value contain 'c'. {DEPTH_FIRST}");

            relationshipExpander = Traversal.expanderForAllTypes();
            predicate = new Predicate<Path>() {
                @Override
                public boolean accept(Path path) {
                    try {
                        return path.length() == 3 ||
                                ((String)path.endNode().getProperty(PROPERTY_NAME)).toLowerCase().contains("c");
                    }
                    catch (Exception e) {
                        // if property in node if not found
                        return false;
                    }
                }
            };
            pruneEvaluator = PruneEvaluator.NONE;

            doTraversing(startNode, TraversalOrder.DEPTH_FIRST);
        }

        public static void testTraversingOnlyProjectsAndCustomersNodes(Node startNode) {
            System.out.println("Traversing through all nodes which are connected through PROJECTS and CUSTOMERS" +
                    " relationships and without start node. {BREADTH_FIRST}");

            relationshipExpander =
                    Traversal.expanderForTypes(MyRelationshipTypes.PROJECTS,  Direction.BOTH,
                                               MyRelationshipTypes.CUSTOMERS, Direction.BOTH);
            predicate = new Predicate<Path>() {
                @Override
                public boolean accept(Path path) {
                    return path.length() != 0;
                }
            };
            pruneEvaluator = PruneEvaluator.NONE;

            doTraversing(startNode, TraversalOrder.BREADTH_FIRST);
        }

        public static void testTraversingPruneAfterProjectsOrCustomerRelationships(Node startNode) {
            System.out.println("Traversing through all nodes and stop traversing each path after PROJECTS" +
                    " or CUSTOMER relationships. {DEPTH_FIRST}");

            relationshipExpander = Traversal.expanderForAllTypes();
            predicate = new Predicate<Path>() {
                @Override
                public boolean accept(Path path) {
                    return true;
                }
            };
            pruneEvaluator = new PruneEvaluator() {
                @Override
                public boolean pruneAfter(Path path) {
                    return path.lastRelationship().isType(MyRelationshipTypes.PROJECTS) ||
                           path.lastRelationship().isType(MyRelationshipTypes.CUSTOMER);
                }
            };

            doTraversing(startNode, TraversalOrder.DEPTH_FIRST);
        }

        public static void testTraversingRelTypes(Node startNode) {
            System.out.println("Traversing through CUSTOMERS relationships in both directions {DEPTH_FIRST}");

            TraversalDescription currentDescription = traversalDescription.depthFirst();

            Traverser traverser =
                currentDescription.relationships(MyRelationshipTypes.CUSTOMERS, Direction.BOTH)
                                  .traverse(startNode);

            printResults(traverser);
        }

        private static void doTraversing(Node startNode, TraversalOrder traversalOrder) {
            TraversalDescription currentDescription;

            switch (traversalOrder) {
                case BREADTH_FIRST:
                    currentDescription = traversalDescription.breadthFirst();
                    break;
                case DEPTH_FIRST:
                    currentDescription = traversalDescription.depthFirst();
                    break;
                default:
                    throw new IllegalArgumentException();
            }

            Traverser traverser =
                currentDescription.expand(relationshipExpander)
                                  .filter(predicate)
                                  .prune(pruneEvaluator)
                                  .traverse(startNode);

            printResults(traverser);
        }

        private static void printResults(Traverser traverser) {
            for (Path path : traverser) {
                // print indent
                for (int depth = 0; depth < path.length(); depth++)
                    System.out.print("\t");

                if (path.length() == 0)
                    System.out.printf("%s[%d]\n",
                            "START_NODE",
                            path.endNode().getId());
                else
                    System.out.printf("%s[%d] connected with relationship: %s\n",
                            path.endNode().getProperty(PROPERTY_NAME),
                            path.endNode().getId(),
                            path.lastRelationship().getType().name());
            }
            System.out.println();
        }
    }

    private static class EmbeddedGraphDatabaseTester {
        private static GraphDatabaseService graphDB;
        private static Transaction transaction;

        private EmbeddedGraphDatabaseTester() {}

        public static void test() {
            createEmbeddedDatabase();
            beginTransaction();

            try {
                doInsertingData();
                successTransaction();
            }
            finally {
                finishTransaction();
            }

            shutdownEmbeddedDatabase();
        }

        private static void createEmbeddedDatabase() {
            graphDB = new EmbeddedGraphDatabase(DATABASE_PATH);
        }

        private static void shutdownEmbeddedDatabase() {
            graphDB.shutdown();
        }

        private static void beginTransaction() {
            transaction = graphDB.beginTx();
        }

        private static void successTransaction() {
            transaction.success();
        }

        private static void finishTransaction() {
            transaction.finish();
        }

        private static void doInsertingData() {
            final String PROPERTY_NAME = "PropertyNameED";

            for (int count = 0; count < NUMBER_OF_ITERATIONS; count++) {
                Node firstNode = graphDB.createNode();
                firstNode.setProperty(PROPERTY_NAME + count, "Hello, ");

                Node secondNode = graphDB.createNode();
                secondNode.setProperty(PROPERTY_NAME + count, "world!");

                Relationship relationship = firstNode.createRelationshipTo(secondNode, MyRelationshipTypes.KNOWS);
                relationship.setProperty(PROPERTY_NAME + count, "brave Neo4j ");
            }
        }
    }

    private static class BatchInserterTester {
        private static BatchInserter batchInserter;

        private BatchInserterTester() {}

        public static void test() {
            createBatchInserter();

            doInsertingData();

            shutdownBatchInserter();
        }

        private static void createBatchInserter() {
            batchInserter = new BatchInserterImpl(DATABASE_PATH);
        }

        private static void shutdownBatchInserter() {
            batchInserter.shutdown();
        }

        private static void doInsertingData() {
            final String PROPERTY_NAME = "PropertyNameBI";

            for (int count = 0; count < NUMBER_OF_ITERATIONS; count++) {
                Map<String, Object> node1Data = new HashMap<String, Object>();
                node1Data.put(PROPERTY_NAME + count, "Hello, ");

                Map<String, Object> node2Data = new HashMap<String, Object>();
                node2Data.put(PROPERTY_NAME + count, "world!");

                Map<String, Object> relationshipData = new HashMap<String, Object>();
                relationshipData.put(PROPERTY_NAME + count, "brave Neo4j ");

                long node1Id = batchInserter.createNode(node1Data);
                long node2Id = batchInserter.createNode(node2Data);

                batchInserter.createRelationship(node1Id, node2Id, MyRelationshipTypes.KNOWS, relationshipData);
            }
        }
    }

    private enum TraversalOrder {
        DEPTH_FIRST,
        BREADTH_FIRST
    }
}
