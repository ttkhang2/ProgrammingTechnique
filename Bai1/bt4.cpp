#include <iostream>
using namespace std;

int counteven(int *arr, int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if ((*arr + i) % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Array 1: " << counteven(a, 10) << endl;
    int b[8] = {1, 5, 4, 8, 10, 6, 7, 2};
    cout << "Array 2 :" << counteven(b, 8) << endl;
}