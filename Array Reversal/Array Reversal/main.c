//
//  main.c
//  Array Reversal
//
//  Created by Void on 7/19/21.
//

#include <stdio.h>
#include <stdlib.h>
int* reverse_array(int arr[], size_t arr_len) {
if (arr_len <= 1)
return arr;

int i = 0, j = arr_len - 1;

while(i < j)
{
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
i++;j--;
}
return arr;
}

void reserved_print_arr(int arr[], size_t arr_len) {
int i;
for(i = 0; i < arr_len; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}

int main()
{
size_t arr_len;
int *result;

printf("\nTest case 1\n");
int arr1[] = {3, 4, 5, 6};
arr_len = sizeof(arr1)/sizeof(int);
printf("Before reversal: \n");
reserved_print_arr(arr1, arr_len);
result = reverse_array(arr1, arr_len);
printf("After reversal: \n");
reserved_print_arr(result, arr_len);


printf("\nTest case 2\n");
int arr2[] = {3, 4, 5, 6, 86, 10, 123, 134};
arr_len = sizeof(arr2)/sizeof(int);
printf("Before reversal: \n");
reserved_print_arr(arr2, arr_len);
result = reverse_array(arr2, arr_len);
printf("After reversal: \n");
reserved_print_arr(result, arr_len);

printf("\nTest case 3\n");
int arr3[] = {3};
arr_len = sizeof(arr3)/sizeof(int);
printf("Before reversal: \n");
reserved_print_arr(arr3, arr_len);
result = reverse_array(arr3, arr_len);
printf("After reversal: \n");
reserved_print_arr(result, arr_len);

return 0;
}
