#include <iostream>
using namespace std;

int main() {
    int l, n, w, h;

    // Read the minimum dimension L
    cin >> l;

    // Read the number of photos N
    cin >> n;

    // Process each photo
    for (int i = 0; i < n; i++) {
        // Read the width W and height H of the photo
        cin >> w >> h;

        // Check if either width or height is less than L
        if (w < l || h < l) {
            cout << "UPLOAD ANOTHER" << endl;
        }
        // Check if the photo is square and both dimensions are at least L
        else if (w == h) {
            cout << "ACCEPTED" << endl;
        }
        // Otherwise, prompt the user to crop it
        else {
            cout << "CROP IT" << endl;
        }
    }

    return 0;
}
