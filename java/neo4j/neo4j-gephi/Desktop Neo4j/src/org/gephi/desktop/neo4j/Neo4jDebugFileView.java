package org.gephi.desktop.neo4j;


import java.io.File;
import javax.swing.Icon;
import javax.swing.filechooser.FileView;


/**
 *
 * @author Martin Škurla
 */
public class Neo4jDebugFileView extends FileView {
    private final Neo4jDebugFileFilter neo4jDebugFileFilter;


    public Neo4jDebugFileView() {
        neo4jDebugFileFilter = new Neo4jDebugFileFilter();
    }


    @Override
    public Icon getIcon(File file) {
        return (file.isFile() && neo4jDebugFileFilter.accept(file))
                ? ImageLoader.loadImage(ImageLoader.NEO4J_FILE_PATH)
                : null;
    }
}
