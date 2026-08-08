#include <iostream>
using namespace std;

class Time {
    int hours1, minutes1;   // first time value
    int hours2, minutes2;   // second time value
    int resultHours, resultMinutes;   // to store the sum

public:
    // function to input two time values
    void getTime() {
        cout << "Enter first time (hours minutes): ";
        cin >> hours1 >> minutes1;
        cout << "Enter second time (hours minutes): ";
        cin >> hours2 >> minutes2;
    }

    // function to add the two times
    void addTime() {
        resultMinutes = minutes1 + minutes2;
        resultHours = hours1 + hours2;

        // if minutes exceed 60, convert extra into hours
        if (resultMinutes >= 60) {
            resultHours += resultMinutes / 60;
            resultMinutes = resultMinutes % 60;
        }
    }

    // function to display the resulting time
    void display() {
        cout << "Resulting Time: " << resultHours << " hr " 
             << resultMinutes << " min" << endl;
    }
};

int main() {
    Time t;
    t.getTime();
    t.addTime();
    t.display();
    return 0;
}