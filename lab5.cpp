#include <iostream>
using namespace std;

int main() 
{
    // arr - dinamic
    // init - initial array
    // buff - buffer array

    // 1. Read an array
    unsigned long long arr[3][3], init[3][3], buff[3];
    int n, i, j, k;
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            init[i][j] = arr[i][j];
        }
    }
    cin >> n;

    // 2. Pow
    // Перебор степеней
    for (; n > 1 ; n--)
    {
        // Перебор строк
        for (i = 0; i < 3 ; i++)
        {
            // Резервирование значений строки i
            for (j = 0; j < 3; j++)
            {
                buff[j] = arr[i][j];
            }

            // Перебор каждого элемента столбца
            for (j = 0; j < 3; j++)
            {
                arr[i][j] = 0;
                for (k = 0; k < 3; k++)
                {
                    arr[i][j] += buff[k] * init[k][j];
                }
            }
        }
    }

    // 3. Console logging
    for (i = 0; i < 3; i++, cout << endl) 
    {
        for (j = 0; j < 3; j++)
        {
           cout << arr[i][j] << " ";
        }
    }
}