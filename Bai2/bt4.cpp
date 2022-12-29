#include <iostream>
using namespace std;

int cube(int x)
{
    return x * x;
}

double cube(double x)
{
    return x * x * 1.0;
}

int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    int n;
    double f;
    cin >> n >> f;

    cout << "Int: " << cube(n) << endl;
    cout << "Double: " << cube(f) << endl;

    return 0;
}