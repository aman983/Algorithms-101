def partition(arr: list, low, high):
    pivot = arr[high]
    i = low - 1

    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1

            arr[j], arr[i] = arr[i], arr[j]

    arr[high], arr[i + 1] = arr[i + 1], arr[high]
    return i + 1


def quickSort(arr: list, low: int, high: int):
    if low < high:

        pi = partition(arr, low, high)

        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)
