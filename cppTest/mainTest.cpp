#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name (followed by 'enter'):\n";
	string first_name; // first_name is a variable of type string
	cin >> first_name; // read characters into first_name
	cout << "Hello, " << first_name << "!\n";

	int x = 1;
	bool y = true;
	double z = 1.11111111;
	float i = 1.111f;
	char t = 't';
	string g = "g";

	system("pause");
	return 0;
}