#include <iostream>
using namespace std;
int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    int a[7] = {13, -355, 235, 47, 67, 943, 1222};
    cout << "address of first five elements in memory.\n";
    for (int i = 0; i < 5; i++)
        cout << "\ta[" << i << "]";

    cout << endl;

    for (int i = 0; i < 5; i++)
        cout << "\t" << &a[i];

    cout << endl;
    return 0;
}