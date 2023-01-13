#include <bits/stdc++.h>
using namespace std;

int lucas(int n)
{
    if (n == 0)
        return 2;
    if (n == 1)
        return 1;
    return lucas(n - 1) + lucas(n - 2);
}

int main()
{
    cout << "Tran Trong Khang 20204660";
    int n;
    cin >> n;
    cout << lucas(n);
    return 0;
}