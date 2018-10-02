#include <iostream>
using namespace std;

inline int Max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << Max(i, i + 10) << endl;
	}
	system("pause");
	return 0;
	
}

//함수 호출이 빈번하다면 inline 키워드를 이용하는 것이 좋다.
//일반적으로 함수 호출은 비용(cost)이 많이 발생하여 프로그램 성능저하의 원인이 된다.

//하지만 인라인 코든ㄴ 복사하는 개념이기에 프로그램 크기가 늘어날 수있다.
//인라인된 코드는 함수가 아니라 함수 주소도 없어 참조가 필요한 경우엔 오히려 성능 저하의 요소가 되기도 한다.
