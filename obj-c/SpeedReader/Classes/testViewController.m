//
//  testViewController.m
//  test
//
//  Created by HassassiN on 07/11/2010.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "testViewController.h"

@implementation testViewController

@synthesize texty = _texty;
@synthesize goread = _goread;


/*
// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
    }
    return self;
}
*/

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/



// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)timerFire:(NSTimer*)timer {
	static int pos = 0;
	static char* strs[] = { "This", "is", "rapid", "serial", "visualization", "in", "practice",".",".","." };
	if (pos == 9) {
		[retrigger invalidate];
		pos = 0;
		_goread.hidden = NO;
		
		return;
	}
	_texty.text = [[NSString alloc] initWithCString: strs[pos] encoding:NSASCIIStringEncoding];
	pos ++;
}


- (IBAction)startTapped:(id)sender {
	_goread.hidden = YES;
	retrigger = [NSTimer scheduledTimerWithTimeInterval:0.2
												 target:self 
											   selector:@selector(timerFire:) 
											   userInfo:nil 
												repeats:YES];
}


// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return YES;
}


- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


- (void)dealloc {
    [super dealloc];
}

@end
