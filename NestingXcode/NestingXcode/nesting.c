/*
   Let's try writing some nested conditional statements...
 */
#include <stdio.h>    

int main() {
   int temperature;
   /* 
      Prompt for values
    */
   printf( "\t\tNested Logic Program\n\n" );
   printf( "Please enter today's temperature: " );
   scanf( "%d", &temperature );

   if (temperature < 50) {
	   printf( "Gosh, it feels cold...\n" );
	   if (temperature < 32) {
		  printf( "And it looks like it's freezing...\n" );
	   }
	   else if (temperature < 40) {
		  printf( "And it's nearly freezing...\n" );
	   }
	   else {
		  printf( "But atleast it's not freezing cold!\n" );
	   }
   }
   else if (temperature > 90) {
	   printf( "Gosh, it's hot...\n" );
	   if (temperature > 110) {
		  printf( "And it's just boiling... head for air conditioning...\n" );
	   }
	   else if (temperature > 100) {
		  printf( "Atleast it's not boiling...\n" );
	   }
	   else {
		  printf( "What a heat wave!!\n" );
	   }
   }
   else {
	   printf( "Doesn't California have a nice climate!\n" );
   }
   return( 0 );
}