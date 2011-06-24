#import "Grid.h"

@implementation Grid
@synthesize grid;
-(Grid*) init
{
	if(self = [super init])
	{
[self setGrid:[[NSMutableDictionary alloc] init]];
	}
	return self;
}
-(Grid*) initWithGrid:
(NSMutableDictionary*) grid_
{
	if(self = [super init])
	{
[self setGrid:grid_];
	}
	return self;
}
-(NSMutableDictionary*) deepCopy
{
	NSMutableDictionary *grid_;
[[NSUserDefaults standardUserDefaults] setObject: [NSKeyedArchiver archivedDataWithRootObject:grid] forKey: @"savedArray"];
	NSUserDefaults *currentDefaults = [NSUserDefaults standardUserDefaults];
NSData *dataRepresentingSavedArray = [currentDefaults objectForKey:@"savedArray"];
	if(dataRepresentingSavedArray)
	{
NSDictionary *oldSavedArray = [NSKeyedUnarchiver unarchiveObjectWithData:dataRepresentingSavedArray];
		grid_ = oldSavedArray ? [[NSMutableDictionary alloc] initWithDictionary : oldSavedArray]
: [[NSMutableDictionary alloc] init];
	}
	return grid_;
}
-(void) setup:
(NSArray*) config
{
	[grid removeAllObjects];

	for(NSString *string in config)
	{
NSArray *tokens = [string componentsSeparatedByString: @","];
		NSInteger x = [[tokens objectAtIndex:0] intValue];
		NSInteger y = [[tokens objectAtIndex:1] intValue];
		Color c = [[tokens objectAtIndex:2] ColorEnumFromString];
		[grid setObject: [[Cell alloc] initWithXAndYAndColor: x : y : c] \
				 forKey: [NSNumber numberWithInt: y * ROW_WIDTH + x ]];
	}
}
-(void) display
{
	printf("Grid:-\n");
	for(int y = COL_HEIGHT - 1; y >= 0; y--)	// row
	{
		for(int x = 0; x < ROW_WIDTH; x++)		// col
		{
Cell* cell = [grid objectForKey: [NSNumber numberWithInt: y * ROW_WIDTH + x]];
			if(cell)
printf("%s", [[Enum toColorString:[cell color]] UTF8String]);
			else
				printf("_");
		}
		printf("\n");
	}
	printf("\n");
}
/**
 * consider all possible moves by iterating through each occupied cell in grid
 */
-(NSMutableArray*) getMoves
{
	NSMutableArray* moves = [[NSMutableArray alloc] init];
	for (Cell *cell in [grid allValues])
	{
		if ([cell x] > 0)
		{
			/*
			 * only add move if :-
			 *	1. left neighbour is empty or of different color
			 *	2. effect not already achieved ie. cells XY => Y left = X right
			 */
			Cell* leftNeighbour = [grid objectForKey: [NSNumber numberWithInt: [cell y] * ROW_WIDTH + [cell x] - 1]];
			if(!leftNeighbour || (leftNeighbour && [leftNeighbour color] != [cell color])
								  && [moves containsObject:[[MyMove alloc] initWithCellAndDir: leftNeighbour : RIGHT]]
			)
				[moves addObject:[[MyMove alloc] initWithCellAndDir: cell : LEFT]];
		}
		if ([cell x] < ROW_WIDTH - 1)
		{
			// only add move if right neighbour is empty or of different color
			Cell* rightNeighbour = [grid objectForKey: [NSNumber numberWithInt: [cell y] * ROW_WIDTH + [cell x] + 1]];
			if(!rightNeighbour || (rightNeighbour && [rightNeighbour color] != [cell color]))
				[moves addObject:[[MyMove alloc] initWithCellAndDir: cell : RIGHT]];
		}
	}
	return moves;
}

/**
 * searches up entire column for empty space
 * returns COL_HEIGHT if none found
 */
-(NSInteger) getHeight:
(NSInteger) col
{
	for(int y = 0; y < COL_HEIGHT; y++)     // row
		if(![grid objectForKey: [NSNumber numberWithInt: y * ROW_WIDTH + col]])
			return y;
	return COL_HEIGHT;
}

/**
 * remove empty gaps in entire column
 * by bringing cells together
 */
