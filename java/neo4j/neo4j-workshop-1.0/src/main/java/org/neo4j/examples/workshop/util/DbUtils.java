package org.neo4j.examples.workshop.util;

import java.io.File;

public class DbUtils
{
    public static void delete( String path )
    {
        delete( new File( path ) );
    }
    
    public static void delete( File file )
    {
        if ( !file.exists() )
        {
            return;
        }
        
        if ( file.isDirectory() )
        {
            for ( File child : file.listFiles() )
            {
                delete( child );
            }
        }
        file.delete();
    }
}
