// Лабораторная 1
#include <iostream>
using namespace std;

int main() {
    // Координаты вершин треугольника : [2;2], [6;2], [6;6]

    float x, y;

    while(true) {
        cin >> x >> y;

        if ((x == 0) && (y == 0)) {
            return 0;
        }

        if ((x <= 6) && (y >= 2) && (y <= x)) {
            // Если точка в треугольнике,...
            cout << "In\n";
        } else {
            // Если точка НЕ в треугольнике,...
            cout << "Out\n";
        }
    }
}

