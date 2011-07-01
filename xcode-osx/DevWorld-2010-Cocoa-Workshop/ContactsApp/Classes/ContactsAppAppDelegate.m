//
//  ContactsAppAppDelegate.m
//  ContactsApp
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright School of Computer Science and Engineering, UNSW 2010. All rights reserved.
//

#import "ContactsAppAppDelegate.h"
#import "RootViewController.h"


@implementation ContactsAppAppDelegate

@synthesize window;
@synthesize navigationController;


#pragma mark -
#pragma mark Application lifecycle

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    // Override point for customization after app launch    
	
	[window addSubview:[navigationController view]];
    [window makeKeyAndVisible];
	return YES;
}


- (void)applicationWillTerminate:(UIApplication *)application {
	// Save data if appropriate
}


#pragma mark -
#pragma mark Memory management

- (void)dealloc {
	[navigationController release];
	[window release];
	[super dealloc];
}


@end

