#include <iostream>
#include <vector>

using namespace std;

class TmpClass
{
public:
	TmpClass()
	{
		cout << "생성자 호출" << endl;
	}
	~TmpClass()
	{
		cout << "소멸자 호출" << endl;
	}
};
int main()
{
	TmpClass * temp_class = new TmpClass();

	delete temp_class;
	temp_class = nullptr;
	system("pause");
	return 0;
}

//클래스 객체나 변수등은 스택 또는 힙 영영에 할당된다.
//객체는 new로생성하면 delete로 삭제하고 포인터는 null로 만드는 것이 공식이다.
