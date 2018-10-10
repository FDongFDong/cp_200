#include <iostream>
#include <string>

using namespace std;

int GetInt()
{
	return 1;
}
double GetDouble()
{
	return 1.11;
}
string GetString()
{
	return "3";
}
auto add(int x, int y) ->int //c++11에서 적용된 새로운 함수 문법으로 auto를 반환할 떄 리턴값의 타입을 지정할 수 있다. 
{
	return x + y;
}
int main()
{
	auto data1 = GetInt();		//모두 컴파일 단계에서 자료형이 결정된다.
	auto data2 = GetDouble();
	auto data3 = GetString();
	auto data4 = add(5.1, 10.2);

	cout << "Data1 : " << data1 << ", " << typeid(data1).name() << endl; //typeid의name함수는 자료형이름을 반환
	cout << "Data2 : " << data2 << ", " << typeid(data2).name() << endl;
	cout << "Data3 : " << data3 << ", " << typeid(data3).name() << endl;
	cout << "Data4 : " << data4 << ", " << typeid(data4).name() << endl;
	system("pause");
	return 0;
}
//auto는 c++11의 표준
//컴파일러가 자동으로 타입을 유추하는 키워드

//남발시 코드의 가독성을 떨어트린다. 
