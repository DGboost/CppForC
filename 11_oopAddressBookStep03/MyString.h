#pragma once

class CMyString
{
public:
	CMyString(void);
	explicit CMyString(const char* pszParam);
	CMyString(const CMyString & rhs);
	virtual ~CMyString(void);

	int setString(const char * pszParam);
	const char* getString(void) const { return m_pszData; }
	int getLength(void) const
	{
		if (m_pszData == nullptr && m_nLength)
			m_nLength = 0;
		return m_nLength;
	}
private:
	// 동적 할당된 메모리의 주소가 저장될 멤버
	char *m_pszData;
	mutable int m_nLength;

public:
	void release(void);
	CMyString& operator =(const CMyString &strParam);
	CMyString& operator =(const char * pszParam);
	CMyString operator +(const CMyString & rhs);
	int append(const char* pszParam);
	CMyString operator +(const char* pszParam);
	friend CMyString operator + (const char *, const CMyString &);

	operator const char * () const
	{
		return m_pszData;
	}

	int testFunc(const char* pszParam);
	virtual int onSetString(const char*);
};