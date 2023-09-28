//
//  main.c
//  Structures and Enumerators
//
//  Created by Void on 7/25/21.
//
//
//zoo_food_calculator.h
#ifndef ZOO_FOOD_CALCULAOTR_H

#define ZOO_FOOD_CALCULAOTR_H

// Declare an enum for animal type

typedef enum{mammal, amphibian, reptile}AnimalTypeEnum;

// Declare a structure with necessary

// member variables

typedef struct

{

AnimalTypeEnum type;

float weight;

float height;

float length;

int age;

int faster_than_human;

int pregnant;

int winter;

}Animal;

// Declare the necessary functions

float process_mammal(Animal* animal);

float process_amphibian(Animal* animal);

float process_reptile(Animal* animal);

void print_animal(Animal* animal);

#endif

