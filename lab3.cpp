// Лабораторная 3
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int dozensAmount = 0;
  if (n == 2) {
      cout << 2;
  }
  for (int i = 3; i <= n; i += 2) {

    bool isPrime = true;
    float c = sqrt(i);

    for (int j = 3; j <= c; j += 2) {
      if ((i % j) == 0) {
        isPrime = false;
        break;
      }
    }

    int currentDozens = floor(i / 10);
    if (isPrime) {
      if (dozensAmount < currentDozens) {
        cout << endl;
        dozensAmount = currentDozens;
      } 
      cout << i << " ";
    }
  }
}