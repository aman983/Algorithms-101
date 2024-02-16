def selectionSort(arr: list):
    """We find the smallest number from the unsorted part of array
    and replace it with the first element of the unsorted array"""

    for i in range(arr.__len__()):
        smallest_idx = i
        for j in range(i + 1, arr.__len__()):
            if arr[j] < arr[smallest_idx]:
                smallest_idx = j
        arr[i], arr[smallest_idx] = arr[smallest_idx], arr[i]


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


def insertionSort(arr: list):

    for i in range(1, arr.__len__()):
        key = arr[i]

        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key


if __name__ == "__main__":
    arr = [5, 4, 3, 2, 1]
    insertionSort(arr)
    print(arr)
