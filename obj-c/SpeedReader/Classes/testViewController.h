//
//  testViewController.h
//  test
//
//  Created by HassassiN on 07/11/2010.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface testViewController : UIViewController {
	UILabel *_texty;
	UIButton *_goread;
	NSTimer *retrigger;
}

@property (retain) IBOutlet UILabel *texty;
@property (retain) IBOutlet UIButton *goread;

- (IBAction)startTapped:(id)sender;

@end

