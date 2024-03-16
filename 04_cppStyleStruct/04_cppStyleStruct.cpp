#include <cstdio>

struct UserData
{
	int age;
	char name[32];

	void print()
	{
		printf("%d, %s\n", age, name);
	}
};

int main()
{
	UserData user = { 10, "철수" };
	user.print();

	return 0;
}
