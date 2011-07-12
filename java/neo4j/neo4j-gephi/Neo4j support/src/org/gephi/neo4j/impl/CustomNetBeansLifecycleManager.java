package org.gephi.neo4j.impl;


import java.util.Collection;
import java.util.Iterator;
import org.gephi.utils.longtask.api.LongTaskExecutor;
import org.gephi.utils.longtask.spi.LongTask;
import org.gephi.utils.progress.ProgressTicket;
import org.neo4j.graphdb.GraphDatabaseService;
import org.openide.LifecycleManager;
import org.openide.util.Lookup;
import org.openide.util.NbBundle;
import org.openide.util.lookup.ServiceProvider;


/**
 *
 * @author Martin Škurla
 */
@ServiceProvider(service = LifecycleManager.class, position = 1)
public class CustomNetBeansLifecycleManager extends LifecycleManager {

    @Override public void saveAll() {}

    @Override
    public void exit() {
        final ClosingNeo4jDatabasesLongTask closingNeo4jDatabasesLongTask = new ClosingNeo4jDatabasesLongTask();

        LongTaskExecutor executor = new LongTaskExecutor(false);
        executor.execute(closingNeo4jDatabasesLongTask, new Runnable() {

            @Override
            public void run() {
                closingNeo4jDatabasesLongTask.closeNeo4jDatabases();
            }
        });

        Collection c = Lookup.getDefault().lookup(new Lookup.Template(LifecycleManager.class)).allInstances();
        for (Iterator i = c.iterator(); i.hasNext();) {
            LifecycleManager lm = (LifecycleManager) i.next();
            if (lm != this) {
                lm.exit();
            }
        }
    }

    private class ClosingNeo4jDatabasesLongTask implements LongTask {
        private ProgressTicket progressTicket;


        void closeNeo4jDatabases() {
            String longTaskMessage =
                    NbBundle.getMessage(CustomNetBeansLifecycleManager.class, "CTL_Neo4j_ClosingNeo4jDatabasesMessage");
            int numberOfNeo4jDatabases = GraphModelImportConverter.getAllGraphDBs().size();

            progressTicket.setDisplayName(longTaskMessage);
            progressTicket.start(numberOfNeo4jDatabases);

            for (GraphDatabaseService graphDB : GraphModelImportConverter.getAllGraphDBs()) {
                graphDB.shutdown();
                progressTicket.progress();
            }

            progressTicket.finish();
        }

        @Override
        public boolean cancel() {
            // it is essential to close all Neo4j databases, so canceling is not supported
            return false;
        }

        @Override
        public void setProgressTicket(ProgressTicket progressTicket) {
            this.progressTicket = progressTicket;
        }
    }
}
