#include <iostream>

using namespace std;

struct Vector {
    int size;       // element size
    double* elem;   // pointer to elements
};

// so the Vector is basically a new data type made from us and it can be used like this:
// Vector var;

// But because in this case the elem pointer is not pointing anywhere, we could use a function to do so:
void vector_init(Vector& var, int s) { // the first parameter is the address of the variable we sent, and the second is the size
    
    var.elem = new double[s];    // in this case the new keyword allocates new free memory and then this memory with the size "s"
                                    // is stored on the pointer/attribute/method of the var element of data type Vector
    var.size = s;            // here the size attribute/method stores the size value 
}

void vector_Free(Vector& var) { // function to de-allocate the memory after the program is done finding the sum
    delete[] var.elem;
}


// EXAMPLE: Reading s number of integers and return their sum
double read_and_sum(int s) {
    Vector var; // a Vector data type variable is made (that has the two attributes/methods, elem and size)
    vector_init(var, s); // sending the Vector type variable in the function.
                    // On that function, s (size) memory will be allocated for double data types
                    // and the s number will be saved on the size "attribute" of the Vector var variable
    for (int i = 0; i < var.size; ++i) { // for loop is used to fill the var array's allocated memory
        cin >> var.elem[i];
        cout << var.elem[i] << " "; // this is to print the values stored in the array
    }
    double sum = 0; // simple sum value is declared
    for (int i = 0; i < var.size; ++i) { 
        sum += var.elem[i]; // using a for loop again we add each value from the var memory to the sum
    }
    vector_Free(var); // after finishing calculating the sum AND BEFORE returning the sum, we need to de-allocated/delete
                      // the allocated memory. We can do that straight away or make a new function that the only thing it does
                      // is deleting the allocated memory of the Vector variables that are passed into it
    return sum; // finally, the sum value is returned to the main function/"program"
}

int main() {
    int newSum = read_and_sum(4); // a variable is made that stores the value returned from the read_and_sum function.
                            //The number 4 is also passed into the function, which is the size we want our var Vector variable to have
    cout << newSum; // printing the sum returned from the read_and_sum() function
}

// ** Also in order to use a pointer just like we do with . in attributes, we use the ->
// e.g.:
// int i1 = v.size;
// int i2 = pointerV->size; ==> or we could also use (*pointerV).size
//EXAMPLE:
class MyClass {
    public:
    void myFunction() {
         cout << "Hello from my class!" << endl;
    }
};

int main() {
    MyClass obj; //an object type MyClass is made
    MyClass* ptr = &obj; // a pointer that points to the newly MyClass obj is made

    ptr->myFunction(); //accessing the myFunction "member" of the MyClass type object "obj"
    return 0;
}