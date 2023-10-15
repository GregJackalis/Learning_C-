// c plus plus is a case sensitive language, but it's not space-sensitive

#include <iostream> //i stands for input and the o for output
// int main() {
//     std::cout << "Hello World!";
//     return 0;
// }

// int main() {
//     // int file_size; // in case this happens
//     double size = 9.99;
//     // std:: cout << file_size; // then a random number is returned each time, this is called garbage (the data that it's currently in memory). Thus
//                             // default values have to be used
//     int file_size = 100;
//     std:: cout << file_size;

//     int num1 = 0, num2 = 32, num4 = 5; // more than one variables can be declared on the same line of code. But it's bad practise so each variable needs to be declared on different line
//     return 0;
// }


// Exercise: Write code to swap the value of two variables
// int main() {
//     int a = 12;
//     int b = 18;
//     std:: cout << "Before: " << a << " " << b;

//     int temp = a;
//     a = b;
//     b = temp;
//     std:: cout << "\nAfter: " << a << " " << b;
// }

// Naming Conventions
// int file_Name; // Snake Case
// int FileName; // Pascal Case
// int fileName; // Camel Case
// int iFileName; // Hungarian Notation (the i stands for the integere, so in this case the first letter is about the data type of the variable)
// ** It is preferable to use PASCAL CASE for CLASSES and CAMEL CASE for VARIABLES


// Mathematical expressions (some cases)
// int main() {
//     int x = 10;
//     int y = x++;
//     std:: cout << "x is: " << x << ", and y is: " << y; // x = 11 and y = 10, that's because the 10 value is first assigned to y and then 
//                                                         //the x value is being incremented by 1

//     int z = ++x;
//     std:: cout << "\nx is: " << x << ", and z is: " << z; // x = 12 and y = 12, that's because first the x is being incremented by 1 so from 11 it 
//                                                           // goes to 12, and then the x which is now 12 is assigned to y
// }

// ** Order of operations (basic math):
// 1st) parenthesis operations
// 2nd) * and / (left to right)
// 3rd) + and - (left to right)

// Exercise: need to implement a specific math operation
// int main() {
//     double x = 10;
//     double y = 5;
//     double z = (x + 10) / (3 * y);
//     std:: cout << z;
// }


// int main() {
//     int x = 10;
//     std:: cout << "x = ";
//     std:: cout << x<< std:: endl; // the "<<" is called the Stream Insertion Operator, and the cout is an object that represents the Standard Output System

//     //we can also do this:
//     std:: cout << "x = " << x << std:: endl; // the std:: endl is used to end the output line and then take the next output on the line below in the terminal window

//     // and with more than one variables
//     int y = 15;
//     std:: cout << "x = " << x << " and y = " << x << std::endl;

//     // we can also do this:
//     std:: cout << "y is " << y << std:: endl // be careful that no semicolon is used here and is only used at the very end of the whole cout string.
//                << "x is " << x; // we can also use tabs in order to format it a bit better and make our code more readable
// }


// there is also a way to stop using std all the time and repeat it, this can happen by doing this:
using namespace std; // and then we can just write:
// int main() {
//     int x = 5; 
//     int y = 2;
//     cout << "x is " << x << endl
//          << "y is " << y;
// }


// Exercise: Sale = 95k, State Tax = 4%, County Tax = 2%
// int main() {
//     double sales = 95000;
//     double stateTax = 4;
//     double countyTax = 2;

//     double clearIncome = sales - ((sales * (stateTax/100)) + (sales * (countyTax/100)));
//     double totalTax = (sales * (stateTax/100)) + (sales * (countyTax/100));
//     cout << "Your total tax is: " << totalTax << endl;
//     cout << "Your clear income is: " << clearIncome;
// }


// Reading From the Console: in <iostream> we also have cin that is used to read smth from the console
// int main() {
//     cout << "Enter a value: ";
//     int value;
//     cin >> value; // the "Arrows" or also called Stream Insertion operator, is the otherway around, and the easiest way to remember this is to think of the data flow

//     cout << "You typed: " << value << endl;

//     // ** In case a float number is given from the terminal then the decimal point is gone and only the int part is kept. 
//     //    So in case we're expecting a float number then we should use float or double data types


//     // we can also do this:
//     cout << "Enter values for x and y: ";
//     double x; double y;
//     cin >> x >> y;
//     cout << "Result: " << x + y;

// }

// Exercise: convert fahrenheit to celsius
// int main() {
//     cout << "Type in the Fahrenheit degrees you'd like to convert to Celsius: ";
//     double fahr;
//     cin >> fahr;
//     cout << "The degrees given converted to: " << (fahr - 32) / 1.8 << " Celsius Degrees" << endl;

// }

// std library also has: 
//  - floor() ==> floors down to the closest integer the value that is put inside the parenthesis
//  - pow() ==> this function/method right here is using the power mathematical operator ^ that is used in other programmning languages.
//              it takes 2 parameters. First one is the base value and the second one is the power/times the base value will be multiplied with itself



// A few more things:
int main() {
    // float interestRate = 3.67; // c++ will try to store a double value inside the float type variable and we don't want that, that's why we use and f at the end
    // float interestRateFloat = 3,67f;
    // long fileSize = 90000L; // the same can be used with other type of data

    // // and there is also the "auto" data type which automatically "puts" the variable in a data type depending on its value, e.g.:
    // auto letter = 'a'; // it will automatically give it the char data type

    // // ** Keep in mind, that we need to be careful when using the auto keyword, because in cases like this:
    // auto fileSize2 = 90000; // this will be stored as an integer, and we don't want that! So it's good to use the auto keyword with a letter next to the values
    // auto filzeSizeCorrect = 90000L;

    // cout << sizeof(int); // this finds the size of the data type (in this case int is 4 bytes)
    // empty brackets can also be used as initializers:


    // int number{}; // this is called the uniform initialization syntax.
    // - This was made because c++ automatically does data type conversions when it comes to mathematical operation with different
    // data types. But because of that, there would be times that the results would be false because the numbers were converted to int
    // and therefore they lost their actual value. 
    // - To avoid that, the uniform initialization syntax was made, what this does is that it returns an error in cases like:
    // int x{10.5} ==> this would return "Error: narrowing conversion" meaning that the int keyword will narrow the truly value
    // of the x and then later the results that come from using this faulty x value, will be also false!
    // cout << number; // it will print 0

    int number1 = 40;
    cout << number1; // it will NOT print 0, it will print a random "garbage" number like it was said at the very start of the code
}