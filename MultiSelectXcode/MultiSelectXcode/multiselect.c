/*
   Let's try writing a switch statement...
 */
#include <stdio.h>    

int main() {
   char letter;
   /* 
      Prompt for values
    */
   printf( "\t\tCase Statement Program\n\n" );
   printf( "Please enter a letter to inspect: " );
   scanf( "%c", &letter );

   /* 
      Just for the record, you can only switch on a
	  integral value.  The char datatype is just another
	  name for the set of ints between 0 and 255, so you
	  can switch on chars or ints
    */
   switch( letter ) {
     /*
	    Individual letters must be single-quoted.
		Individual letters map directly to constant
		integer values based on the ASCII table which
		we will learn about in upcoming units.  The
		value of each case must be a constant value,
		not an expression or variable.  This often
		makes switch statements not applicable to your
		situation.
	  */
	 case 'a':
	 case 'e':
	 case 'i':
	 case 'o':
	 case 'u':
	 case 'y':
		 /* 
		    Lacking break statements in the upper
			listed cases, they will all "fall thru"
			to the set of statements shown here.
			While at first this may seem very convenient,
			this is actually the number one programming
			bug worldwide.  Namely, that folks forget that
			all the above cases are collapsing down to
			the code shown below.  So use this form
			with great caution, as it often leads to 
			bugs...
		  */
		 printf( "a nice lowercase vowel!\n" );
		 break;
	 case 'A':
	 case 'E':
	 case 'I':
	 case 'O':
	 case 'U':
	 case 'Y':
		 printf( "a nice UPPERCASE vowel!\n" );
		 break;
	 case '0':
	 case '1':
	 case '2':
	 case '3':
	 case '4':
	 case '5':
	 case '6':
	 case '7':
	 case '8':
	 case '9':
		 printf( "a nice number!\n" );
		 break;
	 default:
		 /*
		    The default case is the one selected when
			no other cases actually match the switched
			data
		  */
		 printf( "this is not something I recognize...\n" );
		 break;
   }
   /*
      Just for the record, due to rounding errors, it
	  is very dangerous to test for equality on floating
	  point numbers
    */
   return( 0 );
}