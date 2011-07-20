//
//  Controller.h
//  Contacts
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright 2010 School of Computer Science and Engineering, UNSW. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class PeopleModel;

@interface Controller : NSObject 
{
	IBOutlet NSTextField * firstNameField;
	IBOutlet NSTextField * surnameField;
	IBOutlet NSTextField * emailField;
	
	IBOutlet NSButton * nextButton;
	IBOutlet NSButton * previousButton;
	
	IBOutlet NSTableView * tableView;
	
	PeopleModel * model;
	NSUInteger currentIndex;	// current record to be shown
}

-(IBAction) submitButtonPressed:(id)sender;

- (IBAction) previousButton:(id)sender;
- (IBAction) nextButton:(id)sender;
@end
