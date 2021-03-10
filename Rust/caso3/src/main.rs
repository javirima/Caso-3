#![allow(unused)]
use std::time::Instant;



fn main() {

    println!("sequencial search");
    let numbers: [i32; 100000] = [0; 100000];
   //grow_array(&mut numbers);
   // println!("numbers:{:?}",numbers);
    let start = Instant::now();
    sequencial_search(&numbers,-1);
    let elapsed = start.elapsed();
    println!("Tamaño de array: {}",100000);
    println!("Millis: {} ms", elapsed.as_millis());
}

/*
pub fn grow_array(arr : &mut ){
    let mut add_number = 5000;
    for x in arr{
        x
    }
}
*/


pub fn sequencial_search<T: Ord>(arr: &[T], elemento_buscar:T) {
   for index in 0..arr.len() {
       if arr[index] == elemento_buscar {
           println!("Encontrado\n");
           return;
       }
   }
   println!("No se encontro el numero");
   return;
}