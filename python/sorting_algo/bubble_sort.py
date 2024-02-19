def bubbleSort(arr: list):
    """In bubble sort we move the largest element to the right
    by doing comparison"""
    for i in range(arr.__len__()):
        boolSwapped = False
        for j in range(arr.__len__() - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                boolSwapped = True
        if not boolSwapped:
            return
