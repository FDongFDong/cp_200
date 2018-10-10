#include <iostream>
#include <vector>
#include <string>

using namespace std;

class InputError : public runtime_error
{
public:
	InputError(int idx, string msg) : runtime_error("")
	{
		cout << idx << "번 인덱스에 잘못된 입력값 : " << msg << endl;
	}
};

int main()
{
	vector<int>data;
	data.push_back(1);

	int idx = 10;
	int value = 20;

	try
	{
		if (idx >= data.size())
		{
			throw InputError(idx, to_string(value));
		}
		data.at(idx) = 99;
	}
	catch (InputError e)
	{
		cout << e.what();
	}
	system("pause");
	return 0;
}
//runtime_error를 상속받아야 try catch에서 사용할 수 있으며, runtime_error는 메시지를 출력하는 요소로만 이해해도 된다.
//이 클래스는 두 개의 인자를 받으며, runtime_error를 string형태로 초기화한다. 
//what함수를 사용할 수 있는 건 InputError 클래스가 Runtime_error를 상속 받았기 때문이다.
