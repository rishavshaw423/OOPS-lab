#include <iostream>
#include <string>
using namespace std;

class CricketPlayer {
    string playerName;
    int matchesPlayed;
    int totalRuns;
    float average;

public:
    // function to accept player details
    void getDetails() {
        cout << "Enter Player Name: ";
        cin >> playerName;
        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;
        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
    }

    // function to calculate batting average
    void calculateAverage() {
        average = (float)totalRuns / matchesPlayed;
    }

    // function to classify performance and display report
    void displayReport() {
        string performance;

        // check average against each range
        if (average >= 50)
            performance = "Excellent";
        else if (average >= 35)
            performance = "Good";
        else if (average >= 20)
            performance = "Average";
        else
            performance = "Poor";

        cout << "\n--- Player Report ---" << endl;
        cout << "Player Name: " << playerName << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Batting Average: " << average << endl;
        cout << "Performance: " << performance << endl;
    }
};

int main() {
    CricketPlayer p;
    p.getDetails();
    p.calculateAverage();
    p.displayReport();
    return 0;
}