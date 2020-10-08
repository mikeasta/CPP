// Задание: Ввод с клавиатуры натурального числа и вывод в консоль 
// всех простых чисел меньше исходного натурального числа
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  // Ввод n с клавиатуры проверка на "натуральность"
  int n;
  std::cout << "Enter int in N" << endl;
  std::cin >> n;

  // Проверка на "натуральность"
  if (n <= 0) {
    // Завершаю выполнение функции main
    std::cout << "Invalid num";
    return 0;
  }

  // i - для перебора всех чисел и проверки их на "простоту"
  int i;

  // currentDecade - для контролятекущего разряда десятков
  int currentDecade = 0;

  // Цикл 1 уровня => перебор всех чисел от 1 до n
  for (i = 2; i <= n; i++) 
  {
    // Проверка на чётность
    if ((i % 2) == 0 && i != 2) continue;

    // являетсяЛиПростым
    bool isPrime = true;

    // Перебор делителей
    for (int j = 3 ; j <= sqrt(i); j += 2)
    {
      // "Ловля" составного числа 
      if ((i % j) == 0) isPrime = false;
    }

    if (isPrime)  {
      // Если число десятков изменится, переход на следующую строку 
      if (currentDecade != floor(i/10)) {
        std::cout << endl;
        currentDecade++; 
      }
      std::cout << i << " ";
    }
  }  
}