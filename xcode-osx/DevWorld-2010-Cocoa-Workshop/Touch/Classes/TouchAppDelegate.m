//
//  TouchAppDelegate.m
//  Touch
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright School of Computer Science and Engineering, UNSW 2010. All rights reserved.
//

#import "TouchAppDelegate.h"
#import "TouchViewController.h"

@implementation TouchAppDelegate

@synthesize window;
@synthesize viewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
	
	return YES;
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
