// Лабораторная 2
#include <iostream>
using namespace std;

int main() {
    // Переменная для хранения введенного с клавиатуры числа
    int x;

    // Переменная для хранения минимального числа
    int minNumber       = 0;

    // Переменная для подсчета количества введенных чисел
    int numberAmount    = 0;

    // Переменная для подсчета суммы введенных чисел
    int numberSum       = 0;

    // Переменная для посчета количества ПОЛОЖИТЕЛЬНЫХ чисел
    int positiveAmount  = 0;

    // Основной цикл работы программы
    while (true) {
        // Считываю данные с клавы
        cin >> x;

        // Проверяю значение на ноль: если введенное число равно нулю, заканчивается программа и выводятся все данные
        if (x == 0) {
            cout << "Min: " << minNumber << endl;
            cout << "Average: " <<  1.0 * numberSum / numberAmount << endl;
            cout << "Positive: " << positiveAmount << endl;
            return 0;
        }

        // Логика минимального числа при первой итерации
        if (numberAmount == 0) {
            minNumber = x;
        }
        
        // Логика минимального числа при последующих итерациях
        if (x <= minNumber && numberAmount != 0) {
            minNumber = x;
        }

        // Счетчик для положительных чисел
        if (x > 0) {
            positiveAmount++;
        }

        // КОНЕЦ ИТЕРАЦИИ
        //Увеличиваем сумму чисел в переменной numberSum
        numberSum += x;

        // Увеличиваем счетчик количества чисел
        numberAmount++;
    }
}
