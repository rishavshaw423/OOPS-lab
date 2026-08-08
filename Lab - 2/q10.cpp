#include <iostream>
#include <string>
using namespace std;

class WaterBill {
    long consumerNumber;
    string consumerName;
    float litres;
    float bill;

public:
    // function to accept consumer details
    void getDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;
        cout << "Enter Consumer Name: ";
        cin >> consumerName;
        cout << "Enter Water Consumption (litres): ";
        cin >> litres;
    }

    // function to calculate bill slab-wise
    void calculateBill() {
        bill = 0;
        float remaining = litres;

        if (remaining > 0) {
            // first 500 litres at Rs 2 per litre
            float slab1 = (remaining > 500) ? 500 : remaining;
            bill += slab1 * 2;
            remaining -= slab1;
        }

        if (remaining > 0) {
            // next 500 litres at Rs 3 per litre
            float slab2 = (remaining > 500) ? 500 : remaining;
            bill += slab2 * 3;
            remaining -= slab2;
        }

        if (remaining > 0) {
            // remaining litres above 1000 at Rs 5 per litre
            bill += remaining * 5;
        }
    }

    // function to display the complete bill
    void display() {
        cout << "\n--- Water Bill ---" << endl;
        cout << "Consumer Number: " << consumerNumber << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Water Consumption: " << litres << " litres" << endl;
        cout << "Total Bill: Rs " << bill << endl;
    }
};

int main() {
    WaterBill w;
    w.getDetails();
    w.calculateBill();
    w.display();
    return 0;
}