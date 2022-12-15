#include <iostream>
using namespace std;

int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    int x, y, z;
    int *ptr;
    cin >> x >> y >> z;
    cout << "Here are the values of x, y, and z:" << endl;
    cout << x << " " << y << " " << z << endl;

    ptr = &x;
    *ptr += 100;
    ptr = &y;
    *ptr += 100;
    ptr = &z;
    *ptr += 100;

    cout << "Once again, here are the values of x, y, and z:" << endl;
    cout << x << " " << y << " " << z << endl;
    return 0;
}