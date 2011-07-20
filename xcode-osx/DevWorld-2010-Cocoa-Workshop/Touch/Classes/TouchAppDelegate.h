//
//  TouchAppDelegate.h
//  Touch
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright School of Computer Science and Engineering, UNSW 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TouchViewController;

@interface TouchAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TouchViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TouchViewController *viewController;

@end

