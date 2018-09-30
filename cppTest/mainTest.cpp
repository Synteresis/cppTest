#include "std_lib_facilities.h"
#include <Windows.h>
#include "selfmath.h"

int main()
{
	vector<int> x = { 1,2,3,4,5 };
	for (int i = 1; i < 25000; ++i) 
	{
		cout << x[i - 1] << endl;
		x.push_back(x[i - 1] + 5);
	}

	for (int i = 0; i < 25000; ++i)
	{
		cout << "Random Vector Number " << i << ": " << x[i] << endl;
		Sleep(100);
	}

	system("pause");
	return 0;
}