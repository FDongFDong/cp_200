#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	typedef tuple<string, int, double> Data;	//typedef을 이용해서 tuple을 정의
												//Data tuple은 3개의 자료형을 저장할 수 있다.

	Data data1("문자열", 10, 1.2);				//초기화하는 방법 1
	auto data2 = make_tuple("문자열", 10, 1.2);	//초기화하는 방법 2

	cout << get<0>(data1) << ", " << get<1>(data1) << ", " << get<2>(data1) << endl;	//튜플에 담겨진 데이터는 
																						//get을 이용해 가져올 수 있다.
																						//get 뒤에는<>을 이용해 인덱스 번호를 넣고 ()안에는 실체 튜플 객체의 이름을 기입
	system("pause");
	return 0;
}
//tuple은 많은 자료형을 한 번에 다룰 수 있어 전체 소스 코드의 양이 줄어드는 효과가 있다.

//단순히 자료를 저장하거나 자료구조를 이용할때, 다양한 자료형과 객체들을 한꺼번에 다룰 수 있어 유용하게 활용할 수 있다.
