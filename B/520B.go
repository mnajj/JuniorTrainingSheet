package main

import (
	"fmt"
)

func main() {
	var n, m int
	if _, err := fmt.Scanf("%d %d\n", &n, &m); err != nil {
		panic(err)
	}
	var sum int
	for n != m {
		sum++
		if m > n && m%2 == 0 {
			m /= 2
			continue
		}
		m++
	}
	fmt.Printf("%d\n", sum)
}
