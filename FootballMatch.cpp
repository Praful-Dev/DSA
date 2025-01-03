#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cout << "Enter the number of test cases: " << endl;
    cin >> t;

    while (t--) {
        int n;
        cout << "Enter the number of records: " << endl;
        cin >> n;

        string team1, team2;
        int score1 = 0, score2 = 0;

        for (int i = 0; i < n; i++) {
            string teamName;
            cin >> teamName;

            // Initialize team names on the first input
            if (i == 0) {
                team1 = teamName;
                score1++;
            } else if (teamName == team1) {
                score1++;
            } else if (team2.empty()) {
                team2 = teamName;
                score2++;
            } else if (teamName == team2) {
                score2++;
            }
        }

        // Determine the result
        if (score1 > score2) {
            cout << team1 << endl; // Team 1 wins
        } else if (score2 > score1) {
            cout << team2 << endl; // Team 2 wins
        } else {
            cout << "Draw" << endl; // It's a draw
        }
    }

    return 0;
}