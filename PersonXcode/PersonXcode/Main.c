#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Person.h"

int main() {
	struct Person p;
	int personpNotYetInitialized = 1;
	char choice;
	char data[ 80 ];
	char name[ 80 ], address[ 80 ];

	do {
		printf( "(I)nitializePerson (P)rintPerson (Q)uit:" );
		scanf( "%s", data );
		choice = data[ 0 ];
		switch( choice ) {
		case 'I':
		case 'i':
			/*
			   Before initializing a new Person, it is
			   important to free the char * string variables
			   that have been allocated with a person.
			   Otherwise, you will get memory leaks!
		     */
			if (personpNotYetInitialized == 0) {
				freePerson( p );
			}
			personpNotYetInitialized = 0;
			printf( "gimme your name:" );
			scanf( "%s", name );
			printf( "gimme your address:" );
			scanf( "%s", address );
			p = initializePerson( name, address );
			break;
		case 'P':
		case 'p':
			if (personpNotYetInitialized) {
				printf( "You can't print a person until you initialize it...\n" );
			}
			else {
				printPerson( p );
			}
			break;
		}
	} while( choice != 'Q' && choice != 'q' );

	freePerson( p );
	
	return( 0 );
}