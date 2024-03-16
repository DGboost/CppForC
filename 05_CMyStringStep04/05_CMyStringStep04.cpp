#include <iostream>
#include "CMyString.h"

using namespace std;

//void printHello(const char* param)
//{
//	cout << param << endl;
//}

void printHello(const CMyString& param)
{
	cout << param << endl;
}

int main()
{
	printHello(CMyString("Hello"));
	return 0;
}
