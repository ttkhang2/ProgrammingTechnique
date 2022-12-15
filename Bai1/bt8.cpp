#include <iostream>
using namespace std;
//"Tran Trong Khang 20204660" ;

void allocate_mem(int ***mt, int m, int n)
{
    // #Allocate memory for the matrix

    *(mt) = new int *[m];
    for (int i = 0; i < m; i++)
        (*mt)[i] = new int(n);
}

void input(int **mt, int m, int n)
{
    // #Input elements of the matrix

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> *(*(mt + i) + j);
}

void output(int **mt, int m, int n)
{
    // # Print all elements of the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << " " << *(*(mt + i) + j);

        cout << endl;
    }
}

int process(int **mt, int m, int n)
{
    int tong = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if ((*(*(mt + i) + j)) % 2 == 0)
                tong += *(*(mt + i) + j);

    return tong;
}

void free_mem(int **mt, int m, int n)
{
    // # Free memory

    for (int i = 0; i < m; i++)
        delete mt[i];
    delete mt;
}

int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    int m, n, **mt;
    cout << "Enter m, n = " << endl;
    cin >> m >> n;
    allocate_mem(&mt, m, n);
    input(mt, m, n);
    output(mt, m, n);
    cout << "The sum of all even elements is " << process(mt, m, n) << endl;
    free_mem(mt, m, n);
    return 0;
}