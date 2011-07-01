//
//  ContactsAppDelegate.h
//  Contacts
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright 2010 School of Computer Science and Engineering, UNSW. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ContactsAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
