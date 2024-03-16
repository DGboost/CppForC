#include <iostream>
using namespace std;

// 초기 제작자의 코드
class CMyObject
{
public:
	CMyObject() { }
	virtual ~CMyObject() { }

	// 모든 파생 클래스는 이 메서드를 가졌다고 가정할 수 있다.
	virtual int GetDeviceID() = 0;

protected:
	int m_nDeviceID;
};

void printId(CMyObject* pObj)
{
	cout << "Device ID: " << pObj->GetDeviceID() << endl;
}

// 후기 제작자의 코드
class CMyTV : public CMyObject
{
public:
	CMyTV(int nID) { m_nDeviceID = nID; }
	virtual int GetDeviceID()
	{
		cout << "CMyTV::GetDeviceID()" << endl;
		return m_nDeviceID;
	}
};

class CMyPhone : public CMyObject
{
public:
	CMyPhone(int nID) { m_nDeviceID = nID; }
	virtual int GetDeviceID()
	{
		cout << "CMyPhone::GetDeviceID()" << endl;
		return m_nDeviceID;
	}
};

int main()
{
	CMyTV a(5);
	CMyPhone b(10);

	// 실제 객체가 무엇이든 알아서 자신의 ID를 출력한다.
	::printId(&a);
	::printId(&b);

	return 0;
}
