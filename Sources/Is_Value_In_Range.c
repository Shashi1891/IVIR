/************* Git Practice *****************/
// This is a very basic program to demonstrate the integration 
// of Tessy and HiTOP, the debugger from Hitex.
// (c) Hitex Systementwicklung GmbH 2001, www.hitex.de
//
// $Revision: 1$

struct range {int range_start; int range_len;};

typedef int value;

typedef enum {NO, YES} result;

// Checks if R1.start <= V1 < (R1.start + R1.len),
// e.g. R1.start = 5, R1.len = 2
// ==> V1 == 4 ---> NO
//     V1 == 5 ---> YES
//     V1 == 6 ---> YES
//     V1 == 7 ---> NO
// However, the implementation is intentionally
// erroneous: V1 == 7 results "YES" instead of "NO"!
//

result is_value_in_range (struct range R1, value V1)
{
	if (V1 < R1.range_start)
		return NO;

	if (V1 > (R1.range_start + R1.range_len))
		return NO;

	return YES;

}
