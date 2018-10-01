#include <iostream>

using namespace std;

static class Calculator
{
public:
	int Plus(const int x, const int y) const
	{
		return x + y;
	}

}calc;

int main()
{
	cout << "1 + 2 = " << calc.Plus(1, 2) << endl;
	system("pause");
	return 0;
}
//굳이 저장할 필요가 없는 데이터나 단순 연산으로 결과만 얻고 싶은 기능이 있다면 static 클래스에 모아두는 것이 좋다.
//어느 클래스에서나 사용이 필요하고 단순히 연산 결과만 알고 싶다면 유용하게 사용할 수 있다.
