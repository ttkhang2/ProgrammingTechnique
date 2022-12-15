#include <iostream>
using namespace std;

void reversearray(int arr[], int size)
{
    int l = 0, r = size - 1, tmp;

    for (int i = 0; i < size / 2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[r - i];
        arr[r - i] = tmp;
    }
}

void ptr_reversearray(int *arr, int size)
{
    int l = 0, r = size - 1, tmp;

    for (int i = 0; i < size / 2; i++)
    {
        tmp = *(arr + i);
        *(arr + i) = *(arr + r - i);
        *(arr + r - i) = tmp;
    }
}
int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    int a[5] = {1, 2, 3, 4, 5};
    reversearray(a, 5);
    cout << a[0] << endl;
    int b[7] = {1, 2, 3, 4, 5, 6, 7};
    ptr_reversearray(b, 7);
    cout << b[1] << endl;
}