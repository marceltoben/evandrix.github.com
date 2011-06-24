typedef enum colorTypes
{
	RED,
	GREEN,
	BLUE,
	PINK
} Color;
typedef enum moveTypes
{
	LEFT,
	RIGHT
} MoveDir;

@interface Enum:
NSObject
{
}
+ (NSDictionary*) getColorDict;
+ (NSDictionary*) getMoveDict;
+ (NSString*) toColorString:
(Color) color;
+ (NSString*) toMoveString:
(MoveDir) move;
@end

@interface NSString(EnumParser)
- (Color) ColorEnumFromString;
@end