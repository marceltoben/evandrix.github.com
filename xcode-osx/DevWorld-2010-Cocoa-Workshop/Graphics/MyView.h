//
//  MyView.h
//  Graphics
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright 2010 School of Computer Science and Engineering, UNSW. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface MyView : NSView 
{
	NSPoint downPoint;
	NSDictionary * attributes;
	NSString * greeting;
	NSColor * backgroundColour;
	
	NSImage * image;
	
}

@property (assign) NSPoint downPoint;
@property (retain) NSDictionary * attributes;
@property (retain) NSString * greeting;
@property (retain) NSColor * backgroundColour;


@end
