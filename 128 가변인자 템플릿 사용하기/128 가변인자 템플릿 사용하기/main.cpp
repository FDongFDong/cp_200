#include <iostream>
#include <string>

using namespace std;

void Type1(string msg, int no, double value)
{
	cout << msg << ", 에러 번호 " << no << ", 오류값 " << value << endl;
}
void Type2(int no, double value)
{
	cout << no << ", 오류값 " << value << endl;
}

template<typename... T>
void PrintLog(T... arg0)
{
	//추가 작업
	Type1(arg0...);
	//Type2(arg0...);
}
int main()
{
	PrintLog<string, int, double>("Warning", 100, 22.5);
	//PrintLog<int, double>(101,55.6);
	system("pause");
	return 0;
}

//typename 뒤에 붙은 ...은 인자의 개수가 정해지지 않았다는 것을 의미
//가변인자 템플릿을 사용할땐 <>괄호 안에 자료형 타입을 정의해야 한다.
