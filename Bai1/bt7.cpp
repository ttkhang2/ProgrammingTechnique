#include <iostream>
using namespace std;

int *a;
int n, tmp;

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    cout << "Enter the number of elements: ";
    cin >> n;

    // #Allocate memory

    int *a = new int(n);

    for (int i = 0; i < n; i++)
        cin >> *(a + i);

    cout << "The input array is: \n";
    for (int i = 0; i < n; i++)
        cout << *(a + i);
    cout << endl;

    // #Sort array
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (*(a + j) > *(a + i))
                swap(a + j, a + i);

    cout << "The sorted array is: \n";
    for (int i = 0; i < n; i++)
        cout << *(a + i);
    cout << endl;

    delete a;
    return 0;
}