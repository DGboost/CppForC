#include <stdio.h>

typedef struct USERDATA
{
	int age;
	char name[32];
	void(*printData)(struct USERDATA* pUser);
} USERDATA;

void printData(USERDATA* pUser)
{
	printf("%d, %s\n", pUser->age, pUser->name);
}

int main()
{
	USERDATA user = { 20, "철수", printData };
	user.printData(&user);

	return 0;
}