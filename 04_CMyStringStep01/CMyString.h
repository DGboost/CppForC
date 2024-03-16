#pragma once

class CMyString
{
public:
	CMyString();
	~CMyString();

	char* getData() {
		return m_pszData;
	}

	void setData(const char* pParam);

private:
	char* m_pszData = nullptr;
};




