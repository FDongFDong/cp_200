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

//�Լ� ȣ���� ����ϴٸ� inline Ű���带 �̿��ϴ� ���� ����.
//�Ϲ������� �Լ� ȣ���� ���(cost)�� ���� �߻��Ͽ� ���α׷� ���������� ������ �ȴ�.

//������ �ζ��� �ڵ礤 �����ϴ� �����̱⿡ ���α׷� ũ�Ⱑ �þ ���ִ�.
//�ζ��ε� �ڵ�� �Լ��� �ƴ϶� �Լ� �ּҵ� ���� ������ �ʿ��� ��쿣 ������ ���� ������ ��Ұ� �Ǳ⵵ �Ѵ�.
