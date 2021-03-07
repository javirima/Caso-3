package main

//import vector

func sequencial_search(numbers []int, number_searching int) {
	for number := range numbers {

		if number == number_searching {
			println("Se encontro el elmento\n")
		}
	}
	println("No se encontro el elemento\n")
}

func full_array(arr []int) []int {
	var number_adding int = 4000
	for i := range arr {
		arr[i] = number_adding
		number_adding--
	}
	return arr
}

func main() {
	arr := make([]int, 4000)
	arr = full_array(arr)
	sequencial_search(arr, 6000)
}
