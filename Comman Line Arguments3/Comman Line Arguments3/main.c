//
//  main.c
//  Comman Line Arguments3
//
//  Created by Void on 7/27/21.
//

#include <stdio.h>
#include <stdio.h>
#include <string.h>

// Create a function with the name of largest item

float largest_item(float item_in_list[], int number_of_item_in_list)

{

   

    // Initially declare the largest item in the list is zero

    float largest_number = item_in_list[0];

    // for loop to access every element to find out the

    // largest item

    for (int i = 0; i < number_of_item_in_list; i++)

        // Check the item_in_list is greater than the

        // largest number

        if (item_in_list[i] > largest_number)

            // if truen than that number is

            // largest number

            largest_number = item_in_list[i];

    // return the largest number

    return largest_number;

}

// Create a function with the name of smallest_item to compute

// smallest number

float smallest_item(float item_in_list[], int number_of_item_in_list)

{

    // Initially declare the smallest number is zero

    float smallest_number = item_in_list[0];

    // for loop to access every element to find out

    // the smallest number

    for (int i = 0; i < number_of_item_in_list; i++)

        // When item_in_list is less than the smallest number

        if (item_in_list[i] < smallest_number)

            // item in the list is assigned to the

            // smallest number

            smallest_number = item_in_list[i];

    // return the smallest number

    return smallest_number;

}

// Create a function with the name of arithmetic mean to compute

// the arithmetic mean

float arithmetic_mean(float item_in_list[], int number_of_item_in_list)

{

   

    // Intially declare the arithmetic mean is zero

    float AM = 0;

    // for loop to access the every element in the list

    for (int i = 0; i < number_of_item_in_list; i++)

        // Save the sum of every element

        AM += item_in_list[i];

   

    // return the mean

    return AM / number_of_item_in_list;

}

// Create a main function of the program

int main(int argc, char *argv[])

{

    // Decalre the required variable

    // position to get the position number

    int position;

    // for loop to access every input element

    for (int i = 1; i <= argc - 1; i++)

    {

        // Check the command line argument

        if (argv[i][0] != '-')

        {

            // When not avialable "-"

            position = i;

            // break out the loop

            break;

        }

    }

    //Get the number of item in the list

    int number_of_item_in_list = argc - position;

   

    // save the number

    float numbers[number_of_item_in_list];

  

    // for loop to access the input number

    for (int i = position; i < argc; i++)

    {

        // input the command line number

        sscanf(argv[i], "%f", &numbers[i - position]);

        printf("%f ", numbers[i - position]);

    }

    // for loop for checking the opeartion

    for (int i = 1; i < position; i++)

    {

        // When -l is equal to zero

        if (strcmp(argv[i], "-l") == 0)

        {

            // Displaly the largest number with calling function

            printf("\nLargest: %f", largest_item(numbers, number_of_item_in_list));

        }

        // otherwise for -s operation for small

        else if (strcmp(argv[i], "-s") == 0)

        {

          // Display the smallest number with calling function

            printf("\nSmallest: %f", smallest_item(numbers, number_of_item_in_list));

        }

        // When for -m option for mean

        else if (strcmp(argv[i], "-m") == 0)

        {

            // Display the mean number with calling function

            printf("\nMean: %f", arithmetic_mean(numbers, number_of_item_in_list));

        }

        // otherwise for -all to

        else if (strcmp(argv[i], "-all") == 0)

       {

           // Display the largest number

            printf("\nLargest: %f", largest_item(numbers, number_of_item_in_list));

           // Display the smallest number

            printf("\nSmallest: %f", smallest_item(numbers, number_of_item_in_list));

           // Display the mean number

            printf("\nMean: %f", arithmetic_mean(numbers, number_of_item_in_list));

        }

        // otherwise

        else

        {

            // Display the message when input is not valid

            printf("\nPlease input again not valid!!");

        }

    }

}

