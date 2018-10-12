#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	tuple<int, string> data1(1, "def");
	tuple<int, string>data2(1, "abc");

	if (data1 > data2)						//튜플을 비교할 떄 기본 연산자를 사용할 수 있다.
	{										//두번째 요소가 알파벳 순서상 def가 더 크기 때문에 data1이 더 크다.
		cout << "data1 > data2" << endl;
	}
	else
		cout << "data1 < data2" << endl;

	tuple<double, string>data3(1.0, "def");		//다른 형태의 튜플을 비교하면 에러 발생한다. 
	tuple<double, string, int>data4(2.0, "abc", 3);
/*
	if (data3 > data4)
		cout << "data3 > data4" << endl;
	else
		cout << "data3<data4" << endl;*/
	system("pause");
	return 0;
}