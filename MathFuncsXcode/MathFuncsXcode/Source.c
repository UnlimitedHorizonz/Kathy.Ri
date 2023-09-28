#include <stdio.h>
#include <math.h>


int main() {
	const double PI = 3.14159;
	/*
	There are 3 steps involved when using a function.
	1. Declare your function.
	Officially, that is what the line:
	#include <math.h>
	is for.  #include performs "textual substitution".  When
	the compiler chews up your program, it replaces that one
	line with the contents of that entire header file.  In that
	header file is the declaration of sin( ), cos( ), pow( ),
	sqrt( ) and zillions of other callable functions.  You can
	see alot of available functions you can call in the appendix
	of your book.
	The declaration needs to be found before the compiler finds
	a call to that function.  Very often, programmers put these
	function declarations at the very top of the file to ensure
	they are found before any executable statements that could
	call that function.
	2. Call your function.
	Officially, I refer to the caller and the callee.  These
	are different parts of the code.  The caller makes the
	request.  The callee responds to the request.  I also like
	to call the caller "driver code" since it is often what
	gets the program moving along.
	3. Implement the body of your function
	You have to instruct the computer on what your function should
	do when it is called.  This is often the hardest part of
	all the three steps listed here.

	In the case of these mathematical functions, #include <math.h>
	takes care of steps 1 and 3.  So all we have to do it proceed
	with step 2.  Eventually, we will get around to making and
	calling functions we built ourselves.
	*/

	/*
	Sin and Cosine functions take a parameter that is in radians.
	This web page shows the conversion formula between radians
	and degrees.
	http://math.rice.edu/~pcmi/sphere/drg_txt.html
	*/
	printf("Here are some math calculations:\n");
	printf("The sine of 90 degrees = %f\n", sin(PI / 2.0));
	printf("The sine of 180 degrees = %f\n", sin(PI));
	printf("The cosine of 90 degrees = %f\n", cos(PI / 2.0));
	printf("The cosine of 180 degrees = %f\n", cos(PI));

	return(0);
}