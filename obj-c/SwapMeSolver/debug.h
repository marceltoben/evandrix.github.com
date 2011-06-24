/*
 *  debug.h
 *  SwapMeSolver
 *
 *  Created by evandrix on 02/11/2010.
 *  Copyright 2010 ic. All rights reserved.
 *
 */
//  #define DEBUG
//  #define DEBUGWHERE_SHOWFULLINFO
//  #define DEBUG_SHOWLINES
//  #define DEBUG_SHOWFULLPATH
//  #define DEBUG_SHOWSEPARATORS
//  #define DEBUG_SHOWFULLINFO

// Definition of DEBUG functions. Only work if DEBUG is defined.
#ifdef DEBUG 

#define debug_separator() NSLog( @"────────────────────────────────────────────────────────────────────────────" );

#ifdef DEBUG_SHOWSEPARATORS
#define debug_showSeparators() debug_separator();
#else
#define debug_showSeparators()
#endif

/// /// /// ////// ///// 

#ifdef DEBUG_SHOWFULLPATH
#define debug_whereFull() debug_showSeparators(); NSLog(@"Line:%d : %s : %s", __LINE__,__FILE__,__FUNCTION__); debug_showSeparators(); 
#else
#define debug_whereFull() debug_showSeparators(); NSLog(@"Line:%d : %s : %s", __LINE__,[ [ [ [NSString alloc] initWithBytes:__FILE__ length:strlen(__FILE__) encoding:NSUTF8StringEncoding] lastPathComponent] UTF8String ] ,__FUNCTION__); debug_showSeparators(); 
#endif

/// /// /// ////// ///// 

#define debugExt(args,...) debug_separator(); debug_whereFull(); NSLog( args, ##__VA_ARGS__); debug_separator();

/// /// /// ////// ///// Debug Print Macros

#ifdef DEBUG_SHOWFULLINFO
#define debug(args,...) debugExt(args, ##__VA_ARGS__);
#else
#ifdef DEBUG_SHOWLINES
#define debug(args,...) debug_showSeparators(); NSLog([ NSString stringWithFormat:@"Line:%d : %@", __LINE__, args ], ##__VA_ARGS__); debug_showSeparators();
#else
#define debug(args,...) debug_showSeparators(); NSLog(args, ##__VA_ARGS__); debug_showSeparators();
#endif
#endif

/// /// /// ////// ///// Debug Specific Types

#define debug_object( arg ) debug( @"Object: %@", arg );
#define debug_int( arg ) debug( @"integer: %i", arg );
#define debug_float( arg ) debug( @"float: %f", arg );
#define debug_rect( arg ) debug( @"CGRect ( %f, %f, %f, %f)", arg.origin.x, arg.origin.y, arg.size.width, arg.size.height );
#define debug_point( arg ) debug( @"CGPoint ( %f, %f )", arg.x, arg.y );
#define debug_bool( arg )   debug( @"Boolean: %@", ( arg == YES ? @"YES" : @"NO" ) );

/// /// /// ////// ///// Debug Where Macros

#ifdef DEBUGWHERE_SHOWFULLINFO
#define debug_where() debug_whereFull(); 
#else
#define debug_where() debug(@"%s",__FUNCTION__); 
#endif

#define debug_where_separators() debug_separator(); debug_where(); debug_separator();

/// /// /// ////// /////

#else
#define debug(args,...) 
#define debug_separator()  
#define debug_where()   
#define debug_where_separators()  
#define debug_whereFull()   
#define debugExt(args,...)
#define debug_object( arg ) 
#define debug_int( arg ) 
#define debug_rect( arg )   
#define debug_bool( arg )   
#define debug_point( arg )
#define debug_float( arg )
#endif
