//
//  PeopleModel.m
//  FirstCmdLine
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright 2010 School of Computer Science and Engineering, UNSW. All rights reserved.
//

#import "PeopleModel.h"
#import "Person.h"

@implementation PeopleModel
- (id) init
{
	self = [super init];
	if (self != nil) 
	{
		database = [[NSMutableArray alloc] init];
	}
	return self;
}

- (void) dealloc
{
	[database release];
	[super dealloc];
}

#pragma mark -
- (NSString *) description
{
	return [NSString stringWithFormat:@"%@", database];
}

#pragma mark Accessors
- (void) addPerson:(Person *)newPerson
{
	if (newPerson != nil)
	{	
		[database addObject:newPerson];
	}
}

- (Person *) personAtIndex:(NSUInteger)index
{
	return [database objectAtIndex:index];
}

- (NSUInteger) count
{
	return [database count];
}

@end
