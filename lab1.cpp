// Лабораторная 1
#include <iostream>
using namespace std;

int main() {
    // Координаты вершин треугольника : [2;2], [6;2], [6;6]

    // Переменные для записи двух координат точки x и y
    float x, y;

    // Основной цикл программы
    while(true) {
        // Ввод значений с клавиатуры
        cin >> x >> y;

        // Ловля программы на нули
        if ((x == 0) && (y == 0)) {
            return 0;
        }

        //2. Логика по которой программа определяет, в или вне трреугольника находится точка
        if ((x <= 6) && (y >= 2) && (y <= x)) {
            // Если точка в треугольнике,...
            cout << "In\n";
        } else {
            // Если точка НЕ в треугольнике,...
            cout << "Out\n";
        }
    }
}
