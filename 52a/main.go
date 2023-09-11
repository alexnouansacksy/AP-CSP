package main

import (
	"fmt"
)

func main() {
  var length int
  var width int
	fmt.Println("length: ")
  fmt.Scan(&length)
  fmt.Println("width: ")
  fmt.Scan(&width)

  var area int
  area = length * width
  var perimeter int
  perimeter = (length * 2) + (width * 2)
  fmt.Println("area:", area)
  fmt.Println("perimeter:", perimeter)
  
}

/*
length:
143
width:
82
area: 11726
perimeter: 450
*/
