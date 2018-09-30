#include "std_lib_facilities.h"
#include <Windows.h>
#include "selfmath.h"

int main()
{
	int i = 1;
	constexpr int x = 1000;
	MSG msg = { 0 };
	for (int z = 101; z != 0; ++z)
	{
		if (i = (1000 + (z - 100) - x))
		{
			RegisterHotKey(NULL, 1, MOD_NOREPEAT, VK_F9);
			cout << i << endl;
		}
		if (GetMessage(&msg, NULL, 0, 0) != 0)
		{
			UnregisterHotKey(NULL, 1);
			if (i != (1000 + (z - 100) - x))
			{
				RegisterHotKey(NULL, 2, MOD_NOREPEAT, VK_F10);
				do
				{
					cout << "Error: Value Modified. Press F10 To Unmodify." << endl;
					if (GetMessage(&msg, NULL, 0, 0) != 0)
						i = (1000 + (z - 100) - x); UnregisterHotKey(NULL, 2); break;
				} while (true);
			}
			++i; 
		}
	}

	return 0;
}