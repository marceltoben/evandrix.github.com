@echo off

set APP_CLASSPATH=build\classes;target\classes;lib\geronimo-jta_1.1_spec-1.1.1.jar;lib\neo4j-kernel-1.0.jar;lib\neo4j-index-1.0.jar;lib\lucene-core-2.9.1.jar;lib\neo4j-commons-1.0.jar
java -cp %APP_CLASSPATH% org.neo4j.examples.workshop.tutor.matrix.MatrixWithIndex
