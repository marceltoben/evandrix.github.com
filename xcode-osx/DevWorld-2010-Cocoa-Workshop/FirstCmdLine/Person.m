//
//  Person.m
//  FirstCmdLine
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright 2010 School of Computer Science and Engineering, UNSW. All rights reserved.
//

#import "Person.h"


@implementation Person

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
