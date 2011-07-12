package org.gephi.neo4j.api;

/**
 *
 * @author Martin Škurla
 */
public interface Neo4jVisualDebugger {
    void nextStep(Neo4jDelegateNodeDebugger neo4jDelegateNodeDebugger) throws NoMoreElementsException;
    void update  (Neo4jDelegateNodeDebugger neo4jDelegateNodeDebugger);
    
    void initialize();
    void restore ();
}
