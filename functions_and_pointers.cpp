#include <iostream>
using namespace std;

void incrNumber (int a) {
    a = a + 1;
}

// int main () {
//     int anumber = 99;
//     cout << anumber << endl;

//     incrNumber(anumber);
//     cout << anumber << endl
// }


// The above will NOT work because a local variable a is made inside the function scope and it is NOT returned
// We can have TWO SOLUTIONS for this:

// 1st Solution)
int incrNumberInteger(int a) {
    a = a + 1;
    return a;
}

// int main() {
//     int anumber = 99;
//     cout << anumber << endl;

//     int b = incrNumberInteger(anumber);
//     cout << b << endl;
// }


// 2nd Solution)
void incrNumberPointer(int* a) { // a pointer is made because it needs to be changed, meaning it's the output
    *a = *a + 1; // changing the value that is stored inside the address a (which is actually the address of the value 99, so 99+1)
}

int main() {
    int anumber = 99;
    cout << anumber << endl;

    incrNumberPointer(&anumber); // sending the address of the value 99
    cout << anumber << endl;
}


// ** It is prefferable when we have function that have different input variables and different output variables, to use 
//    void function and pointers only for the output values (the values that we want to actually change and "Return", even though
//    we're not actually returning them)
//     E.g.:
//      ===>    for all variables being integers AND: 
//              - a,b,c inputs
//              - d,f,e the outputs 
//          it is preferable to use deferenance- meaning:
//                      function(int a, int b, int c, int* d, int* f, int* e)



// ** More Pointeres Operations:
//      - *a = a + 1; // basically it changes the address's value (the address the pointer is pointing at), to the actual
//                       saved address of a PLUS 1, so it "moves" the memory
//
//      - *a = *(a + 1) // what this does is that it changes the value on the a address, to the value of the address that is 
//                         right next/upper in the memory. e.g.:
//                                                          memory pos: 1001, value: 560
//                                                          memory pos: 1002, value: 352
//                                      So the operation will save the value 352 to the a pointer