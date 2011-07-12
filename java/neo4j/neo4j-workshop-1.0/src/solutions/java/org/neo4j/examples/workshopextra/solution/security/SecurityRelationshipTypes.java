package org.neo4j.examples.workshopextra.solution.security;

import org.neo4j.graphdb.RelationshipType;

public enum SecurityRelationshipTypes implements RelationshipType
{
    /**
     * Relationship between the reference node and a root file
     */
    ROOT_FILE,
    
    /**
     * Relationship between a parent file and child file
     */
	FILE,
	
	/**
	 * Relationship between the reference node and a principal which
     * isn't member of any principals
	 */
	PRINCIPAL,
	
	/**
	 * Relationship between a principal and its membership with
     * another principal
	 */
	MEMBER,
	
	/**
	 * Relationship between a principal and a file stating access
     * rights to that file
	 */
	ACCESS,
}
