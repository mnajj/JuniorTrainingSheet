package main

import (
	"fmt"
)

func main() {
	var n int
	if _, err := fmt.Scanf("%d\n", &n); err != nil {
		panic(err)
	}
	m := make(map[string]string)
	var l, r string
	for i := 0; i < n; i++ {
		if _, err := fmt.Scanf("%s %s\n", &l, &r); err != nil {
			panic(err)
		}
		if v, ok := m[l]; ok {
			delete(m, l)
			m[r] = v
			continue
		}
		m[r] = l
	}
	fmt.Println(len(m))
	for k, v := range m {
		fmt.Printf("%s %s\n", v, k)
	}
}
