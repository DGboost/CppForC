#include <iostream>
using namespace std;

class CMyData
{
public:
	//가상 함수로 선언 및 정의
	virtual void PrintData() {
		cout << "CMyData: " << m_nData << endl;
	}

	void TestFunc() {
		cout << "***TestFunc()***" << endl;
		//실 형식의 함수가 호출
		PrintData();
		cout << "****************" << endl;
	}

protected:
	int m_nData = 10;
};

class CMyDataEx : public CMyData
{
public:
	//기본 클래스의 가상 함수 멤버를 재정의
	//따라서 기존 정의는 무시
	virtual void PrintData() {
		cout << "CMyDataEx: " << m_nData * 2 << endl;
	}
};

int main()
{
	CMyDataEx a;
	a.PrintData();

	CMyData& b = a;

	//참조 형식에 상관없이 실형식의 함수가 호출
	b.PrintData();
	//마지막에 재정의된 함수가 호출
	a.TestFunc();

	return 0;
}
