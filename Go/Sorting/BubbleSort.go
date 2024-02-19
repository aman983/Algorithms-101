package main

import (
	"fmt"
)

func Bubblesort(n int, arr []int) {

	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			if arr[i] > arr[j] {
				arr[i], arr[j] = arr[j], arr[i]
			}
		}
	}

}

func main() {

	arr := [6]int{3, 5, 1, 10, 6, 2}
	n := 6 // its the length of the array

	Bubblesort(n, arr[:])

	fmt.Print("The sorted array is printed as")

	for i := 0; i < n; i++ {
		fmt.Print(" ", arr[i])
	}

}
