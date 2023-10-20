#include <iostream>
using namespace std;

// int main() {
//     // There is a pointer value that is used when we want to declare a pointer but NOT assign it to a variable's position
//     // - In this case 0 wouldn't work because it is an integer value, so the "nullptr" keyword/value was made in order to not
//     //   mix the 0 and NULL values when it comes to initializing integer variables and pointers.
//     // e.g.
//     char* pointer = nullptr;
//     // string letter = "Hello Meara, I love you"; // there is a string data type in cpp BUT
//     // pointer = &letter [4]; //in order to use the string as a char array we need to do this:
//     char letter[] = "Hello Meara, I love you";
//     pointer = &letter[4];
//     cout << letter << endl;
//     cout << letter << endl; // In this case the pointer starts from the location of the letter array and prints characters until it
//                     // it encounters the null terminator, which there is one at the end of the letter sentence/array.
//                     // So the whole sentence will be printed here
//     cout << *pointer << endl; // In this case "o" will be printed which is the actual value stored at the address that the pointer is
//                       // "looking" at

    
//     // Now in order to print the address the pointer is pointing at and not the value at the address, we need to use something
//     // more complex:
//     cout << "Memory address of pointer: " << static_cast<void*>(pointer) << endl;
//     // In C++, static_cast is a casting operator used for explicit type conversion. 
//     // It allows us to convert one data type into another, provided that there is a valid conversion defined between them. 
//     // In this case, we want to convert a pointer of type char* to a pointer of type void*.
//     return 0;
// }


int main() {
    // char* p = "Hey there!";
    // char* p = nullptr;
    // for (; *p!=0; ++p) { // - So in this case the first part of the for loop which is the initialization of the iteration variable, is empty
    //                     //    because it got initialized before the for loop so no need to do it again
    //                     //  - Then, the second condition basically says: "while the address's value that the pointer is 
    //                     //    pointing at is NOT null (0), continue"
    //                     //  - Lastly, the ++p is the incrementation of the pointer so that it will move to the next character
    //                     //    possibly inside the char array that is pointing at (probably a string that is stored as a char array)
       // cout << p;
    // }

    // In action: we could use it to print the very FIRST WORD of a sentence:
    char sentence[] = "Hello World!";
    char* sentencePointer = &sentence[0];
    for (; *sentencePointer != ' '; ++sentencePointer) { // keep in mind that the "" are DIFFERENT than '', so in this case to say
                                                    // that we want to stop on the first space CHARACTER, we use the ''
        cout << *sentencePointer;
    }
}


// ** Also in arrays, NO MEMORY ALLOCATION IS NEEDED. It automatically finds consequetive memory and "saves" it for the array
// Also each array has a memory saved, which is the memory address of the very first element of the array!
//  For example:
int main() {
    int numbers[100];
    int *pointer;
    pointer = numbers; //this will work and the pointer saves the address of the array (meaning the address of numbers[0])

    // Another way to do this:
    pointer = &numbers[0];
}