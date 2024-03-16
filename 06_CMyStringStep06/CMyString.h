#pragma once

class CMyString
{
public:
	CMyString();
	explicit CMyString(const char* param);
	CMyString(const CMyString& rhs);
	CMyString(CMyString&& rhs) noexcept;
	~CMyString();

	const char* getData() const {
		return m_pszData;
	}

	operator const char* () const {
		return m_pszData;
	}

	size_t getLength() const {
		return this->length;
	}

	void operator=(const CMyString& rhs) {
		this->setData(rhs.getData());
	}

	void operator=(CMyString&& rhs) noexcept;

	void setData(const char* pParam);

	CMyString operator+(const CMyString& rhs);

private:
	char* m_pszData = nullptr;
	size_t length = 0;
public:
	size_t append(const char* pParam);
};

CMyString operator+(const char* pLeft, const CMyString& rhs);


