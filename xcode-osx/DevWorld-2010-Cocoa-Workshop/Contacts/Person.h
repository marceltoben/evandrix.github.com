//
//  Person.h
//  FirstCmdLine
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright 2010 School of Computer Science and Engineering, UNSW. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Person : NSObject 
{
	NSString * firstName;
	NSString * surname;
	NSString * email;
}

// will return an autorelease person object
+ (Person *) personWithFirstName:(NSString *)fName surname:(NSString *)sName;

- (id) initWithFirstName:(NSString *)fName surname:(NSString *)sName;

- (NSString *) description;

// Accessors for first name
- (void) setFirstName:(NSString *)newString;
- (NSString *) firstName;

@property (retain) NSString * surname;
@property (retain) NSString * email;


@end
