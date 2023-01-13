#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int gcd2(int a, int b)
{

    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    // cout << "Tran Trong Khang 20204660";
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl
         << gcd2(a, b);
    return 0;
}