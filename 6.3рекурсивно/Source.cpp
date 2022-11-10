#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;


template<typename T>
void randnumber(T* t, T size, const T min, const T max, T i)
{

    t[i] = min + rand() % (max - min + 1);
    if (i < size - 1)
        randnumber(t, size, min, max, i + 1);
}
template<typename T>
void print(T* t, T size, T i) {
    cout << setw(4) << t[i];
    if (i < size - 1)
        print(t, size, i + 1);
    else
        cout << endl;

}
template<typename T>
void sum(T* t, T size, T suma, T i) {

    if (i < size - 1)
    {
        if (t[i] % 2 == 0)
        {
            suma += t[i];
        }
        sum(t, size, suma, i + 1);
    }
    else {
        cout << " suma= " << suma;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int size;
    cout << " size="; cin >> size;
    int* t = new int[size];
    int min = -10;
    int max = 10;
    randnumber<int>(t, size, min, max, 0);
    print<int>(t, size, 0);
    sum<int>(t, size, 0, 0);



    return 0;
}