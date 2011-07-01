//
//  ContactsAppAppDelegate.h
//  ContactsApp
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright School of Computer Science and Engineering, UNSW 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContactsAppAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

