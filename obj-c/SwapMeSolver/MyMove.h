#import "Cell.h"
#import "Enum.h"

@interface MyMove:
NSObject <NSCopying>
{
	Cell* cell;
	MoveDir dir;
	NSInteger depth;
}
@property(nonatomic, retain) Cell *cell;
@property MoveDir dir;
@property NSInteger depth;

- (MyMove*) initWithCellAndDir:
(Cell*) c :
(MoveDir) d;
-(MyMove*) initWithDepthAndMove:
(NSInteger) depth :
(MyMove*) move;
-(id) copyWithZone: (NSZone *) zone;
- (NSString*) description;
- (void) dealloc;
- (BOOL)isEqual:(id)other;
- (BOOL)isEqualToMove:(MyMove*)aMove;
@end