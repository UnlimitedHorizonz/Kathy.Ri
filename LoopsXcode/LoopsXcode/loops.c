/*
   Let's try using finding odd numbers...
 */
#include <stdio.h>    

int main() {
	int start = 0, stop = 0;
	int value = 0;
	/* 
	   It is always a good idea to output a prompt
	   for the data you are trying to read.
     */
	printf( "I'm going to find odd number between\n" );
	printf( "the two values you enter\n" );
	printf( "Gimme your first value:" );
	scanf( "%d", &start );
	printf( "Gimme your first value:" );
	scanf( "%d", &stop );
	/* 
	   Depending on the values you enter, the loop
	   may run, or not...
     */
	value = start;
	while (value <= stop) {
		/* is the value odd?? */
		if (value %2 == 1) {
			printf( "Here is an odd number: %d\n", value );
		}
		value = value + 1;
	}
	return( 0 );
}