
package main
import (
    "fmt"
)
//http://www.runoob.com/go/go-tutorial.html
func fibonacci(n int, c chan int) {
	x, y := 1, 1
	fmt.Println(n)
    for i := 0; i < n; i++ {
        c <- x
        x, y = y, x + y
    }
    close(c)
}
func  main(){
    hashfun()
    c := make(chan int, 10)
    go fibonacci(cap(c), c)
    for i := range c {
        fmt.Println(i)
    }
}