""" The intitution behind bubble sort is to iterate over the array , compare the elements in pair of two and move the largest element 
    to the end of array in each outer iteration """


def bubbleSort(arr: list[int]):
    """params:
    arr:list[int] list of integer"""

    for i in range(arr.__len__()):
        # outer loop
        boolSwapped = False  # to keep track weather we have swapped the element,
        # if we have not then we have alreay sorted the list and can stop further useless iterations
        for j in range(arr.__len__() - i - 1):
            # inner loop for comparison
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                boolSwapped = True
        if not boolSwapped:
            return
