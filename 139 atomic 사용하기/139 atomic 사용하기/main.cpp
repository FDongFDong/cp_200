#include <iostream>
#include <atomic>

using namespace std;

int main()
{
	atomic<int>data1 = 1;
	data1++;
	data1 += 1;
	data1.fetch_add(1);
	atomic_fetch_add(&data1, 1);

	atomic<int>data2 = 100;
	data2--;
	data2 -= 1;
	data2.fetch_sub(1);
	atomic_fetch_sub(&data2, 1);

	cout << "data1 : " << data1 << ", data2 : " << data2 << endl;

	system("pause");
	return 0;
}

//c++11 ǥ�� ���̺귯������  promise, future, async Ŭ������ �߰��Ǿ���.
//���� ������ �����ϰ� ���α׷��� ���伺�� ����� �� �ִ� ������ �񵿱� ���α׷��� �Լ��̴�.
//C#�� Async, Await�� ����� Ŭ����

//�׵��� ��Ƽ������ ȯ�濡�� ����ȭ�� ���� ���� ����� ���� �Ǿ�����, �ڵ� �������� ���� ������ �߻��� ���
//������ �ľ��ϴµ� �ð��� �����ɸ��� ������ �־���.

//��� ���α׷��� ������ �ۼ��� �������� �߻��ϴ� ����ð� ���� ���� � �־����� �񵿱� �ڵ带 �����ϸ�
//�̷� �������� ���� �����ο��� ���� �ִ�.

//promise�� �ڹٽ�ũ��Ʈ�� promise�� ������ ������ �Լ� ȣ�� �� ������ �ٷ� ��ٸ��� �ʰ�, ������ �� ���� ������
//�Ǹ� �˾Ƽ� ����� ��ȯ�Ѵ�.

