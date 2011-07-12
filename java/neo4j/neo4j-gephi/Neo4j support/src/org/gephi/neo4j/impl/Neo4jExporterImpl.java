package org.gephi.neo4j.impl;


import java.util.Collection;
import org.gephi.graph.api.Edge;
import org.gephi.graph.api.GraphController;
import org.gephi.graph.api.GraphModel;
import org.gephi.neo4j.api.Neo4jExporter;
import org.gephi.utils.longtask.spi.LongTask;
import org.gephi.utils.progress.ProgressTicket;
import org.neo4j.graphdb.GraphDatabaseService;
import org.neo4j.graphdb.Transaction;
import org.neo4j.remote.RemoteGraphDatabase;
import org.openide.util.Lookup;
import org.openide.util.NbBundle;
import org.openide.util.lookup.ServiceProvider;


/**
 *
 * @author Martin Škurla
 */
@ServiceProvider(service=Neo4jExporter.class)
public class Neo4jExporterImpl implements Neo4jExporter, LongTask {
    private GraphDatabaseService graphDB;
    private GraphModelExportConverter graphModelExportConverter;
    private String fromColumn;
    private String defaultValue;
    private Collection<String> exportedEdgeColumnNames;
    private Collection<String> exportedNodeColumnNames;

    private ProgressTicket progressTicket;
    private boolean cancelExport;


    @Override
    public boolean cancel() {
        cancelExport = true;
        return true;
    }

    @Override
    public void setProgressTicket(ProgressTicket progressTicket) {
        cancelExport = false;
        this.progressTicket = progressTicket;
    }

    @Override
    public void exportDatabase(GraphDatabaseService graphDB, String fromColumn, String defaultValue, Collection<String> exportedEdgeColumnNames, Collection<String> exportedNodeColumnNames) {
        this.graphDB = graphDB;
        this.fromColumn = fromColumn;
        this.defaultValue = defaultValue;
        this.exportedEdgeColumnNames = exportedEdgeColumnNames;
        this.exportedNodeColumnNames = exportedNodeColumnNames;

        String longTaskMessage = (graphDB instanceof RemoteGraphDatabase)
                ? NbBundle.getMessage(Neo4jExporterImpl.class, "CTL_Neo4j_RemoteExportMessage")
                : NbBundle.getMessage(Neo4jExporterImpl.class, "CTL_Neo4j_LocalExportMessage");

        progressTicket.setDisplayName(longTaskMessage);
        progressTicket.start();

        doExport();
    }

    private void doExport() {
        Transaction transaction = graphDB.beginTx();
        try {
            exportGraph();

            if (!cancelExport)
                transaction.success();
        }
        finally {
            transaction.finish();
        }

        graphDB.shutdown();
        progressTicket.finish();
    }

    private void exportGraph() {
        graphModelExportConverter = GraphModelExportConverter.getInstance(graphDB);
        GraphModel graphModel = Lookup.getDefault().lookup(GraphController.class).getModel();

        exportNodes(graphModel.getGraph().getNodes());
        exportEdges(graphModel.getGraph().getEdges());
    }

    private void exportNodes(Iterable<org.gephi.graph.api.Node> nodes) {
        for (org.gephi.graph.api.Node node : nodes) {
            if (cancelExport)
                return;

                processNode(node);
        }
    }

    private void processNode(org.gephi.graph.api.Node node) {
        graphModelExportConverter.createNeoNodeFromGephiNode(node, exportedNodeColumnNames);
    }

    private void exportEdges(Iterable<Edge> edges) {
        for (Edge edge : edges) {
            if (cancelExport)
                return;

            processEdge(edge);
        }
    }

    private void processEdge(Edge edge) {
        graphModelExportConverter.createNeoRelationship(edge, exportedEdgeColumnNames, fromColumn, defaultValue);
    }
}
