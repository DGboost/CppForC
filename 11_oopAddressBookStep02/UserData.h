#pragma once
#include "MyNode.h"

// CMyNode 클래스의 파생 클래스로 변경
class CUserData : public CMyNode
{
public:
	CUserData(void);
	CUserData(const char* pszName, const char* pszPhone);
	~CUserData(void);

	const char* getName(void) const { return szName; }
	const char*	getPhone(void) const { return szPhone; }
	static int getUserDataCounter(void) { return nUserDataCounter; }

protected:
	char szName[32];
	char szPhone[32];

	// pNext 멤버가 사라졌다.
	static int nUserDataCounter;

public:
	// 순수 가상 함수들 정의
	virtual const char* getKey(void);
	virtual void printNode(void);
};