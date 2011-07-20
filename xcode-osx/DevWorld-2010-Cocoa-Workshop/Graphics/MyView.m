//
//  MyView.m
//  Graphics
//
//  Created by Daniel Woo on 27/09/10.
//  Copyright 2010 School of Computer Science and Engineering, UNSW. All rights reserved.
//

#import "MyView.h"


@implementation MyView

- (id)initWithFrame:(NSRect)frame 
{
    self = [super initWithFrame:frame];
    if (self) 
	{
        // Initialization code here.
		
		CGFloat midx, midy;
		midx = NSMidX(frame);
		midy = NSMidY(frame);
		
		self.downPoint = NSMakePoint(midx, midy);
		
		self.attributes = [NSDictionary dictionaryWithObject:[NSFont systemFontOfSize:64.0] 
																forKey:NSFontAttributeName];
		
		self.greeting = @"G'day";
		
		self.backgroundColour = [NSColor grayColor];
		
		image = [[NSImage alloc] initWithContentsOfFile:@"/Library/Desktop Pictures/Aqua Blue.jpg"];
		
		
    }
    return self;
}

@synthesize downPoint;
@synthesize attributes;
@synthesize greeting;
@synthesize backgroundColour;

- (BOOL) isFlipped
{
	return YES;
}

- (BOOL) acceptsFirstResponder
{
	return YES;
}

- (void)drawRect:(NSRect)dirtyRect 
{
    // Drawing code here.
	
	[self.backgroundColour set];
	
	NSRect b = [self bounds];
	
	[NSBezierPath fillRect:b];

	
	NSSize imgSize = [image size];
	
	NSRect fromRect = NSMakeRect(0.0, 0.0, imgSize.width, imgSize.height);
	
	[image drawAtPoint:NSZeroPoint fromRect:fromRect operation:NSCompositeCopy fraction:1.0];
	
	
	NSBezierPath * rect = [NSBezierPath bezierPathWithRect:NSMakeRect(10.0, 10.0, 400.0, 300.0)];
	
	
	[[NSColor greenColor] set];
	[rect stroke];
	
	[self.greeting drawAtPoint:self.downPoint withAttributes:attributes];
	
}

- (void) mouseDown:(NSEvent *)theEvent
{
	NSPoint windowPt = [theEvent locationInWindow];
	NSPoint localPt = [self convertPoint:windowPt fromView:nil];
	
	self.downPoint = localPt;
	
	[self setNeedsDisplay:YES];
}

- (void) mouseDragged:(NSEvent *)theEvent
{
	NSPoint windowPt = [theEvent locationInWindow];
	NSPoint localPt = [self convertPoint:windowPt fromView:nil];
	
	self.downPoint = localPt;
	
	[self setNeedsDisplay:YES];
}

- (void) keyDown:(NSEvent *)theEvent
{
	
	static BOOL toggle = NO;
	
	if (toggle)
	{
		self.backgroundColour = [NSColor blueColor];
	}
	else 
	{
		self.backgroundColour = [NSColor yellowColor];
	}

	toggle = !toggle;
	
	NSLog(@"%@", theEvent);
	
	[self setNeedsDisplay:YES];
	
}

@end
