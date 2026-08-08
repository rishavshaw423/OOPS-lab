#include <iostream>
using namespace std;

class MovieTicket {
    string movieName;
    float ticketPrice;
    int numTickets;
    float totalCost;

public:
    // function to accept booking details
    void getDetails() {
        cout << "Enter Movie Name: ";
        cin >> movieName;
        cout << "Enter Ticket Price: ";
        cin >> ticketPrice;
        cout << "Enter Number of Tickets: ";
        cin >> numTickets;
    }

    // function to calculate total cost
    void calculateCost() {
        totalCost = ticketPrice * numTickets;
    }

    // function to display booking summary
    void display() {
        cout << "\n--- Booking Summary ---" << endl;
        cout << "Movie Name: " << movieName << endl;
        cout << "Ticket Price: " << ticketPrice << endl;
        cout << "Number of Tickets: " << numTickets << endl;
        cout << "Total Cost: " << totalCost << endl;
    }
};

int main() {
    MovieTicket m;
    m.getDetails();
    m.calculateCost();
    m.display();
    return 0;
}