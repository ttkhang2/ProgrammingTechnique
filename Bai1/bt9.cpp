#include <iostream>
using namespace std;

void oneBlock(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << arr[j];
        cout << endl;
    }
}
void output(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        oneBlock(arr + i, size - i);
    }
}

int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << endl;
    output(a, n);
}