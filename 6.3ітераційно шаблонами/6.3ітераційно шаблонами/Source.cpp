#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

template<typename T>

void randnumber(T* t, T size, const T min, const T max)
{
    for (int i = 0; i < size; i++) {
        t[i] = min + rand() % (max - min + 1);
    }
}
template<typename T>
void print(T* t, T size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << t[i];
    }
    cout << endl;
}
template<typename T>
void sum(T* t, T size, T suma) {

    for (int i = 0; i < size; i++)
    {
        if (t[i] % 2 == 0)
        {
            suma += t[i];
        }
    }
    cout << " suma= " << suma;
}
int main()
{
    srand((unsigned)time(NULL));
    int size;
    cout << " size="; cin >> size;
    int* t = new int[size];
    int min = -10;
    int max = 10;
    randnumber<int>(t, size, min, max);
    print<int>(t, size);
    sum<int>(t, size, 0);



    return 0;
}