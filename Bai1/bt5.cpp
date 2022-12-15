#include <iostream>
using namespace std;

double *maximum(double *a, int size)
{
    double *max;
    max = a;
    if (a == NULL)
        return NULL;

    for (int i = 1; i < size; i++)
    {
        if ((*a + i) > (*max))
            max = a + i;
    }
    return max;
}
int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    double a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double *ptr;
    ptr = maximum(a, 10);
    cout << *ptr << endl;
}