#include <iostream>
#include <math.h> 
using namespace std;

int main() 
{
    // Ввод массива
    int arr[9];
    cout << "Enter int array\n";
    for (int i = 0; i < 9; i++) 
    {
        cin >> arr[i];
    }

    // Задание 1: поиск тройки с максимальной суммой
    int maxThreeSum   = 0;
    int maxThreeIndex = 0;
    int maxElement, currentSum, startI, endI;

    // ПЕРЕБОР ТРОЕК
    // Cout for Task 2
    cout << "Max elements: ";
    for (int i = 1; i <= 3; i++) 
    {
        // i - номер тройки
        // startI - служит для более удобного перебора массива
        // endI   - служит для перебора массива в ОБРАТНОМ порядке (для задания 2)
        startI     = (i - 1) * 3;       
        endI       = (3 - i) * 3;
        currentSum = arr[startI] + arr[startI + 1] + arr[startI + 2];

        // Если тройка первая или если сумма элементов больше зарезервированного значения
        if (i == 1 || maxThreeSum < currentSum) 
        {
            maxThreeSum   = currentSum;
            maxThreeIndex = i;
        }

        // Задание 2: вывести в обратном порядке следования максимумы каждой из троек
        for (int j = endI; j <= (endI + 2); j++) 
        {
            if (j == endI || maxElement < arr[j]) 
            {
                maxElement = arr[j];
            }
        }
        cout << maxElement << " ";
    }

    // Cout for Task 1
    cout << "\nMax sum in three: " << maxThreeIndex ;

    // Cout for Task 3
    cout << "\nFirst 'pow of 2' row : ";

    // Task 3
    int previous, current, next;
    for (int i = 0; i < 9; i++) 
    {
        if (i > 0) 
        {
            previous = arr[i - 1];
        }
        current  = arr[i];
        next     = arr[i + 1];

        if ((log2(current) == round(log2(current))) && 
            (
                ((log2(next)     == round(log2(next))    ) && (log2(current)  == (log2(next) - 1))) ||
                ((log2(previous) == round(log2(previous))) && (log2(previous) == (log2(current) - 1))) 
            )
           )
        {
            cout << arr[i] << " ";
        } 
        else if (i > 0 && (log2(previous) == round(log2(previous))) && (log2(previous) != (log2(current) - 1))) 
        {
            break;
        }
    }

    // Task 4: insertion sort
    int buffer;
    for (int i = 1; i < 9; i++) 
    {
        buffer = arr[i];
        for (int j = i - 1; (j >= 0) && (arr[j] > buffer); j--) 
        {
            arr[j + 1] = arr[j];
            arr[j]     = buffer;
        }
    }

    // Cout for Task 4
    cout << "\nSorted array: ";
    for (int i = 0; i < 9; i++) 
    {
        cout << arr[i] << " ";
    }
} 