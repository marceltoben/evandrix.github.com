#import "Cell.h"
#import "Enum.h"
#import "MyMove.h"

@interface Grid :
NSObject
{
	NSMutableDictionary* grid;
}
@property(nonatomic, retain) NSMutableDictionary* grid;

- (Grid*) init;
- (Grid*) initWithGrid:
(NSMutableDictionary*) grid;
- (NSMutableDictionary*) deepCopy;
- (void) setup:
(NSArray*) config;
- (void) display;
- (NSMutableArray*) getMoves;
- (NSInteger) getHeight:
(NSInteger) col;
-(void) collapseCol:
(NSInteger) col;
-(Cell*) makeMove:
(MyMove*) move;
- (BOOL) iterate :
(NSInteger) depth :
(NSMutableDictionary*) movesList_;
- (void) combine;
@end
