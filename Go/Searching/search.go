// This a go program for known searching algorithms
// 1) Linear Search
// 2) Binary Search
package main

import (
	"fmt"
)

func LinearSearch(target int, arr []int) {
	var ans int = -1 // Initialize ans with -1 to indicate not found

	for i := 0; i < len(arr); i++ {
		if arr[i] == target {
			ans = i
			break
		}
	}
	fmt.Println("The target element found at index", ans)
}

func BinarySearch(target int, arr []int) bool {
	high := len(arr) - 1
	low := 0

	for low <= high {
		mid := (low + high) / 2
		if arr[mid] == target {
			return true // Return true if target is found
		}
		if arr[mid] > target {
			high = mid - 1
		} else {
			low = mid + 1
		}
	}
	return false // Return false if target is not found
}

func main() {
	arr := [5]int{1, 2, 3, 4, 5}
	target := 3

	LinearSearch(target, arr[:])
	fmt.Println("Binary Search:")
	BinarySearch(target, arr[:])
	fmt.Println("Result:", BinarySearch(target, arr[:]))
}
