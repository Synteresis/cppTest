#include "std_lib_facilities.h"
#include <Windows.h>
#include "selfmath.h"

int main()
{
	vector<int> fVector = {1,2,3,4,5,6,7,8,9,10};
	for(int i = 0; i < fVector.size(); ++i)
	{
		cout << fVector[i] << endl;
	}

	vector<string> sVector = { "Bill","Nye","The","Science","Guy" };
	for (int i = 0; i < sVector.size(); ++i)
	{
		cout << sVector[i] << endl;
	}

	vector<int> tVector(3);
	for (int i = 0; i < 3; ++i)
	{
		tVector[i] = i;
		cout << tVector[i] << endl;
	}

	system("pause");
	return 0;
}