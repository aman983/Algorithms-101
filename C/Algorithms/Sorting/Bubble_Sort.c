#include <stdio.h>
#include <stdlib.h>

/* 
@breif This function is used to prints the values of the array
@param *arr -> pointer of the array to be printed
@param array_length -> lenght of the array to be printed form 0 to array_length
@return void
*/

void print_arr(int *arr, int array_length){
    for(int i=0; i<array_length; i++){
        printf("%d, ",arr[i]);
    }
}


/* 
@breif This function implements BUBBLE SORT it is used to sort the array in ascending order 
@param *arr -> pointer of the array to be sorted
@param array_length -> lenght of the array
@return void
*/

void bubble_sort(int *arr, int array_length) {
    // Outer loop to iterate over each element of the array
    for (int i = array_length - 1; i >= 1; i--) {
        // Inner loop to perform comparisons and swaps
        for (int j = 0; j < i; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int main(void){
    int arr[] = {4,3,5,87,2,7,9,10};
    int length = sizeof(arr)/sizeof(int);
    insertion_sort(arr, length);
    print_arr(arr,length);    

    return 0;
}
