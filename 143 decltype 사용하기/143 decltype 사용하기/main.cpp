#include <iostream>

using namespace std;

int main()
{
	auto data1 = 1;						//���� 1�� ���޵Ǿ����Ƿ� int��
	decltype(data1)data2 = 2;			//data1�� int������ �����Ͽ� data2�� int��

	auto data3 = 3.4;					//3.4�̹Ƿ� double��
	decltype(data2 + data3) data4 = 3;	//int���� double�� ������ �� ũ�Ƿ� double�� �ȴ�.

	cout << "Data1 : " << data1 << ", " << typeid(data1).name() << endl;
	cout << "Data2 : " << data2 << ", " << typeid(data2).name() << endl;
	cout << "Data3 : " << data3 << ", " << typeid(data3).name() << endl;
	cout << "Data4 : " << data4 << ", " << typeid(data4).name() << endl;
	system("pause");

	return 0;

}
//c++���� Ÿ���� �����ϴ� ����� �ΰ����� �ִ�.
//�ϳ��� auto, �ٸ��ϳ��� decltype�̴�.
//decltype�� ���ڷ� ���� �ڷ����� ���� �ٸ� ������ �ڷ����� �����Ѵ�.


//auto, decltype���� Ÿ���߷а� ������ �ڷ����� �����ִ� �Ϳ��� �ӵ��� �ڵ� ������ ���̰� �ִ�.
//c++ 14������ Ÿ���߷��� ���� ������ �о��� ���� ����, Ŭ���� ��� �������� auto, decltype�� ����� �� �ְ� �Ǿ���.

//�ַ� ���������� ����ϴ� GCC �����Ϸ����� decltype�� ����� typeof�� ����������, typeof�� ���� ���𿡸� ����� �� �ִ�
//�� ��������� ���� ���̰� �ִ�.
//decltype�� decltype(auto),decltype(func(int x, double y))�� �پ��ϰ� �����Ͽ� ����� �� �ִ�.
