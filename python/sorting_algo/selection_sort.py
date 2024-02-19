def selectionSort(arr: list):
    """We find the smallest number from the unsorted part of array
    and replace it with the first element of the unsorted array"""

    for i in range(arr.__len__()):
        smallest_idx = i
        for j in range(i + 1, arr.__len__()):
            if arr[j] < arr[smallest_idx]:
                smallest_idx = j
        arr[i], arr[smallest_idx] = arr[smallest_idx], arr[i]
