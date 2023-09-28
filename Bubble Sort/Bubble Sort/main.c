//
//  main.c
//  Bubble Sort
//
//  Created by Void on 7/22/21.
//
#include <stdio.h>
#include <stdlib.h>

int main(){

    void bubble_sort(int *arr, int size);
int i = 0, j=0;
for(i=0; i < size-1; i++) {
int swapped = 0;

for(j=0; j < size-1-i; j++) {
if(*(arr + j) > *(arr + j + 1)) {
int tmp = *(arr + j);
*(arr + j) = *(arr + j + 1);
*(arr + j + 1) = tmp;
swapped = 1;
}
}
if(!swapped) {
break;
}
}

