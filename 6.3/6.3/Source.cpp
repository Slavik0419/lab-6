#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;



void randnumber(int* t, int size, const int min, const int max)
{
    for (int i = 0; i < size; i++) {
        t[i] = min + rand() % (max - min + 1);
    }
}

void print(int* t, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << t[i];
    }
    cout << endl;
}
void sum(int* t, int size, int suma) {

    for (int i = 0; i < size; i++)
    {
        if ( t[i] % 2 == 0)
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
    randnumber(t, size, min, max);
    print(t, size);
    sum(t, size, 0);
    
    
    
    return 0;
}