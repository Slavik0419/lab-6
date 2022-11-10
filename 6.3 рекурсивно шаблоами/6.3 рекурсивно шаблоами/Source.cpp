#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;



void randnumber(int* t, int size, const int min, const int max, int i)
{

    t[i] = min + rand() % (max - min + 1);
    if (i < size - 1)
        randnumber(t, size, min, max, i + 1);
}

void print(int* t, int size, int i) {
    cout << setw(4) << t[i];
    if (i < size - 1)
        print(t, size, i + 1);
    else
        cout << endl;

}
void sum(int* t, int size, int suma, int i) {

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
    randnumber(t, size, min, max, 0);
    print(t, size, 0);
    sum(t, size, 0, 0);



    return 0;
}