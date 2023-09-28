#include "Person.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person initializePerson( char * name, char * address ) {
	struct Person p;
	p.name = (char *) malloc( sizeof( char ) * strlen( name ) + 1 );
	strcpy( p.name, name );
	p.address = (char *) malloc( sizeof( char ) * strlen( address ) + 1 );
	strcpy( p.address, address );
	return( p );
}

void printPerson( struct Person p ) {
	printf( "Here is a person whose name=%s and address=%s\n", p.name,															   p.address );
}

void freePerson( struct Person p ) {
	free( (void *)p.name );
	free( (void *)p.address );
}