#include <iostream>
using namespace std;

class HostelFee {
    string studentName;
    int hostelID;
    float monthlyFee;
    int numMonths;
    char isDelayed;   // 'y' or 'n' to indicate delay
    float totalFee;

public:
    // function to accept student details
    void getDetails() {
        cout << "Enter Student Name: ";
        cin >> studentName;
        cout << "Enter Hostel ID: ";
        cin >> hostelID;
        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;
        cout << "Enter Number of Months: ";
        cin >> numMonths;
        cout << "Is payment delayed? (y/n): ";
        cin >> isDelayed;
    }

    // function to calculate total fee
    void calculateFee() {
        totalFee = monthlyFee * numMonths;

        // apply late fine if payment is delayed
        if (isDelayed == 'y' || isDelayed == 'Y') {
            totalFee += 500;
        }
    }

    // function to display final payable amount
    void display() {
        cout << "\n--- Hostel Fee Details ---" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Hostel ID: " << hostelID << endl;
        cout << "Total Amount Payable: " << totalFee << endl;
    }
};

int main() {
    HostelFee h;
    h.getDetails();
    h.calculateFee();
    h.display();
    return 0;
}