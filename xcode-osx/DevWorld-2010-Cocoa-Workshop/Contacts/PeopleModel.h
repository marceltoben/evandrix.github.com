//
//  PeopleModel.h
//  FirstCmdLine
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright 2010 School of Computer Science and Engineering, UNSW. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class Person;

@interface PeopleModel : NSObject 
{
@private
	NSMutableArray * database;
}

- (void) addPerson:(Person *)newPerson;
- (Person *) personAtIndex:(NSUInteger)index;
- (NSUInteger) count;

@end
