#include <iostream>
using namespace std;

class Temperature {
    float celsius, fahrenheit;   // variables to store values

public:
    // function to take celsius input
    void getCelsius() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    // function to convert to fahrenheit
    void convert() {
        fahrenheit = (celsius * 9 / 5) + 32;
    }

    // function to display both values
    void display() {
        cout << "Celsius: " << celsius << endl;
        cout << "Fahrenheit: " << fahrenheit << endl;
    }
};

int main() {
    Temperature t;
    t.getCelsius();
    t.convert();
    t.display();
    return 0;
}