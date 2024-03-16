#include <iostream>
using namespace std;

int main()
{
	int a = 100, b;
	cout << "Input number: ";
	cin >> b;

	if (b > 0)
		cout << a / b << endl;

	else
		cout << "ERROR: 0으로 나눌 수 없습니다." << endl;

	return 0;
}
