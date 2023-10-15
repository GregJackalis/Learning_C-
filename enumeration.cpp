#include <iostream>
using namespace std;

enum class Color { red, blue, green};
enum class Traffic_Light {green, yellow, red};

int main() {
    Color col = Color::red; // here we say that the variable col of type Color is red, 
                            // BUT the red specifically from the Color class

    Traffic_Light light = Traffic_Light::red; // This red is NOT the same as the Color red
                                             // In this case a variable "light" of type Traffic_Light stores the
                                             // Traffic_Light type red and NOT the Color type red

    // All of the cases below are FALSE (return an error):
    Color x = red;                  // error: which red? we have to specify the "red" we're using
    Color y = Traffic_Light::red;   // error: wrong "red" type is assigned to the Color variable. We need to assign the Color's red
    int i = Color::red;             // error: The Color::red value is NOT an int
    Color c = 2;                    // error: The number 2 is NOT Color type value
}