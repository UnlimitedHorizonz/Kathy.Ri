//
//  main.c
//  Recursion
//
//  Created by Void on 7/16/21.
//
#include <stdio.h>
#include <stdlib.h>

//Recursive function to return gcd of x xnd y( greatest common divisor)
int gcd(int x, int y){
// Everything divides 0
if (x == 0 || y == 0)
return 0;
  
// y equal x case
if (x == y)
return x;
  
// x is greater
if (x > y)
return gcd(x-y, y);
return gcd(x, y-x);
}


// program to test xy RECURSIVE function
int main(){
int x;
int y;
printf("Enter X: ");
scanf("%d", &x);
printf("Enter Y: ");
scanf("%d", &y);
//call the function gcd() with absolute value of X and Y both.
printf("The greatest common divisor of %d and %d is %d ", x, y, gcd(abs(x), abs(y)));
return 0;
}


