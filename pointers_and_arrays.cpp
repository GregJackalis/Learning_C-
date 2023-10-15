#include <iostream>
using namespace std;

// int main() {
//     int arr[6] = {0,1,2,3,4,5}; //when making an array, we have to write the number of elements
//                         // amd then inside CURLY BRACKETS and NOT just brackets, we place the values

//     // Then for the pointers:
//     int* p = &arr[5];
//     int x = *p;
//     // cout << p; // this returned (not the same every time probably): 0x16d39af14
//     cout << x; // this returned 5 which is the value of hte memory address that is saved in p

//     // So:
//     // - The * on data type means that the variable is a pointer TO an int.
//     // - The & means the memory address of the variable/value that is used next to it
//     // - The * after the = sign, is called the deference operator. It is used to access the value 
//     //   stored at a specific memroy address help by a pointer (the pointer that the * is used with after the = sign)
// }

// Making arrays, dynamic arrays, and allocating/deallocating memory
// int main() {
//     // simple array declaration
//     int arr[4] = {4, 5, 1, 5};
//     cout << arr << endl; // this will NOT print the array's values, but its POSITION 
//     // comparing to javascript for example where with just console.log(array) the array and its values will be printed

//     // simple array declaration without us giving the values
//     int array2[4];
//     cout << array2 << endl; // same here, the array2's position will be print into the console and NOT its values

//     // array declaration without knowing neither the size and the values of it, but ONLY its data type:
//     cout << "Enter the size of the array: "; // here the size is being input from the console
//     int size;
//     cin >> size;
//     cout << "\n";

//     int* dynamicArray = new int[size]; // memory allocation depending on the size given. This array will then be used for values etc
//     // This is happening because we don't know from the beginning the size of the array and in C++ we can't just have an empty
//     // array with no elements, and then throughout the program add values and expand the array

//     for (int i = 0; i < size; ++i) { // NOTE, that the incrementation is BEFORE the variable and not after like this i++
//         cout << "Type in a value: ";
//         cin >> dynamicArray[i];
//         cout << "\n";
//     } // for loop is used to insert values into the array
    
//     for (int i = 0;i < size; ++i) {
//         cout << dynamicArray[i] << " ";
//     } // for loop is used to print the values of the array, because like previously said, in C++ if we just write 
//     //   cout << array; it will print the array's address and not its actual values!

//    delete[] dynamicArray; // this right deallocates the memory that was allocated before for the array.
//    // It is VERY important to delete allocated memory after finishing working with an array, it is important when
//    // it comes to big scripts that we want them to be fast and efficient and NOT "burden" the program



//     // - There is also one more FOR-LOOP, called "range-for" and it is exactly the same as the FOR-OF in JavaScript and
//     // the FOR-IN in Python.
//     // - Meaning that without using any indices, a variable is made that iterates each element on the array
//     // - It is also preferable to use the auto keyword so that the var variable (in this case) will take the data type of each element
//     //   inside an array (even if an array can't have different data types in C++)
//     int array[4] = {4, 6, 2, 7};
//     for (auto var: array) { // the ":" is like the "of" in JavaScript's "for-of" loops or the "in" in Python's "for-in" loops
//         cout << "\nRange-for loop: " << var << " ";
//     }
// }

int main() {
    // There is a pointer value that is used when we want to declare a pointer but NOT assign it to a variable's position
    // - In this case 0 wouldn't work because it is an integer value, so the "nullptr" keyword/value was made in order to not
    //   mix the 0 and NULL values when it comes to initializing integer variables and pointers.
    // e.g.
    char* pointer = nullptr;
    cout << pointer;
    return 0;
}