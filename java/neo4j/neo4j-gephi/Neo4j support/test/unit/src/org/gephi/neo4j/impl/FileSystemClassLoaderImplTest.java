package org.gephi.neo4j.impl;


import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.Serializable;
import java.nio.channels.FileChannel;
import org.gephi.neo4j.api.ClassNotFulfillRequirementsException;
import org.gephi.neo4j.api.FileSystemClassLoader;
import org.gephi.neo4j.api.Neo4jDelegateNodeDebugger;
import org.junit.BeforeClass;
import org.junit.Test;


/**
 *
 * @author Martin Škurla
 */
public class FileSystemClassLoaderImplTest {
    private static final String PRIVATE_NONPARAM_CONSTRUCTOR_IMPLEMENTING_REQUIRED_INTERFACE =
            "PrivateNonparamConstructorImplementingRequiredInterface.class";
    private static final String PRIVATE_NONPARAM_CONSTRUCTOR_NOT_IMPLEMENTING_REQUIRED_INTERFACE =
            "PrivateNonparamConstructorNotImplementingRequiredInterface.class";
    private static final String PRIVATE_PARAM_CONSTRUCTOR_IMPLEMENTING_REQUIRED_INTERFACE =
            "PrivateParamConstructorImplementingRequiredInterface.class";
    private static final String PRIVATE_PARAM_CONSTRUCTOR_NOT_IMPLEMENTING_REQUIRED_INTERFACE =
            "PrivateParamConstructorNotImplementingRequiredInterface.class";

    private static final String PUBLIC_NONPARAM_CONSTRUCTOR_IMPLEMENTING_REQUIRED_INTERFACE =
            "PublicNonparamConstructorImplementingRequiredInterface.class";
    private static final String PUBLIC_NONPARAM_CONSTRUCTOR_NOT_IMPLEMENTING_REQUIRED_INTERFACE =
            "PublicNonparamConstructorNotImplementingRequiredInterface.class";
    private static final String PUBLIC_PARAM_CONSTRUCTOR_IMPLEMENTING_REQUIRED_INTERFACE =
            "PublicParamConstructorImplementingRequiredInterface.class";
    private static final String PUBLIC_PARAM_CONSTRUCTOR_NOT_IMPLEMENTING_REQUIRED_INTERFACE =
            "PublicParamConstructorNotImplementingRequiredInterface.class";

    private static final String CLASS_DIRECTLY_IMPLEMENTING_INTERFACE_WITH_DEFAULT_CONSTRUCTOR =
            "GenericImplementationOfRequiredInterface.class";
    private static final String VALID_CLASS_WITH_MULTIPLE_INTERFACES =
            "ValidClassWithMultipleInterfaces.class";
    private static final String TESTING_XML_FILE_PATH =
            "testFile.xml";

    private static final String ANNOTATION_TYPE =
            "test/notclasses/AnnotationType.class";
    private static final String InterfaceType =
            "test/notclasses/InterfaceType.class";

    private static final String VALID_CLASS_WITH_PACKAGE =
            "test/packagee/ValidClassWithPackage.class";

    private static FileSystemClassLoader fileSystemClassLoader;


    @BeforeClass
    public static void setUpClass() {
        fileSystemClassLoader = new FileSystemClassLoaderImpl();
    }

//** NULL ARGUMENTS ************************************************************
    @Test(expected=NullPointerException.class)
    public void testLoadClassNullArgumentAsFile() throws ClassNotFoundException {
        fileSystemClassLoader.loadClass(null);
    }

    @Test(expected=NullPointerException.class)
    public void testLoadClassNullArgumentAsRequiredImplementedInterface() throws ClassNotFoundException {
        fileSystemClassLoader.loadClass(null,
                                        true,
                                        null);
    }

//** NON EXISTING OR NOT CLASS FILES *******************************************
    @Test(expected=ClassNotFoundException.class)
    public void testLoadClassForNonExistingFile() throws ClassNotFoundException {
        fileSystemClassLoader.loadClass(new File("non existing file"));
    }

    @Test(expected=ClassNotFoundException.class)
    public void testLoadClassForDirectory() throws ClassNotFoundException {
        fileSystemClassLoader.loadClass(File.listRoots()[0]);
    }

    @Test(expected=IllegalArgumentException.class)
    public void testLoadClassForFileWithSuffixDifferentFromClass() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(TESTING_XML_FILE_PATH);
        fileSystemClassLoader.loadClass(testFile);
    }

//** NOT CLASSES ***************************************************************
    @Test(expected=IllegalArgumentException.class)
    public void testLoadAnnotationType() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(ANNOTATION_TYPE);
        fileSystemClassLoader.loadClass(testFile);
    }

    @Test(expected=IllegalArgumentException.class)
    public void testLoadInterfaceType() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(InterfaceType);
        fileSystemClassLoader.loadClass(testFile);
    }

    @Test(expected=IllegalArgumentException.class)
    public void testLoadRequiredInterfacesNotReallyInterfaces() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(PUBLIC_NONPARAM_CONSTRUCTOR_IMPLEMENTING_REQUIRED_INTERFACE);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Object.class);
    }

