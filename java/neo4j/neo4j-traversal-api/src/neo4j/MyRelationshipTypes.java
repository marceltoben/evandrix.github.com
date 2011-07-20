package neo4j;


import org.neo4j.graphdb.RelationshipType;


public enum MyRelationshipTypes implements RelationshipType {
    CUSTOMERS,
    PROJECTS,
    CUSTOMER,
    PROJECT,
    USES,
    KNOWS;
}
