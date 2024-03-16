#pragma once
#include "MyNode.h"

// 노드 클래스에 대한 알림 선언
class CMyNode;

class CMyList
{
public:
	CMyList(CMyNode *pHead);
	~CMyList(void);

protected:
	void releaseList(void);
	CMyNode *m_pHead;

public:
	CMyNode* findNode(const char* pszKey);
	int addNewNode(CMyNode *pNewNode);
	void printAll(void);
	int removeNode(const char* pszKey);
};