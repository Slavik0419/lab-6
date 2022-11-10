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
 void func(int* t, int size, int k, int sum) {
    
    for (int i = 0; i < size; i++) 
    {
        if (t[i] < 0 && t[i] % 3 != 0)
        {
            k++;
            sum += t[i];
            t[i] = 0;
        }
    }
    cout <<"count= "<< k << endl;
    cout << "sum= " << sum<<endl;
}

int main()
{

    srand((unsigned)time(NULL));

    const int size = 25;
    int t[size];
    int min = -11;
    int max = 13;
    randnumber(t, size, min, max);
    print(t, size);
    func(t, size, 0, 0);
    print(t, size);
    return 0;
}


