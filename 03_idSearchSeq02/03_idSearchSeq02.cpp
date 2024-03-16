#include <iostream>

using namespace std;
//using namespace Test;

int g_nData = 100;

namespace Test
{
	int g_nData = 200;
}

int main()
{
	cout << g_nData << endl;
	return 0;
}