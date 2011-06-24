#import "Cell.h"

@implementation Cell
@synthesize x, y, color;

-(Cell*)initWithXAndYAndColor:
(NSInteger) coordX :
(NSInteger)coordY :
(Color) c
{
	if(self = [super init])
	{
		[self setX:coordX];
		[self setY:coordY];
		[self setColor:c];
	}
	return self;
}
-(NSString*) description
{
	return [[NSString alloc] initWithFormat: @"Cell@(%i,%i,%@)", x, y, [Enum toColorString:color]];
}
-(id)initWithCoder:
(NSCoder*) decoder
{
	if(self = [super init])
	{
		x = [decoder decodeIntForKey:@"x"];
		y = [decoder decodeIntForKey:@"y"];
		color = [decoder decodeIntForKey:@"color"];
	}
	return self;
}
-(void)encodeWithCoder:
(NSCoder*) encoder
{
	[encoder encodeInt:x forKey:@"x"];
	[encoder encodeInt:y forKey:@"y"];
	[encoder encodeInt:color forKey:@"color"];
}
- (NSComparisonResult)compare:(id)other
{
	if (![other isKindOfClass:[Cell class]])
	{
		[NSException raise:@"Invalid class of object instance other" format:@"other is not a Cell"];
		return (NSComparisonResult) nil;
	}
	if ([self x] < [other x])
		return NSOrderedAscending;
	else if ([self x] > [other x])
		return NSOrderedDescending;
	else {
		if ([self y] < [other y])
			return NSOrderedAscending;
		else if ([self y] > [other y])
			return NSOrderedDescending;
		else return NSOrderedSame;
	}
}
- (BOOL)isEqual:(id)other
{
    if (other == self)
        return YES;
    if (!other || ![other isKindOfClass:[self class]])
        return NO;
    return [self isEqualToCell:other];
}
- (BOOL)isEqualToCell:(Cell*)aCell
{
    if (self == aCell)
        return YES;
	if ([self x] != [aCell x])
        return NO;
	if ([self y] != [aCell y])
        return NO;
	if ([self color] != [aCell color])
        return NO;
    return YES;
}
@end
