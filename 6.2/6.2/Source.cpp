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
int Max(int* t, const int size)
{
    int max = t[0];
    for (int i = 1; i < size; i++)
        if (t[i] > max)
            max = t[i];
    return max;
}
int Min(int* t, const int size)
{
    int min = t[0];
    for (int i = 1; i < size; i++)
        if (t[i] < min)
            min = t[i];
    return min;
}



void print(int* t, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << t[i];
    }
    cout << endl;

}

int main()
{
    srand((unsigned)time(NULL));
    int size;
    cout << " size=";cin >> size;
    int* t = new int[size];
    int min = -10;
    int max = 10;
    randnumber(t, size, min, max);
    print(t, size);
    cout << " min= "; cout << Min(t, size)<<endl;
    cout << " max= "; cout << Max(t, size) << endl;
    cout << " middle= "; cout << (Min(t, size) + Max(t, size)) / 2;
    return 0;
}