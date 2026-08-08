#include <iostream>
#include <string>     // needed for string customerName
using namespace std;

class MobileRecharge {
    long mobileNumber;
    string customerName;
    float balance;

public:
    // function to accept customer details
    void getDetails() {
        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;
        cout << "Enter Customer Name: ";
        cin >> customerName;
        balance = 0;   // initial balance is zero
    }

    // function to recharge (add money to balance)
    void rechargeBalance() {
        float amount;
        cout << "Enter amount to recharge: ";
        cin >> amount;
        balance += amount;   // add amount to balance
    }

    // function to deduct balance after choosing a plan
    void selectPlan() {
        float planCost;
        cout << "Enter plan cost: ";
        cin >> planCost;

        // check if balance is enough before deducting
        if (planCost <= balance) {
            balance -= planCost;
            cout << "Plan of Rs " << planCost << " selected successfully!" << endl 
                 << "Updated balance: " << balance << endl;
        } else {
            cout << "Insufficient balance! Please recharge first." << endl;
        }
    }

    // function to display updated balance
    void display() {
        cout << "\nCustomer Name: " << customerName << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    MobileRecharge m;
    m.getDetails();
    m.rechargeBalance();
    m.selectPlan();
    m.display();
    return 0;
}