#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int c[30];
        for (int i = 0; i < 30; i++) { // Use i < 30 to avoid out of bounds
            cin >> c[i];
        }

        int count = 0; // Initialize count
        bool bored = false; // Flag to check if bored

        for (int i = 0; i < 30; i++) { // Use i < 30
            if (c[i] == 1) {
                count++;
                if (count > 5) { // Check if count exceeds 5
                    bored = true; // Set bored flag
                    break; // No need to check further
                }
            } else {
                count = 0; // Reset count if not coding
            }
        }

        if (bored) {
            cout << "#coderlifematters" << endl;
        } else {
            cout << "#allcodersarefun" << endl;
        }
    }
    return 0;
}