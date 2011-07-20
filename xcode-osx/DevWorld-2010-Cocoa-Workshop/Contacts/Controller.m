//
//  Controller.m
//  Contacts
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright 2010 School of Computer Science and Engineering, UNSW. All rights reserved.
//

#import "Controller.h"
#import "PeopleModel.h"
#import "Person.h"

@interface Controller ()
- (void) updateFieldsFromModel;
- (void) updateButtons;
- (void) updateFields;
- (void) updateModelFromFields;


@end



@implementation Controller
- (id) init
{
	self = [super init];
	if (self != nil) 
	{
		model = [[PeopleModel alloc] init];
		currentIndex = 0;
	}
	return self;
}

- (void) dealloc
{
	[model release];
	[super dealloc];
}


- (void) awakeFromNib
{
	NSAssert(firstNameField != nil, @"oops forgot to link first name in IB");
	NSAssert(surnameField != nil, @"oops forgot to link surname in IB");
	NSAssert(emailField != nil, @"oops forgot to link email in IB");
	
	[self updateButtons];
	[self updateFields];
}

#pragma mark Update User Interface

- (void) updateFields
{
	BOOL editable = [model count] > 0;
	
	[firstNameField setEnabled:editable];
	[surnameField setEnabled:editable];
	[emailField setEnabled:editable];
}

- (void) updateButtons
{
	// Next
	if ([model count] > 0 && currentIndex < [model count] - 1)
	{
		[nextButton setEnabled:YES];
	}
	else
	{
		[nextButton setEnabled:NO];
	}

	
	if (currentIndex > 0)
	{
		[previousButton setEnabled:YES];
	}
	else 
	{
		[previousButton setEnabled:NO];

	}

	
}

- (void) updateFieldsFromModel
{
	if ([model count] > 0)
	{
		// retrieve the current record from the people model
		Person * p = [model personAtIndex:currentIndex];
		NSAssert(p != nil, @"Returned nil person");

		// place the contents into the appropriate fields
		[firstNameField setStringValue:[p firstName]];
		[surnameField setStringValue:[p surname]];
		[emailField setStringValue:[p email]];
		
	}
	
}

- (void) updateModelFromFields
{
	Person * p = [model personAtIndex:currentIndex];
	
	[p setFirstName: [firstNameField stringValue]];
	[p setSurname:[surnameField stringValue]];
	[p setEmail:[emailField stringValue]];
}


-(IBAction) submitButtonPressed:(id)sender
{
	NSLog(@"submit pressed");
	
	NSLog(@"%@", [firstNameField stringValue]);
	NSLog(@"%@", [surnameField stringValue]);
	NSLog(@"%@", [emailField stringValue]);
	
	Person * p = [[Person alloc] initWithFirstName:[firstNameField stringValue]
										   surname:[surnameField stringValue]];
	
	// Transfer from text fields into person object
	[p setEmail:[emailField stringValue]]; 
	
	[model addPerson:p];
	
	NSLog(@"%@", model);
	
	[self updateButtons];
	[self updateFields];

	[tableView reloadData];
}

- (IBAction) previousButton:(id)sender
{
	// Write out current current
	[self updateModelFromFields];
	
	// decrement the current index
	if (currentIndex > 0)
	{
		currentIndex--;
	}
	
	
	// update the contents
	[self updateFieldsFromModel];
	[self updateButtons];

}

- (IBAction) nextButton:(id)sender
{
	// Write out current current
	[self updateModelFromFields];
	
	// increment the current index
	if (currentIndex < [model count] - 1)
	{	
		currentIndex++;
	}
	
	// update the fields, by reading back
	[self updateFieldsFromModel];
	[self updateButtons];

}


#pragma mark Table Data Source Methods
- (id)tableView:(NSTableView *)aTableView
objectValueForTableColumn:(NSTableColumn *)aTableColumn
			row:(NSInteger)rowIndex
{
	Person * p = [model personAtIndex:rowIndex];

	return [p valueForKey:[aTableColumn identifier]];
}

- (NSInteger)numberOfRowsInTableView:(NSTableView *)aTableView
{
	return [model count];
}

@end
