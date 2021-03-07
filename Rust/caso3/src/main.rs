#![allow(unused)]
use std::time::Instant;



fn main() {

    let start = Instant::now();

    println!("sequencial search");
    let mut numbers:Vec<i128> = Vec::new();
    grow_array(&mut numbers);
    println!("numbers:{:?}",numbers);
    let elapsed = start.elapsed();

    sequencial_search(&mut numbers,6000);
    println!("Millis: {} ms", elapsed.as_millis());

    /*
    println!("Sort strings alphabetically");
    let mut strings = ["beach", "hotel", "airplane", "car", "house", "art"];
    println!("Before: {:?}", strings);
    bubble_sort(&mut strings);
    println!("After:  {:?}\n", strings);
    */
}


pub fn grow_array(arr : &mut Vec<i128>){
    let mut add_number = 5000;
    loop{
        if add_number == 0{
            break;
        }
        arr.push(add_number);
        add_number-=1;
    }
}

pub fn sequencial_search<T: Ord>(arr: &mut [T], elemento_buscar:T) {
   for index in 0..arr.len() {
       if arr[index] == elemento_buscar {
           println!("Encontrado\n");
           return;
       }
   }
   println!("No se encontro el numero");
   return;
}