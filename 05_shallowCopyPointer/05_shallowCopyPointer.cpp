#include <iostream>
using namespace std;

int main()
{
	char* pstrData = new char[32];
	strcpy_s(pstrData, sizeof(char[32]), "Hello");

	char* pstrNew = pstrData;

	cout << pstrData << endl;
	cout << pstrNew << endl;

	delete[] pstrData;
	//cout << pstrNew << endl;

	return 0;
}

