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
		cout << "double �ڷ����Դϴ�." << endl;
	}
	else
	{
		cout << "double �ڷ����� �ƴմϴ�." << endl;
	}
	system("pause");
	return 0;
}
//conditional�� ù��° ���ڿ� true�� �Ҵ�Ǹ� int, false�� �Ҵ�Ǹ� double type1�� �ڷ����� �ȴ�.
//t1�� t2�� ���� �ڷ����̶�� true, �׷��� �ʴٸ� false
//���߰������� �ڷ����� Ư������ �� ���� ��, Ÿ��Ʈ�������� conditional�̳� ���ø��� ������ ��������