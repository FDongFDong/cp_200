#include <iostream>
#include <string>

using namespace std;

void Type1(string msg, int no, double value)
{
	cout << msg << ", ���� ��ȣ " << no << ", ������ " << value << endl;
}
void Type2(int no, double value)
{
	cout << no << ", ������ " << value << endl;
}

template<typename... T>
void PrintLog(T... arg0)
{
	//�߰� �۾�
	Type1(arg0...);
	//Type2(arg0...);
}
int main()
{
	PrintLog<string, int, double>("Warning", 100, 22.5);
	//PrintLog<int, double>(101,55.6);
	system("pause");
	return 0;
}

//typename �ڿ� ���� ...�� ������ ������ �������� �ʾҴٴ� ���� �ǹ�
//�������� ���ø��� ����Ҷ� <>��ȣ �ȿ� �ڷ��� Ÿ���� �����ؾ� �Ѵ�.
