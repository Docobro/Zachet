#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    char w;
    int strMin, strMax, a, b;
    strMin=10000;
    strMax=0;
    a=0;
    b=0;
    w=' ';
    int n;
    cout << "Vvedite razmer stroki: ";
    cin >> n;
    char A[n];
    cout << "Vvodim " << n <<" elementov stroki" <<endl;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if ((int)A[i] < strMin)
        {
            strMin = (int)A[i];
            a = i;
        }
        if ((int)A[i] > strMax)
        {
            strMax=(int)A[i];
            b = i;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        w = A[a];
            A[a] = A[b];
            A[b] = w;
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }
}
