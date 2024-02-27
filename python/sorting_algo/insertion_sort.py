""" The intitution behind insertion sort is to create a sorted sub array from left side
    eg. first element of array is always sorted, we move to next element and compare it with 
    sorted sub array and place it into its sorted position using comparions
"""


def insertionSort(arr: list):

    for i in range(1, arr.__len__()):
        key = arr[i]

        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
