/************* Git Practice *****************/
// This is a very basic program to demonstrate the integration 
// of Tessy and HiTOP, the debugger from Hitex.
// (c) Hitex Systementwicklung GmbH 2001, www.hitex.de
//
// $Revision: 1$

struct range {int range_start; int range_len;};

typedef int value;

typedef enum {no, yes} result;

// Checks if R1.start <= V1 < (R1.start + R1.len),
// e.g. R1.start = 5, R1.len = 2
// ==> V1 == 4 ---> no
//     V1 == 5 ---> yes
//     V1 == 6 ---> yes
//     V1 == 7 ---> no
// However, the implementation is intentionally
// erroneous: V1 == 7 results "yes" instead of "no"!
//

result is_value_in_range (struct range R1, value V1)
{
	if (V1 < R1.range_start)
		return no;

	if (V1 > (R1.range_start + R1.range_len))
		return no;

	return yes;

}
