#include <cstdio>

class UserData
{
public:
	int age;
	char name[32];

	void print()
	{
		printf("%d, %s\n", age, name);
	}
};

int main()
{
	UserData user = { 10, "Hoon" };
	user.print();

	return 0;
}