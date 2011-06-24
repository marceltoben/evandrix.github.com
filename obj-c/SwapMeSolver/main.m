#import "main.h"
#import "debug.h"

int main(int argc, const char * argv[])
{
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];

	Grid* grid = [[Grid alloc] init];
	// board state
	NSArray *config = [NSArray arrayWithObjects:
	                   @"1,0,G", @"1,1,R",
	                   @"2,0,B", @"2,1,G", @"2,2,P", @"2,3,B", @"2,4,R", @"2,5,G",
	                   @"3,0,P", @"3,1,B", @"3,2,P", @"3,3,R",
	                   nil];
	// init grid by filling w/ board state
	[grid setup:config];

	printf("iDevice game Swap Me solver (console)\n");
	printf("Initially,\n");
	// show this grid
	[grid display];

	// construct a list of all possible moves from this state - recursive dfs
	NSMutableDictionary* solution = [[NSMutableDictionary alloc] init];
	BOOL success = [grid iterate: 3 : solution];	// default given initial depth

	// print solution move list in reverse
	NSSortDescriptor *sortDescriptor;
	sortDescriptor = [[[NSSortDescriptor alloc] initWithKey:@"depth" ascending:NO] autorelease];
	NSArray *sortDescriptors = [NSArray arrayWithObject:sortDescriptor];
	NSArray *myKeys = [solution allKeys];
	NSArray *sortedKeys = [myKeys sortedArrayUsingDescriptors:sortDescriptors];
	
	int i, numMoves = [myKeys count];
	for (i = 0; i < numMoves; i++)
	{
		Grid* grid = [solution objectForKey: [sortedKeys objectAtIndex:i]];
		printf("Move#%d: %s\n",(i+1), [[[sortedKeys objectAtIndex:i] description] cString]);
		[grid display];
	}

	[pool drain];
	return 0;
}