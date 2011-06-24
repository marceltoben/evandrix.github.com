#import "Enum.h"

@interface Cell:
NSObject<NSCoding>
{
	NSInteger x, y;
	Color color;
}

@property NSInteger x, y;
@property Color color;
- (Cell*) initWithXAndYAndColor:
(NSInteger) coordX :
(NSInteger) coordY :
(Color) c;
- (NSString*) description;
- (id) initWithCoder:
(NSCoder*) decoder;
- (void) encodeWithCoder:
(NSCoder*) encoder;
- (BOOL)isEqual:(id)other;
- (BOOL)isEqualToCell:(Cell*)aCell;
@end