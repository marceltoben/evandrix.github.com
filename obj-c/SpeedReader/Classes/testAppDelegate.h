//
//  testAppDelegate.h
//  test
//
//  Created by HassassiN on 07/11/2010.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class testViewController;

@interface testAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    testViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet testViewController *viewController;

@end

