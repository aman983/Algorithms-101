#include <stdio.h>
#include <stdlib.h>

/* 
@breif This function is used to prints the values of the array
@param *arr -> pointer of the array to be printed
@param array_length -> lenght of the array to be printed form 0 - array_length
@return void
*/

void print_arr(int *arr, int array_length){
    for(int i=0; i<array_length; i++){
        printf("%d, ",arr[i]);
    }
}


/* 
@breif This function implements INSERTION SORT it is used to sort the array in ascending order 
@param *arr -> pointer of the array to be sorted
@param array_length -> lenght of the array
@return void
*/

void insertion_sort(int *arr, size_t array_length) {
    
    // Iterating through the array
    for (size_t current_index = 1; current_index < array_length; current_index++) {
        
        size_t previous_index = current_index; // set previous index to current one

        // swap the value if nessary until no more required
        while (previous_index > 0 && arr[previous_index - 1] > arr[previous_index]) {
            int temp = arr[previous_index - 1];
            arr[previous_index - 1] = arr[previous_index];
            arr[previous_index] = temp;
            previous_index--;
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
