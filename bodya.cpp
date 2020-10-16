#include <iostream>
using namespace std;

int main() {
    int x;
    int minimalNumber;
    int positiveAmount = 0;
    int numberAmount = 0;
    int numberSum = 0;
    int z = 0;
    while (true) {
        cin >> x;

        if (z == numberAmount) {
            cout << "Positive: " << positiveAmount << endl;
            cout << "Average: "  << 1.0 * numberSum / numberAmount << endl;
            cout << "Minimal: "  << minimalNumber << endl;
            return 0;
        } else {

        }

        if (x <= minimalNumber || numberAmount == 0) {
            minimalNumber = x;
        }
        if (x > 0) {
            positiveAmount++;
        }
        numberAmount++;
        numberSum += x;
    }
}