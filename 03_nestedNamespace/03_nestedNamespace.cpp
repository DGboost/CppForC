#include <iostream>

using namespace std;

namespace Test
{
	int nData = 100;

	namespace Dev
	{
		int nData = 200;

		namespace Win
		{
			int nData = 300;
		}
	}
}

namespace Test2::WinDev {
	int nData = 400;
}

int main()
{
	cout << Test::nData << endl;
	cout << Test::Dev::nData << endl;
	cout << Test::Dev::Win::nData << endl;
	cout << Test2::WinDev::nData << endl;

	return 0;
}