-(void) collapseCol:
(NSInteger) col
{
	// extract all cells in column
	NSSet *keys = [grid keysOfEntriesPassingTest:^(id key, id obj, BOOL *stop) {
		if ([obj x] == col) return YES; else return NO;
	}];
	NSMutableSet *copy = [[NSMutableSet alloc] initWithSet:keys copyItems: YES];
	// lowest of choice of cells above empty space to fill
	NSNumber *nextRow = [NSNumber numberWithInt: -1];
	for (NSInteger i=0; i<[keys count]; i++)	// iterate thru as many times as elements in set
	{
		NSNumber *currentRow = [NSNumber numberWithInt: i * ROW_WIDTH + col];
		if (![copy containsObject:currentRow])
		{
			// search further up column
			for (NSInteger j=(i+1); j<COL_HEIGHT; j++)
			{
				// found cell to collapse
				if ([copy containsObject: [NSNumber numberWithInt: j * ROW_WIDTH + col]])
				{
					nextRow = [NSNumber numberWithInt: j * ROW_WIDTH + col];
					break;
				}
			}
			Cell* nextCell = [grid objectForKey:nextRow];
			[nextCell setY:i];
			[grid setObject:nextCell forKey:currentRow];
			[grid removeObjectForKey:nextRow];
			[copy removeObject:nextRow];
		}
	}
	return;
}

-(Cell*) makeMove:
(MyMove*) move
{
	// x: col; y: row
	NSInteger newCol, newRow;
	Cell* cell = [move cell];
	switch([move dir])
	{
	case LEFT:
		if([cell x] > 0)	// already checked in getMoves()
		{
			newCol = [cell x] - 1;
			newRow = [self getHeight : newCol];

			if(newRow <= [cell y])
			{
				// cell will move left and drop down/same level
Cell* newCell = [[Cell alloc] initWithXAndYAndColor: newCol : newRow : [cell color]];
				// update new cell position
[grid setObject:newCell forKey: [NSNumber numberWithInt: newRow * ROW_WIDTH + newCol]];
				// remove old cell
[grid removeObjectForKey:[NSNumber numberWithInt:[cell y] * ROW_WIDTH + [cell x]]];
				// collapse the column of the original cell
[self collapseCol: [cell x]];
				return newCell;
			}
			else if(newRow > [cell y])	// col max height > row of current cell
			{
				// left cell is occupied => swap
				newRow = [cell y];
				// ensure left cell is occupied
Cell* leftCell = [grid objectForKey: [NSNumber numberWithInt: newRow * ROW_WIDTH + newCol]];
				if(leftCell)
				{
Cell *newCell = [[Cell alloc] initWithXAndYAndColor: [cell x] : [cell y] : [leftCell color]],
*newLeftCell = [[Cell alloc] initWithXAndYAndColor: newCol : newRow : [cell color]];
[grid setObject:newCell forKey: [NSNumber numberWithInt: [cell y] * ROW_WIDTH + [cell x]]];
[grid setObject:newLeftCell forKey: [NSNumber numberWithInt: newRow * ROW_WIDTH + newCol]];
					return newCell;
				}
			}

		}
		break;
	case RIGHT:
		if([cell x] < ROW_WIDTH - 1)
		{
			newCol = [cell x] + 1;
			newRow = [self getHeight : newCol];

			if(newRow <= [cell y])
			{
Cell* newCell = [[Cell alloc] initWithXAndYAndColor: newCol : newRow : [cell color]];
				// update new cell position
[grid setObject:newCell forKey: [NSNumber numberWithInt: newRow * ROW_WIDTH + newCol]];
				// remove old cell
[grid removeObjectForKey:[NSNumber numberWithInt:[cell y] * ROW_WIDTH + [cell x]]];
				// collapse the column of the original cell
[self collapseCol: [cell x]];
				return newCell;
			}
			else if(newRow > [cell y])	// col max height > row of current cell
			{
				// right cell is occupied => swap
				newRow = [cell y];
				// ensure right cell is occupied
Cell* rightCell = [grid objectForKey: [NSNumber numberWithInt: newRow * ROW_WIDTH + newCol]];
				if(rightCell)
				{
Cell *newCell = [[Cell alloc] initWithXAndYAndColor: [cell x] : [cell y] : [rightCell color]],
*newRightCell = [[Cell alloc] initWithXAndYAndColor: newCol : newRow : [cell color]];
[grid setObject:newCell forKey: [NSNumber numberWithInt: [cell y] * ROW_WIDTH + [cell x]]];
[grid setObject:newRightCell forKey: [NSNumber numberWithInt: newRow * ROW_WIDTH + newCol]];
					return newCell;
				}
			}

		}
		break;
	default:
		break;
	}
	return cell;
}

