#include <iostream>
#include <stdarg.h>

using namespace std;

int Sum(int arg, ...)
{
	va_list ap;
	va_start(ap, arg);

	int sum = 0;
	for (int i = 0; i < arg; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return sum;
}
int main()
{
	int number = Sum(5, 1, 2, 3, 4, 5);
	cout << "1에서 5까지 합 : " << number << endl;
	system("pause");
	return 0;
}

//c언어 스타일의 가변임자 함수를 사용하기 전에 3가지를 이해해야한다.
//va_start(va_list,lastfix) : 첫 번쨰 가변인수 위치를 찾아 시작 번지를 알아낸다.
//va_arg(va_list,type): va_list가 가리키는 위치의 값을 읽어내 리턴한다.
//va_end(va_list): va_list를 초기화하여 가변인자 사용이 끝났음을 알린다.

//가변 인자에서 사용할 함수들은 stdarg.h에 정의되어 있다.

//일반적으로 전달하는 인자가 첫 번째이고, 가변인자가 두번째 이다.
//첫번째 인자는 가변인자와 관련이 없으며, ...으로 표기되어 있는 부분이 실제로 가변인자를 나타낸다.

//va_list는 가변인자의 주소를 가리킨다. ap 포인터 형태이며 va_start에 인자로 전달되어야 실제 주소값을 보유하게 된다.
//첫 번째 인자로 받은 arg는  5개의 값으로 가변 인자가 총 5개라는 것을 명시적으로 알려주는 도구이다.
//
//for 문은 모든 인자를 비교할 때까지 반복한다. va_arg 함수를 이용해 순차적으로 int형 데이터를 불러오는데 위치 값은 ap의 주소를 참조한다.
//즉 첫 인자의 주소에서 마지막 인자의 주소까지 순회하는 것.
