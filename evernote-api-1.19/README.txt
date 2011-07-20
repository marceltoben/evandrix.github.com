Evernote Data Access and Management (EDAM) API

The EDAM API is distributed under terms described in the LICENSE.txt file.

=========
Contents:
=========

doc/

  html/
    Contains HTML reference documentation for generated API calls and data
    structures.  This is a representation of the language-independent Thrift
    values, so it is not specific to a single client language. 

  javadoc/
    Contains HTML documentation for the generated API calls for Java.
    
src/

  thrift/
    Contains the source IDL files, along with inline documentation for all
    structures and services.
    
  java/
    Java source files, generated from the Thrift IDLs

  android/
    Java source files that can be used to replace Thrift-generated code
    on Android for more efficient memory use

  cpp/
    C++ source files, generated from the Thrift IDLs

  cocoa/
    Mac Cocoa source files, generated from the Thrift IDLs    

  csharp/
    C# source files, generated from the Thrift IDLs

  javame/
    Java Micro Edition (CLDC 1.1) source files for runtime and generated
    classes.

lib/

  java/
    JAR files for the EDAM API and the Thrift runtime library
    
  perl/
    Generated Perl stubs for EDAM and Thrift Perl runtime classes
    
  php/
    Generated PHP stubs and the Thrift PHP runtime classes

  python/
    Generated Python stubs and the Thrift Python runtime classes

  ruby/
    Generated Ruby stubs and the Thrift Ruby runtime classes

sample/

  java/client
    Java example client code
    
  java/oauth
    Java example web application code
  
  android/HelloEvernote
    Sample Android application that demonstrates the use of Intents to
    interact with Evernote for Android

  android/HelloEDAM
    Sample Android application that demonstrates the use of the EDAM
    API on Android
  
  php/client
    PHP example client code

  php/oauth
    PHP example web application code

  python/
    Python example client code

  csharp/
    C# example client code

  ruby/client
    Ruby example client code

  ruby/oauth
    Ruby example web application code

  javame/
    Skeleton Java ME sample code
