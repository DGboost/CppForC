#include <iostream>
using namespace std;

class MyData
{
private:
	int data;

public:
	int getData()
	{
		return data;
	}

	void setData(int data)
	{
		this->data = data;
	}
};

int main()
{
	MyData data;
	data.setData(10);

	cout << data.getData() << endl;

	return 0;
}