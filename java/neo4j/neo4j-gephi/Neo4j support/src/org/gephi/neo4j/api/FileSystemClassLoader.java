package org.gephi.neo4j.api;


import java.io.File;


/**
 *
 * @author Martin Škurla
 */
public interface FileSystemClassLoader {
    Class<?> loadClass(File file) throws ClassNotFoundException;

    Class<?> loadClass(File file, boolean requirePublicNonparamConstructor,
            Class<?>... requiredImplementedInterfaces) throws ClassNotFoundException;
}
