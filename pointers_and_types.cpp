#include <iostream>
using namespace std;

struct Vector2 {
    float x;
    float y;
}

int main() {
    Vector2 arr[100];
    Vector2 *pointer = arr;
    float *pointerFloat;

    cout << pointer++; // this will print the x and y values on the arr[1] position of the array

    pointerFloat = (float*)pointer;
    cout << pointerFloat++; // this will print the y value on the arr[0] position.
                            // that's because of the pointer's type being float
}


// dynamically allocating memory
int main() {
    Vector2 arr[100];
    int size = 100;
    Vector2 *arrayPointer;

    // using malloc to dynamically allocate memory
    arrayPointer = (Vector2*) malloc (size * sizeof(Vector2)) // meaning the 100 positions we want for the array TIMES the numnber of "methods"
                                                            // in the Vector2 struct. So 200 memory positions will be allocated
}


// REMEMBER: malloc ===> free
//           new    ===> delete