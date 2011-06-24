#import "Enum.h"

@implementation Enum
+ (NSDictionary*) getColorDict
{
return [NSDictionary dictionaryWithObjectsAndKeys:
[NSNumber numberWithInt:RED], @"R",
[NSNumber numberWithInt:GREEN], @"G",
[NSNumber numberWithInt:BLUE], @"B",
[NSNumber numberWithInt:PINK], @"P",
	nil];
}
+ (NSDictionary*) getMoveDict
{
return [NSDictionary dictionaryWithObjectsAndKeys:
[NSNumber numberWithInt:LEFT], @"Left",
[NSNumber numberWithInt:RIGHT], @"Right",
	nil];
}
+ (NSString*) toColorString:
(Color) color
{
return [[[self getColorDict] allKeysForObject: [NSNumber numberWithInt:color]] objectAtIndex: 0];
}
+ (NSString*) toMoveString:
(MoveDir) move
{
	return [[[self getMoveDict] allKeysForObject: [NSNumber numberWithInt:move]] objectAtIndex: 0];
}
@end

@implementation NSString(EnumParser)
- (Color)ColorEnumFromString
{
return (Color)[[[Enum getColorDict] objectForKey: self] intValue];
}
@end

