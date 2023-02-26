package main

import (
	"fmt"
)

func main() {
	var n int
	if _, err := fmt.Scanf("%d\n", &n); err != nil {
		panic(err)
	}
	cards := make([]int, n)
	for i := 0; i < n; i++ {
		if _, err := fmt.Scanf("%d", &cards[i]); err != nil {
			panic(err)
		}
	}
	for i := 0; i < (n / 2); i++ {
		fmt.Println(min(cards), max(cards))
	}
}

func min(s []int) int {
	min := 101
	var minIdx int
	for i, v := range s {
		if v == 0 {
			continue
		}
		if min >= v {
			min = v
			minIdx = i
		}
	}
	s[minIdx] = 0
	return minIdx + 1
}

func max(s []int) int {
	var max, maxIdx int
	for i, v := range s {
		if v == 0 {
			continue
		}
		if max <= v {
			max = v
			maxIdx = i
		}
	}
	s[maxIdx] = 0
	return maxIdx + 1
}
