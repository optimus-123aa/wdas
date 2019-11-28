#include "windows.h"
#include <iostream>
using namespace std;

int main()
{
	int a[6];

	cout << "Block A:\n";
	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
	}
		for (int i = 1; i < 6; i += 2)
	{
		int t = a[i - 1];
		a[i - 1] = a[i];
		a[i] = t;
	}

	cout << "\n\nBlock C:\n";
	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << endl;
	}
	system("pause");
	return 0;
}


