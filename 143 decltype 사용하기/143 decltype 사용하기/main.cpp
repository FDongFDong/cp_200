#include <iostream>

using namespace std;

int main()
{
	auto data1 = 1;						//현재 1이 전달되었으므로 int형
	decltype(data1)data2 = 2;			//data1이 int형임을 유추하여 data2도 int형

	auto data3 = 3.4;					//3.4이므로 double형
	decltype(data2 + data3) data4 = 3;	//int보다 double가 범위가 더 크므로 double가 된다.

	cout << "Data1 : " << data1 << ", " << typeid(data1).name() << endl;
	cout << "Data2 : " << data2 << ", " << typeid(data2).name() << endl;
	cout << "Data3 : " << data3 << ", " << typeid(data3).name() << endl;
	cout << "Data4 : " << data4 << ", " << typeid(data4).name() << endl;
	system("pause");

	return 0;

}
//c++에서 타입을 유추하는 방법은 두가지가 있다.
//하나는 auto, 다른하나는 decltype이다.
//decltype은 인자로 받은 자료형에 맞춰 다른 변수의 자료형을 지정한다.


//auto, decltype같은 타입추론과 일일이 자료형을 정해주는 것에는 속도와 코드 안정성 차이가 있다.
//c++ 14에서는 타입추론의 적용 범위가 넓어져 전역 변수, 클래스 멤버 변수에도 auto, decltype를 사용할 수 있게 되었다.

//주로 리눅스에서 사용하는 GCC 컴파일러에는 decltype와 비슷한 typeof가 존재했지만, typeof는 변수 선언에만 사용할 수 있는
//등 사용방법에는 조금 차이가 있다.
//decltype는 decltype(auto),decltype(func(int x, double y))등 다양하게 응용하여 사용할 수 있다.
