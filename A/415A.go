package main

import (
	"fmt"
)

func main() {
	var n, m int
	if _, err := fmt.Scanf("%d %d\n", &n, &m); err != nil {
		panic(err)
	}
	bs := make([]int, m)
	for i := 0; i < m; i++ {
		if _, err := fmt.Scanf("%d", &bs[i]); err != nil {
			panic(err)
		}
	}
	lig := make([]int, n)
	for _, l := range bs {
		for i := l - 1; i < n; i++ {
			if lig[i] == 0 {
				lig[i] = l
			}
		}
	}
	for i := 0; i < n; i++ {
		fmt.Printf("%d ", lig[i])
	}
}
