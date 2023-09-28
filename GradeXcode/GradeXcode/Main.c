#include <stdio.h>

/*
   We are going to use this code to learn about
   the debugger.  Please follow along with the
   online content to see how to work with the
   debugger and fix the errors in this code.
 */

char grade( int need_to_pass, int score );
/*
   Determines a letter grade based on minimum
   passing score and an actual score.  It returns
   a grade of 'P' when score is need_to_pass or
   higher.  Otherwise returns 'F'.
 */

int main( ) {
	int score, min_passing_score;
	char letter_grade;

	printf( "Enter your score and the minimum needed to pass: " );
	scanf( "%d %d", &score, &min_passing_score );

	letter_grade = grade( score, min_passing_score );

	if (letter_grade == 'P') {
		printf( "You Passed!  Congratulations!\n" );
	}
	else {
		printf( "Sorry... You Failed!\n" );
	}
	printf( "A grade of %c ", letter_grade );
	printf( "will be put into your record.\n" );

	return( 0 );
}

char grade( int need_to_pass, int score ) {
	char result = 'P';
	if (score < need_to_pass) {
		result = 'F';
	}
	return( result );
}
