package org.gephi.desktop.neo4j;


import java.io.File;
import javax.swing.filechooser.FileFilter;
import org.gephi.neo4j.api.FileSystemClassLoader;
import org.gephi.neo4j.api.Neo4jDelegateNodeDebugger;
import org.gephi.neo4j.api.ClassNotFulfillRequirementsException;
import org.openide.util.Lookup;
import org.openide.util.NbBundle;


/**
 *
 * @author Martin Škurla
 */
public class Neo4jDebugFileFilter extends FileFilter {
    private static final String     ACCEPTED_FILE_SUFFIX = ".class";
    private static final boolean    REQUIRED_NONPARAM_CONSTRUCTOR = true;
    private static final Class<?>[] REQUIRED_IMPLEMENTED_INTERFACES = {Neo4jDelegateNodeDebugger.class};

    @Override
    public boolean accept(File file) {
        if (file.isDirectory())
            return true;

        if (!file.getName().endsWith(ACCEPTED_FILE_SUFFIX))
            return false;

        FileSystemClassLoader classLoader =
                Lookup.getDefault().lookup(FileSystemClassLoader.class);

        try {
            classLoader.loadClass(file,
                                  REQUIRED_NONPARAM_CONSTRUCTOR,
                                  REQUIRED_IMPLEMENTED_INTERFACES);
            return true;
        }
        catch (ClassNotFoundException cnfe) {
            return false;
        }
        catch (NoClassDefFoundError ncdfe) {
            return false;
        }
        catch (ClassNotFulfillRequirementsException cnfre) {
            return false;
        }
        catch (IllegalArgumentException iae) {
            return false;
        }
    }

    @Override
    public String getDescription() {
        return NbBundle.getMessage(Neo4jDebugFileFilter.class, "CTL_Neo4j_FileFilterDescription");
    }
}
