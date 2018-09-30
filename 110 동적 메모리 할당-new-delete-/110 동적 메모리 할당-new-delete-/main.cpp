#include <iostream>
using namespace std;

class Info
{
private:
	int* data;
	int* data_arr;
public:
	Info()
	{
		data = new int;
		data_arr = new int[3];
	}
	~Info()
	{
		cout << "메모리 해제;;;;" << endl;
		delete data;
		delete[] data_arr;
	}
	void Dispose()
	{
		cout << "메모리 해제;;" << endl;
		delete data;
		delete[] data_arr;
	}

};

int main()
{
	Info *info = new Info();

	info->Dispose();
	//delete info;

	return 0;
}
//스택은 변수처럼 컴파일 시점에 크기가 결정되는 요소들이 할당되는 영역
//바이너리는 static, 전역요소들이 할당되는 영역
//힙은 동적메모리가 할당되는 곳
