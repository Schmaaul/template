#include "search.hpp"
#include <iostream>

void print(int *array, int size) {
    if(array == nullptr) {
        std::cout << "null array" << std::endl;
return; }
     std::cout << "[";
     for(int i = 0; i < size;++i) {
         if(i> 0) std::cout << ",";
         std::cout << array[i];
     }
     std::cout << "]";
     std::cout << std::endl;
 }
 int main() {
     int size = 8;
     int * array = create(size);
     std::cout << "Das Array wurde angelegt (erwartet [-1,-1,-1,-1,-1,-1,-1,-1]): "; print(array, size);
     std::cout << "Created array (expected [-1,-1,-1,-1,-1,-1,-1,-1]): "; print(array, size);
     std::cout << std::endl;
     set(array, size, 0, 23);
     set(array, size, 1, 10);
     set(array, size, 2, 43);
     set(array, size, 3, 7);
     set(array, size, 4, 12);
     set(array, size, 5, 42);
     set(array, size, 6, 50);
     set(array, size, 7, 3);
     std::cout << "Das Array wurde gefüllt (erwartet [23,10,43,7,12,42,50,3]): "; print(array, size);
     std::cout << "Initialized array (expected [23,10,43,7,12,42,50,3]): "; print(array, size);
     std::cout << std::endl;
     int steps1 = search(array, size, 42);
     std::cout << "Die Zahl 42 wurde nach  " << steps1 << " Schritten gefunden (3 erwartet)." << std::endl;
     std::cout << "Found 42 after  " << steps1 << " steps (expected 3)." << std::endl;
     std::cout << std::endl;
     multiply(array, size);
     std::cout << "Die Zahlen des Arrays wurden verdoppelt (erwartet [46,20,86,14,24,84,100,6]): "; print(array, size);
     std::cout << "Doubled array (expected [46,20,86,14,24,84,100,6]): "; print(array, size);
     std::cout << std::endl;
     int steps2 = search(array, size, 46);
     std::cout << "Die Zahl 100 wurde nach  " << steps2 << " Schritten gefunden (erwartet 1)." << std::endl;
     std::cout << "Found 100 after  " << steps2 << " steps (expected 1)." << std::endl;
     std::cout << std::endl;
     std::cout << "Konvertiere Array in ein String (erwartet [46,20,86,14,24,84,100,6]): " << to_string(array, size) << std::endl;
     std::cout << "Converted array to string (expected [46,20,86,14,24,84,100,6]): " << to_string(array, size) << std::endl;
     std::cout << std::endl;
     free(array);
     std::cout << "Das Array wurde freigegeben (erwartet 0x0): " << array << std::endl;
     std::cout << "The array was freed (expected 0x0): " << array << std::endl;
     std::cout << std::endl;
return 0; }