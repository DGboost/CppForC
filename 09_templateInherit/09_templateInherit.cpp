#include <iostream>
using namespace std;

template<typename T>
class CMyData
{
public:
	CMyData() = default;
	virtual ~CMyData() = default;

protected:
	T m_Data;
};

template<typename T>
class CMyDataEx : public CMyData<T>
{
public:
	CMyDataEx() = default;
	virtual ~CMyDataEx() = default;

	T getData() const { return this->m_Data; }
	void setData(T param) { this->m_Data = param; }
};

int main()
{
	CMyDataEx<int> a;
	a.setData(5);
	cout << a.getData() << endl;

	return 0;
}
