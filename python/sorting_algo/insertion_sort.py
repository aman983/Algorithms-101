""" The intitution behind insertion sort is to create a sorted sub array from left side
    eg. first element of array is always sorted, we move to next element in the array and compare it with 
    sorted sub array and place it into its sorted position using comparions
"""

""" Time complexity: O(N^2) """
""" Space Complexity:O(1) """


def insertionSort(arr: list[int]):

    for i in range(1, arr.__len__()):
        # starting from idx=1 because we consider the first element as a sorted subarray
        key = arr[i]

        j = i - 1
        # now we compare and put the new element in its sorted position in sorted subarray
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
