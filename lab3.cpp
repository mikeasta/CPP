#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int number;
  cin >> number;
    
  int dozensAmount = 0;
  for (int i = 2; i <= number; i++) {

    if ((i % 2) == 0 && i != 2) {
      continue;
    }

    bool isPrime = true;
    for (int j = 3; j <= sqrt(i); j += 2) {
      if ((i % j) == 0) {
        isPrime = false;
        break;
      }
    }

    if (isPrime) {
      if (dozensAmount < floor(i / 10)) {
        cout << endl;
        dozensAmount++;
      } 
      cout << i << " ";
    }
  }
}