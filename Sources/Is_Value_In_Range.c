/************* Git Practice *****************/
// This is a very basic program to demonstrate the integration 
// of Tessy and HiTOP, the debugger from Hitex.
// (c) Hitex Systementwicklung GmbH 2001, www.hitex.de
//
// $Revision: 1$

struct range {int range_start; int range_len;};

typedef int value;

typedef enum {no, yes} result;

// Checks if r1.start <= v1 < (r1.start + r1.len),
// e.g. r1.start = 5, r1.len = 2
// ==> v1 == 4 ---> no
//     v1 == 5 ---> yes
//     v1 == 6 ---> yes
//     v1 == 7 ---> no
// However, the implementation is intentionally
// erroneous: v1 == 7 results "yes" instead of "no"!
//

result is_value_in_range (struct range r1, value v1)
{
	if (v1 < r1.range_start)
		return no;

	if (v1 > (r1.range_start + r1.range_len))
		return no;

	return yes;

}
