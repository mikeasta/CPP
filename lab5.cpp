#include <iostream>
using namespace std;

int main() 
{
    // 1. Read an array
    unsigned long long arr[3][3], buff[3][3], a, b, c;
    int n, i, j;
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            buff[i][j] = arr[i][j];
        }
    }
    cin >> n;

    // 2. Pow
    for (; n > 1 ; n--)
    {
        for (i = 0; i < 3 ; i++)
        {
            a = arr[i][0];
            b = arr[i][1];
            c = arr[i][2];
            for (j = 0; j < 3; j++)
            {
                arr[i][j] = (buff[0][j] * a) + (buff[1][j] * b) + (buff[2][j] * c);
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