package main

import "fmt"

func main() {
	var n int
	if _, err := fmt.Scanf("%d\n", &n); err != nil {
		panic(err)
	}
	prev, res := -1, 0
	var v int
	for i := 0; i < n; i++ {
		if _, err := fmt.Scanf("%d", &v); err != nil {
			panic(err)
		}
		if v == 1 {
			if prev == -1 {
				res = 1
			} else {
				res *= i - prev
			}
			prev = i
		}
	}
	fmt.Println(res)
}
