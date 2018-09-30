#include "std_lib_facilities.h"
#include <Windows.h>
#include "selfmath.h"

int main()
{
	for (int i = 0; i < 100; ++i) { // for i in the [0:100) range
		cout << i << '\t' << square(i) << '\n';
		//++i; // what's going on here? It smells like an error!
	}
	
	double x = 72362;
	double y = SqrtNumber(x);
	cout << y << endl << square(y) << endl;


	system("pause");
	return 0;
}