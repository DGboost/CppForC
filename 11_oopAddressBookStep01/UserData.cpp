#include "UserData.h"
#include <cstring>

int CUserData::nUserDataCounter = 0;

CUserData::CUserData(void)
	: pNext(nullptr)
{
	memset(szName, 0, sizeof(szName));
	memset(szPhone, 0, sizeof(szPhone));

	nUserDataCounter++;
}

CUserData::~CUserData(void)
{
	nUserDataCounter--;
}