//
//  Person.m
//  FirstCmdLine
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright 2010 School of Computer Science and Engineering, UNSW. All rights reserved.
//

#import "Person.h"


@implementation Person

+ (Person *) personWithFirstName:(NSString *)fName surname:(NSString *)sName
{
	Person * tmpPerson = [[Person alloc] initWithFirstName:fName surname:sName];
	
	return [tmpPerson autorelease];
}


- (id) initWithFirstName:(NSString *)fName surname:(NSString *)sName
{
	self = [super init];
	if (self != nil) 
	{
		[self setFirstName:fName];
		[self setSurname:sName];
		[self setEmail:@"no defined"];
	}
	return self;
}


- (NSString *) description
{
	return [NSString stringWithFormat:@"%@ %@ { %@ } %@",
			[self firstName],
			[self surname],
			[self email],
			[super description]
			];
}

@synthesize surname;
@synthesize email;

- (void) setFirstName:(NSString *)newString
{
	if (newString != firstName)
	{
		[firstName release];
		firstName = [newString retain];
	}
}

- (NSString *) firstName
{
	return [[firstName retain] autorelease];
}

@end
