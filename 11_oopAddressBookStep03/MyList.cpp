#include "MyList.h"
#include "UserData.h"
#include <cstdio>
#include <cstring>
#include <conio.h>

CMyList::CMyList(CMyNode *pHead)
{
	m_pHead = pHead;
}

CMyList::~CMyList(void)
{
	releaseList();
}

int CMyList::addNewNode(CMyNode *pNewNode)
{
	if (findNode(pNewNode->getKey()) != nullptr)
	{
		delete pNewNode;
		return 0;
	}

	if(onAddNewNode(pNewNode))
	{
		pNewNode->pNext = m_pHead->pNext;
		m_pHead->pNext = pNewNode;

		return 1;
	}

	return -1;
}

/*
void CMyList::printAll(void)
{
	CMyNode *pTmp = m_pHead->pNext;

	while (pTmp != NULL)
	{
		pTmp->printNode();
		pTmp = pTmp->pNext;
	}

	printf("CUserData Counter : %d\n",
		CUserData::GetUserDataCounter() - 1);

	_getch();
}
*/

CMyNode* CMyList::findNode(const char* pszKey)
{
	CMyNode *pTmp = m_pHead->pNext;

	while (pTmp != nullptr)
	{
		if (strcmp(pTmp->getKey(), pszKey) == 0)
			return pTmp;

		pTmp = pTmp->pNext;
	}

	return NULL;
}

int CMyList::removeNode(const char* pszKey)
{
	CMyNode *pPrevNode = m_pHead;
	CMyNode *pDelete = NULL;

	while (pPrevNode->pNext != NULL)
	{
		pDelete = pPrevNode->pNext;

		if (strcmp(pDelete->getKey(), pszKey) == 0)
		{
			pPrevNode->pNext = pDelete->pNext;
			delete pDelete;

			return 1;
		}

		pPrevNode = pPrevNode->pNext;
	}

	return 0;
}

void CMyList::releaseList(void)
{
	CMyNode *pTmp = m_pHead;
	CMyNode *pDelete = NULL;

	while (pTmp != NULL)
	{
		pDelete = pTmp;
		pTmp = pTmp->pNext;

		delete pDelete;
	}

	m_pHead = NULL;
}

CMyIterator CMyList::makeIterator(void)
{
	CMyIterator it;
	it.m_pCurrent = m_pHead->pNext;
	it.m_pHead = m_pHead->pNext;

	return it;
}

int CMyList::onAddNewNode(CMyNode* pNewNode)
{
	return 1;
}