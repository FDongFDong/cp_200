#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>

string TmpFunc(T1 x, T2 y)
{
	conditional<is_same<T1, T2>::value, int, double>::type type1;

	return typeid(type1).name();
}

int main()
{
	string type = TmpFunc(1, 22.3);

	if (type == "double")
	{
		cout << "double 자료형입니다." << endl;
	}
	else
	{
		cout << "double 자료형이 아닙니다." << endl;
	}
	system("pause");
	return 0;
}
//conditional은 첫번째 인자에 true가 할당되면 int, false가 할당되면 double type1의 자료형이 된다.
//t1과 t2가 같은 자료형이라면 true, 그렇지 않다면 false
//개발과정에서 자료형을 특정지을 수 없을 때, 타입트레이츠의 conditional이나 템플릿을 적절히 응용하자