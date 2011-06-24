#import "MyMove.h"

@implementation MyMove
@synthesize cell, dir, depth;
/* constructors */
-(MyMove*) initWithCellAndDir:
(Cell*) c :
(MoveDir) direction
{
	if(self = [super init])
	{
		[self setCell:c];
		[self setDir:direction];
	}
	return self;
}
-(MyMove*) initWithDepthAndMove:
(NSInteger) dpth :
(MyMove*) move
{
	if(self = [super init])
	{
		[self setCell:[move cell]];
		[self setDir:[move dir]];
		[self setDepth:dpth];
	}
	return self;
}
-(void) setCell: (Cell*) c andDir: (MoveDir) direction andDepth: (NSInteger) dpth
{
	[self setCell:c];
	[self setDir:direction];
	[self setDepth:dpth];
}
-(id) copyWithZone: (NSZone *) zone
{
	MyMove *moveCopy = [[MyMove allocWithZone: zone] init];
	[moveCopy setCell: cell andDir: dir andDepth: depth];
	return moveCopy;
}
-(NSString*) description
{
	return [[NSString alloc] initWithFormat: @"Move@(%@,%@)", [cell description], [Enum toMoveString:dir]];
}
-(void) dealloc
{
	[cell release];
	[super dealloc];
}
- (BOOL)isEqual:(id)other
{
    if (other == self)
        return YES;
    if (!other || ![other isKindOfClass:[self class]])
        return NO;
    return [self isEqualToMove:other];
}
- (BOOL)isEqualToMove:(MyMove*)aMove
{
    if (self == aMove)
        return YES;
    if (![(id)[self cell] isEqual:[aMove cell]])
        return NO;
	if ([self dir] != [aMove dir])
        return NO;
    return YES;
}
@end
