package org.gephi.data.attributes.spi;

/**
 *
 * @author Martin Škurla
 * @param <T>
 */
public interface GraphItemDelegateFactoryProvider<T> {
    T    createNode();
    void deleteNode(T nodeId);

    T    createEdge(T startNodeId, T endNodeId);
    void deleteEdge(T edgeId);
}
