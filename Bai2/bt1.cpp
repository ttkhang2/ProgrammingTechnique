#include <iostream>
using namespace std;

float get_hypotenuse(float x, float y)
{
    return x * x + y * y;
}

int main()
{
    cout << "Tran Trong Khang 20204660" << endl;
    float x, y;
    cin >> x >> y;

    float z = get_hypotenuse(x, y);
    cout << z << endl;
    return 0;
}