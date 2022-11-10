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
int Max(int* t, const int size, int i)
{
    int max = t[0];
    if (i < size - 1) {
        if (t[i] > max)
            max = t[i];
        return max;
    }
}
    int Min(int* t, const int size, int i)
    {    
        int min = t[0];
        if (i < size - 1) {
            if (t[i] < min)
                min = t[i];
        }
        return min;
    }


void print(int* t, int size, int i) {
    cout << setw(4) << t[i];
    if (i < size - 1)
        print(t, size, i + 1);
    else
        cout << endl;

}

int main()
{
    srand((unsigned)time(NULL));
    int size;
    cout << " size="; cin >> size;
    int* t = new int[size];
    int min = -10;
    int max = 10;
    randnumber(t, size, min, max,0);
    print(t, size,0);
    cout << " min= "; cout << Min(t, size,0) << endl;
    cout << " max= "; cout << Max(t, size,0) << endl;
    cout << " middle= "; cout << (Min(t, size,0) + Max(t, size,0)) / 2;
    return 0;
}