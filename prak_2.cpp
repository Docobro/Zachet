#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int x, y, z;
    x=10000;
    y=10000;
    z=10000;
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int A[n];
    cout << "Введите " << n <<" элементов массива" <<endl;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (A[i]<x)
        {
            x=A[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if ((A[i]<y)&&(A[i]!=x))
        {
            y=A[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if ((A[i]<z)&&(A[i]!=x)&&(A[i]!=y))
        {
            z=A[i];
        }
    }
    cout << "Минимальные значения в массиве: "<< x << " " << y << " " << z;
}