//** CLASSES IN DEFAULT PACKAGE ************************************************
    @Test(expected=ClassNotFulfillRequirementsException.class)
    public void testPrivateNonparamConstructorImplementingRequiredInterface() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(PRIVATE_NONPARAM_CONSTRUCTOR_IMPLEMENTING_REQUIRED_INTERFACE);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }

    @Test(expected=ClassNotFulfillRequirementsException.class)
    public void testPrivateNonparamConstructorNotImplementingRequiredInterface() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(PRIVATE_NONPARAM_CONSTRUCTOR_NOT_IMPLEMENTING_REQUIRED_INTERFACE);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }

    @Test(expected=ClassNotFulfillRequirementsException.class)
    public void testPrivateParamConstructorImplementingRequiredInterface() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(PRIVATE_PARAM_CONSTRUCTOR_IMPLEMENTING_REQUIRED_INTERFACE);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }

    @Test(expected=ClassNotFulfillRequirementsException.class)
    public void testPrivateParamConstructorNotImplementingRequiredInterface() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(PRIVATE_PARAM_CONSTRUCTOR_NOT_IMPLEMENTING_REQUIRED_INTERFACE);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }

    @Test
    public void testPublicNonparamConstructorImplementingRequiredInterface() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(PUBLIC_NONPARAM_CONSTRUCTOR_IMPLEMENTING_REQUIRED_INTERFACE);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }

    @Test(expected=ClassNotFulfillRequirementsException.class)
    public void testPublicNonparamConstructorNotImplementingRequiredInterface() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(PUBLIC_NONPARAM_CONSTRUCTOR_NOT_IMPLEMENTING_REQUIRED_INTERFACE);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }

    @Test(expected=ClassNotFulfillRequirementsException.class)
    public void testPublicParamConstructorImplementingRequiredInterface() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(PUBLIC_PARAM_CONSTRUCTOR_IMPLEMENTING_REQUIRED_INTERFACE);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }

    @Test(expected=ClassNotFulfillRequirementsException.class)
    public void testPublicParamConstructorNotImplementingRequiredInterface() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(PUBLIC_PARAM_CONSTRUCTOR_NOT_IMPLEMENTING_REQUIRED_INTERFACE);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }

//** CLASSES NOT IN DEFAULT PACKAGE ********************************************
    @Test
    public void testValidClassWithPackage() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(VALID_CLASS_WITH_PACKAGE);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }

//** OTHER CASES ***************************************************************
    @Test
    public void testLoadClassDirectlyImplementingInterfaceWithDefaultConstructor() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(CLASS_DIRECTLY_IMPLEMENTING_INTERFACE_WITH_DEFAULT_CONSTRUCTOR);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }

    @Test
    public void testLoadValidClassWithMultipleInterfaces() throws ClassNotFoundException {
        File testFile = parseTestClassFilePath(VALID_CLASS_WITH_MULTIPLE_INTERFACES);
        fileSystemClassLoader.loadClass(testFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class,
                                        Serializable.class);
    }
    
    @Test
    public void testLoadValidClassesMultipleTimes() throws ClassNotFoundException {
        int times = 5;

        for (int count = 0; count < times; count++)
            testLoadClassDirectlyImplementingInterfaceWithDefaultConstructor();

        for (int count = 0; count < times; count++)
            testLoadValidClassWithMultipleInterfaces();

        for (int count = 0; count < times; count++)
            testPublicNonparamConstructorImplementingRequiredInterface();

        for (int count = 0; count < times; count++)
            testValidClassWithPackage();
    }

    /* This test tests the situation when compiled class file with package does
     * not exist within proper directory structure.
     *
     * File "ValidClassWithPackage.class" is copied into default package and the
     * file is tried to load with classloader.
     */
    @Test(expected=NoClassDefFoundError.class)
    public void testLoadValidClassNotInValidDirectoryStructure() throws ClassNotFoundException {
        File sourceClassFile = parseTestClassFilePath(VALID_CLASS_WITH_PACKAGE);
        File targetClassFile = new File(sourceClassFile.getAbsolutePath().replace("/test/packagee", "")
                                                                         .replace("\\test\\packagee", ""));

        copyFileContent(sourceClassFile, targetClassFile);

        fileSystemClassLoader.loadClass(targetClassFile,
                                        true,
                                        Neo4jDelegateNodeDebugger.class);
    }
    
//** HELPER METHODS ************************************************************
    private File parseTestClassFilePath(String relativePath) {
        String path = ClassLoader.getSystemClassLoader()
                                 .getResource(relativePath)
                                 .getFile()
                                 .substring(1)         // on WIN adds additional '/' at the beginning
                                 .replace("%20", " "); // on WIN adds "%20" instead of space

        return new File(path);
    }

    private void copyFileContent(File sourceFile, File targetFile) {
        FileChannel sourceFileChannel = null;
        FileChannel targetFileChannel = null;

        try {
            sourceFileChannel = new FileInputStream(sourceFile).getChannel();
            targetFileChannel = new FileOutputStream(targetFile).getChannel();

            sourceFileChannel.transferTo(0, sourceFileChannel.size(), targetFileChannel);
        }
        catch (IOException ioe) {
            ioe.printStackTrace();
        }
        finally {
            try {
                if (sourceFileChannel != null)
                    sourceFileChannel.close();
            }
            catch (IOException ioe) {}

            try {
                if (targetFileChannel != null)
                    targetFileChannel.close();
            }
            catch (IOException ioe) {}
        }
    }
}