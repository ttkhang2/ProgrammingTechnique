#include <iostream>
using namespace std;

int binom(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0)
        return 1;
    return binom(n - 1, k) + binom(n - 1, k - 1);
}

int binom2(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0)
        return 1;
    int C[k + 1];
    for (int i = 0; i <= k; ++i)
        C[i] = 0;
    C[0] = 1;
    for (int i = 1; i <= n; ++i)
        for (int j = min(i, k); j > 0; --j)
            C[j] = C[j] + C[j - 1];
    return C[k];
}

int main()
{
    // cout << "Tran Trong Khang 20204660";
    int m;
    cin >> m;
    for (int n = 1; n <= m; ++n)
    {
        for (int k = 0; k <= n; ++k)
            printf("%d ", binom(n, k));
        printf("\n");
    }
    for (int n = 1; n <= m; ++n)
    {
        for (int k = 0; k <= n; ++k)
            printf("%d ", binom2(n, k));
        printf("\n");
    }
    return 0;
}