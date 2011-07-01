#import <Foundation/Foundation.h>
#import "Person.h"
#import "PeopleModel.h"

int main (int argc, const char * argv[]) 
{
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];

    // insert code here...
	/*
	 */
    NSLog(@"Hello, World!");
	
	PeopleModel * people = [[PeopleModel alloc] init];
	
	Person * p = [[Person alloc] init];
	[p setFirstName:@"Daniel"];
	[p setSurname:@"Woo"];
	[p setEmail:@"danielw@unsw"];

	[people addPerson:p];
	
	NSLog(@"%@, %@, %@", p.firstName, p.surname, [p email]);
	
	Person * p2 = [[Person alloc] init];
	[p2 setFirstName:@"David"];
	[p2 setSurname:@"Smith"];
	p2.email = @"d.smith@company.com";
	
	[people addPerson:p2];
	
	NSLog(@"%@", [people personAtIndex:1]);
	NSLog(@"%@", [people personAtIndex:0]);
	
	// Clean up
	[p release];
	[p2 release];
	[people release];
	
    [pool drain];
    return 0;
}
