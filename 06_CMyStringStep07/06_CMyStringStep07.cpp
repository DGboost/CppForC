#include <iostream>
#include "CMyString.h"

using namespace std;

int main()
{
	CMyString hello("Hello ");
	hello += "World";

	cout << hello << endl;
	cout << hello[6] << endl;

	cout << hello[-1] << endl;
	cout << hello[20] << endl;

	return 0;
}
