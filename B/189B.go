package main

import (
	"fmt"
	"math"
)

func main() {
	var w, h, count int
	if _, err := fmt.Scanf("%d %d\n", &w, &h); err != nil {
		panic(err)
	}
	for i := 0; i < h-1; i++ {
		for j := 1; j < w; j++ {
			count += int(math.Min(float64(j), float64(w-j))) * ((h - i) / 2)
		}
	}
	fmt.Printf("%d\n", count)
}
