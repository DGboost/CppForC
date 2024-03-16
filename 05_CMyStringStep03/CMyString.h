#pragma once

class CMyString
{
public:
	CMyString();
	CMyString(const CMyString& rhs);
	~CMyString();

	const char* getData() const {
		return m_pszData;
	}

	size_t getLength() const {
		return this->length;
	}

	void operator=(const CMyString& rhs) {
		this->setData(rhs.getData());
	}

	void setData(const char* pParam);

private:
	char* m_pszData = nullptr;
	size_t length = 0;
};




