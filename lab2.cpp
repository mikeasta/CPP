// Лабораторная 2
#include <iostream>
using namespace std;

int main() {
    int x;
    int minNumber       = 0;
    int numberAmount    = 0;
    int numberSum       = 0;
    int positiveAmount  = 0;
    while (true) {
        cin >> x;

        if (x == 0) {
            cout << "Min: " << minNumber << endl;
            cout << "Average: " <<  1.0 * numberSum / numberAmount << endl;
            cout << "Positive: " << positiveAmount << endl;
            return 0;
        }

        if ((x <= minNumber && numberAmount != 0) || (numberAmount == 0)) {
            minNumber = x;
        }

        if (x > 0) {
            positiveAmount++;
        }

        // Не использую for, ибо на тот момент мы его еще не знали
        numberSum += x;
        numberAmount++;
    }
}
