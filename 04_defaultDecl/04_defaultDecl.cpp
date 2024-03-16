#include <iostream>

using namespace std;

class Test
{
public:
	Test();
	//Test() = default;
	//Test() = delete;
	int data = 5;
};

Test::Test() {}

int main()
{
	Test a;
	cout << a.data << endl;

	return 0;
}