package org.gephi.desktop.neo4j;


import java.io.IOException;
import java.io.InputStream;
import javax.swing.Icon;
import javax.swing.ImageIcon;


/**
 *
 * @author Martin Škurla
 */
public class ImageLoader {
    public static final String NEO4J_FILE_PATH = "org/gephi/desktop/neo4j/resources/Neo4j logo.png";


    private ImageLoader() {}


    public static Icon loadImage(String filePath) {
        InputStream imageInputStream =
                Neo4jCustomDirectoryProvider.class.getClassLoader().getResourceAsStream(filePath);

        try {
            byte[] imageFileData = new byte [imageInputStream.available()];
            imageInputStream.read(imageFileData);

            return new ImageIcon(imageFileData);
        }
        catch (IOException e) {
            e.printStackTrace();
        }
        finally {
            try {
                if (imageInputStream != null)
                    imageInputStream.close();
            }
            catch (IOException e) {}
        }

        return null;
    }
}
