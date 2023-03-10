package main

import (
	"fmt"
	"math"
)

func main() {
	var n int
	if _, err := fmt.Scanf("%d\n", &n); err != nil {
		panic(err)
	}
	d := make([]int, n)
	var max int
	min := math.MaxInt
	for i := 0; i < n; i++ {
		if _, err := fmt.Scanf("%d", &d[i]); err != nil {
			panic(err)
		}
		if d[i] > max {
			max = d[i]
		}
		if d[i] < min {
			min = d[i]
		}
	}
	var minCount, maxCount int
	for _, x := range d {
		if x == min {
			minCount++
		}
		if x == max {
			maxCount++
		}
	}
	fmt.Printf("%d %d\n", max-min, minCount*maxCount)
}
