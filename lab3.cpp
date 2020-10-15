// Лабораторная 3
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  cin >> n;
    
  int dozensAmount = 0;
  for (int i = 2; i <= n; i++) {

    if ((i % 2) == 0 && i != 2) {
      continue;
    }

    bool isPrime = true;
    float c = sqrt(i);
    for (int j = 3; j <= c; j += 2) {
      if ((i % j) == 0) {
        isPrime = false;
        break;
      }
    }

    if (isPrime) {
      if (dozensAmount < floor(i / 10)) {
        cout << endl;
        dozensAmount = floor(i / 10);
      } 
      cout << i << " ";
    }
  }
}