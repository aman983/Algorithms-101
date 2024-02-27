""" Merge sort is divide and conquere sorting algorithm """

"""time complexity: O(nlogn)
    Space Complexity: O(n)"""


def merge(arr: list, low: int, mid: int, high: int):
    helper = []
    i = low
    j = mid + 1
    while i <= mid and j <= high:
        if arr[i] < arr[j]:
            helper.append(arr[i])
            i += 1
        else:
            helper.append(arr[j])
            j += 1

    while i <= mid:
        helper.append(arr[i])
        i += 1

    while j <= high:
        helper.append(arr[j])
        j += 1

    for i in range(low, high + 1):
        arr[i] = helper[i - low]


def mergeSort(arr: list, low: int, high: int):
    if low < high:
        mid = low + (high - low) // 2

        mergeSort(arr, low, mid)
        mergeSort(arr, mid + 1, high)
        merge(arr, low, mid, high)
