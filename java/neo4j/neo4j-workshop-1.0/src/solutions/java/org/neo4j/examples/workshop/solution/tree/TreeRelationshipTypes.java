package org.neo4j.examples.workshop.solution.tree;

import org.neo4j.graphdb.RelationshipType;

public enum TreeRelationshipTypes implements RelationshipType
{
    /**
     * Relationship between a parent file and child file
     */
	FILE
}
