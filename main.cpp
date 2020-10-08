#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  cout << "Enter int in N" << endl;
  cin >> n;                                   // Ввод n с клавиатуры 

  if (n <= 0) {                               // Проверка на "натуральность"
    cout << "Invalid num";                    
    return 0;                                 // Завершаю выполнение функции main
  }

  int currentDozens = 0;                      // currentDozens - для контроля десятков

  for (int i = 2; i <= n; i++) {              // Цикл 1 уровня => перебор всех чисел от 1 до n
    if ((i % 2) == 0 && i != 2) continue;     // Проверка на чётность

    bool isPrime = true;                      // являетсяЛиПростым

    for (int j = 3 ; j <= sqrt(i); j += 2) {  // Перебор делителей
      if ((i % j) == 0) {                     // "Ловля" составного числа
        isPrime = false; 
        break;
      }
    }

    if (isPrime)  {
      if (currentDozens != floor(i/10)) {
        cout << endl;                         // Если число десятков изменится,  
        currentDozens++;                      // переход на следующую строку
      }
      cout << i << " ";
    }
  }  
}