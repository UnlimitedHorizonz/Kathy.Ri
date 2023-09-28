#ifndef PERSON_H
#define PERSON_H

/*
   Each Person variable will have its own name and
   address.
 */
struct Person {
  char * name;
  char * address;
};

/* 
   Here are a number of operations that can be performed
   on a struct Person.  initializePerson is used to allocate
   and set a value for each char * string in a struct Person.
   printPerson is used to print out a struct Person.  After
   creating a struct Person, you need to free what was malloc'ed
   inside initializePerson or you will get memory leaks.
 */
struct Person initializePerson( char * name, char * address );
void printPerson( struct Person p );
void freePerson( struct Person p );

#endif