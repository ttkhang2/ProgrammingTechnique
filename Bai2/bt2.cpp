#include <iostream>
using namespace std;

void rotate(int &x, int &y, int &z)
{
    int tmp;
    tmp = x;
    x = y;
    y = z;
    z = tmp;
}

int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    int x, y, z;
    // Nhập 3 số nguyên
    cin >> x >> y >> z;

    cout << "Before: " << x << ", " << y << ", " << z << endl;
    rotate(x, y, z);
    cout << "After: " << x << ", " << y << ", " << z << endl;

    return 0;
}