#pragma once

class CMyList;

class CUserInterface
{
public:
	CUserInterface(CMyList &rList);
	~CUserInterface(void);
	void add(void);

protected:
	CMyList	 &m_list;

public:
	void search(void);

	void remove(void);

	int printUI(void);

	int run(void);
};