#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void randnumber(int* t, const int size, const int min, const int max, int i)
{
	t[i] = min + rand() % (max - min + 1);
	if (i < size - 1)
		randnumber(t, size, min, max, i + 1);
}
void Print(int* t, const int size, int i)
{
	cout << setw(4) << t[i];
	if (i < size - 1)
		Print(t, size, i + 1);
	else
		cout << endl;
}
void func(int* t, int size,int i, int k, int sum) {

	
		
	if (i < size - 1) {
		if (t[i] < 0 && t[i] % 3 != 0)
		{
			k++;
			sum += t[i];
			t[i] = 0;
		}
		func(t, size, i + 1, k, sum);
	}
	else
	{
		cout << "count= " << k << endl;
		cout << "sum= " << sum << endl;
	}

	}

int main()
{
	srand((unsigned)time(NULL)); 
	const int size = 25;
	int t[size];
	int min = -11;
	int max = 13;
	randnumber(t, size, min, max, 0);
	Print(t, size, 0);
	func(t, size, 0, 0, 0);
	Print(t, size, 0);
	return 0;
}