- (void) combine
{
	// iterate until reached stable state
	while(true)
	{
		// Set collection employed here because no duplicate elements are allowed
		NSMutableSet* cellsToRemove = [[NSMutableSet alloc] init];
		// check all COL_HEIGHT * ROW_WIDTH cells for block sequences (horizontal)
		for(int y = 0; y < COL_HEIGHT; y++)	// row
		{
			for(int x = 0; x < ROW_WIDTH - 3; x++)	// col
			{
Cell *cell1 = [grid objectForKey: [NSNumber numberWithInt: y * ROW_WIDTH + x]],
*cell2 = [grid objectForKey: [NSNumber numberWithInt: y * ROW_WIDTH + x + 1]],
*cell3 = [grid objectForKey: [NSNumber numberWithInt: y * ROW_WIDTH + x + 2]],
*cell4 = [grid objectForKey: [NSNumber numberWithInt: y * ROW_WIDTH + x + 3]];
				// if all 4 cells occupied
				if(cell1 && cell2 && cell3 && cell4)
				{
					Color c = [cell1 color];
					// all same color
					if([cell2 color] == c && [cell3 color] == c && [cell4 color] == c)
					{
[cellsToRemove addObject:cell1];
[cellsToRemove addObject:cell2];
[cellsToRemove addObject:cell3];
[cellsToRemove addObject:cell4];
					}
				}	// end 4-cell-check

				// scan for sequence of 3 cells within block of 4
				if(cell1 && cell2 && cell3)
				{
					Color c = [cell1 color];
					// all same color
					if([cell2 color] == c && [cell3 color] == c)
					{
[cellsToRemove addObject:cell1];
[cellsToRemove addObject:cell2];
[cellsToRemove addObject:cell3];
					}
				}	// end 3-cell-check I
				if(cell2 && cell3 && cell4)
				{
					Color c = [cell2 color];
					// all same color
					if([cell3 color] == c && [cell4 color] == c)
					{
[cellsToRemove addObject:cell2];
[cellsToRemove addObject:cell3];
[cellsToRemove addObject:cell4];
					}
				}	// end 3-cell-check II
			}
		} // end horizontal checks

		// begin vertical checks
		for(int x = 0; x < ROW_WIDTH; x++)	// for each column
		{
			for(int y = 0; y < COL_HEIGHT - 4; y++)
			{
Cell* cell1 = [grid objectForKey: [NSNumber numberWithInt: y * ROW_WIDTH + x]],
*cell2 = [grid objectForKey: [NSNumber numberWithInt: (y+1) * ROW_WIDTH + x]],
*cell3 = [grid objectForKey: [NSNumber numberWithInt: (y+2) * ROW_WIDTH + x]],
*cell4 = [grid objectForKey: [NSNumber numberWithInt: (y+3) * ROW_WIDTH + x]];
				// if all 4 cells occupied
				if(cell1 && cell2 && cell3 && cell4)
				{
					Color c = [cell1 color];
					// all same color
					if([cell2 color] == c && [cell3 color] == c && [cell4 color] == c)
					{
[cellsToRemove addObject:cell1];
[cellsToRemove addObject:cell2];
[cellsToRemove addObject:cell3];
[cellsToRemove addObject:cell4];
					}
				}	// end 4-cell-check

				// scan for sequence of 3 cells within block of 4
				if(cell1 && cell2 && cell3)
				{
					Color c = [cell1 color];
					// all same color
					if([cell2 color] == c && [cell3 color] == c)
					{
[cellsToRemove addObject:cell1];
[cellsToRemove addObject:cell2];
[cellsToRemove addObject:cell3];
					}
				}	// end 3-cell-check I
				if(cell2 && cell3 && cell4)
				{
					Color c = [cell2 color];
					// all same color
					if([cell3 color] == c && [cell4 color] == c)
					{
[cellsToRemove addObject:cell2];
[cellsToRemove addObject:cell3];
[cellsToRemove addObject:cell4];
					}
				}	// end 3-cell-check II
			}
		}	// end vertical check

		// remove cells from grid
		for(Cell *cell in cellsToRemove)
			[grid removeObjectForKey:[NSNumber numberWithInt: [cell y] * ROW_WIDTH + [cell x]]];

		// collapse all columns
		for(NSInteger x = 0; x < ROW_WIDTH; x++)
			[self collapseCol: x];

		if([cellsToRemove count] == 0) return;
	}
}

- (BOOL) iterate :
(NSInteger) depth :
(NSMutableDictionary*) movesList_
{
	// base case //
	if(depth == 0)
		return [grid count] == 0; // goal state reached
	
	// recursive case //
	NSMutableArray* moves = [self getMoves];
	// sort moves
	NSSortDescriptor *moveSorter = [[NSSortDescriptor alloc] initWithKey: @"cell" ascending: YES];
	[moves sortUsingDescriptors:[NSArray arrayWithObject:moveSorter]];
	
	MyMove* move;
	BOOL success;
	for(move in moves)
	{
		// make copy of current grid to work on
		Grid* nextGrid = [[Grid alloc] initWithGrid: [self deepCopy]];
		
		// mutate board state with next one move - returns new position of cell if changed
		[nextGrid makeMove:move];
		
		// iteratively remove block sequences of 3 or 4 until stable board state reached
		[nextGrid combine];

		success = [nextGrid iterate : (depth - 1) : movesList_];
		if(success)
		{
			[movesList_ setValue:nextGrid forKey:(NSString*) [[MyMove alloc] initWithDepthAndMove: depth : move]];
			return YES;
		}
	}
	return success;
}
@end