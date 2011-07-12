package org.gephi.neo4j.impl;


import java.util.HashMap;
import java.util.Map;
import org.gephi.data.attributes.api.AttributeType;


/**
 *
 * @author Martin Škurla
 */
class Neo4jArrayToGephiAttributeTypeMapper {
    private static final Map<Class<?>, AttributeType> mapper;

    private Neo4jArrayToGephiAttributeTypeMapper() {}

    static {
        mapper = new HashMap<Class<?>, AttributeType>();

        mapper.put(byte.class,    AttributeType.LIST_BYTE);
        mapper.put(short.class,   AttributeType.LIST_SHORT);
        mapper.put(int.class,     AttributeType.LIST_INTEGER);
        mapper.put(long.class,    AttributeType.LIST_LONG);
        mapper.put(float.class,   AttributeType.LIST_FLOAT);
        mapper.put(double.class,  AttributeType.LIST_DOUBLE);
        mapper.put(boolean.class, AttributeType.LIST_BOOLEAN);
        mapper.put(char.class,    AttributeType.LIST_CHARACTER);
        mapper.put(String.class,  AttributeType.LIST_STRING);
    }

    public static AttributeType map(Object neo4jArray) {
        Class<?> componentType = neo4jArray.getClass().getComponentType();

        return mapper.get(componentType);
    }
}
