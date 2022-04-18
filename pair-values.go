package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
)

func printpairs(n int) { for i := 1; i*i <= n; i++ { if n%i == 0 { fmt.Println(i, "*", n) }}}

func main() { printpairs(24) }
