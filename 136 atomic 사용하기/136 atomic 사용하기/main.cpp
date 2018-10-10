#include <iostream>
#include <atomic>

using namespace std;

int main()
{
	atomic<int>data1 = 10;									//atomic�� ����ϴ� ������� ������ ����ó�� =�����ڸ� �̿��� ���� �Ҵ��� �� �ִ�.
	atomic<int>data2 = ATOMIC_VAR_INIT(20);					//�� ���� ���� �������� ���̰� ���� ��Ȯ�ϰ� �����Ϸ��� atomic���� ���ù��� ����� ���� �ִ�.
	atomic_int data3 = ATOMIC_VAR_INIT(30);					//atomic<int>�� atomic_int�� ���� �ǹ�, �ʱ�ȭ ����� �̷��� 3����

	cout << data1 << ", " << data2 << ", " << data3 << endl;

	data1.store(11);										//stroe�� =�����ڿ� ���� �ǹ� data1 = 11
	data2.store(data3.load());								//data2�� store�� ȣ���ϸ� ���ڷ� data3�� ���� ����. load�� �ش� ���� �ҷ��´ٴ� �ǹ�

	atomic_store(&data3,50);								//store�� atomic_store�� ���� �ǹ� �ٸ� atomic_store�� ù ���� ���ڷ� ���� ������ ���� �̸�, �ι�° ���ڷδ� ���� �޴´�.

	cout << data1 << ", " << data2 << ", " << data3 << endl;
	system("pause");
	return 0;
}
//��Ʈ��ũ, ��Ƽ ������ ȯ�濡�� ���α׷����� �� ��, ��������, ���ؽ�, violate�� �����ڿ��� ����ϱ� ���� ���� ����� Ȱ���� ���̴�.
//�׶� �ʿ��� Ŭ������ atomic

//atomic���� ���Ͷ� ���� Ȱ���� ����ȭ ��ü�� ����ϱ� ���� ������� �����ϸ� �� ���� ���α׷��� �� �� �ִ�.
//<atomic���� int��� �����ϴ� ���>

