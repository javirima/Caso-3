package main

import "time"

//import vector

func sequencial_search(numbers []int, number_searching int) {
	for number := range numbers {

		if number == number_searching {
			println("Se encontro el elmento\n")
			return
		}

	}
	println("No se encontro el elemento\n")
}

func full_array(arr []int) []int {
	var number_adding int = 12000
	for i := range arr {
		arr[i] = number_adding
		number_adding--
	}
	return arr
}

func main() {
	arr := make([]int, 12000)
	arr = full_array(arr)
	println("Tamanno de array:", 12000)
	startTime := time.Now()
	sequencial_search(arr, -1)

	println("Elapsed time in ms: ", time.Since(startTime).Milliseconds())
}
