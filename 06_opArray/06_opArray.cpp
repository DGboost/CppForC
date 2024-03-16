#include <iostream>

using namespace std;

class IntArray
{
public:
	IntArray(const int size) {
		pBuffer = new int[size] { 0 };
		this->size = size;
	}

	~IntArray() {
		delete [] pBuffer;
		pBuffer = nullptr;
	}

	int operator[](const int index) const {
		cout << "operator[] const" << endl;
		return pBuffer[index];
	}

	int& operator[](const int index) {
		cout << "operator[]" << endl;
		return pBuffer[index];
	}

private:
	int* pBuffer = nullptr;
	int size = 0;
};

void testFunc(const IntArray& arr)
{
	cout << "testFunc()" << endl;
	cout << arr[3] << endl;
}

int main()
{
	IntArray arr(5);

	for (int i = 0; i < 5; ++i)
		arr[i] = i * 10;

	testFunc(arr);
	return 0;
}