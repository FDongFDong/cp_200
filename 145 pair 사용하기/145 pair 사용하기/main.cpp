#include <iostream>
#include <string>

using namespace std;

int main()
{
	pair<string, int> data("���� ���ʰ��", 13);//pair�� �� �ΰ��� �ڷ����� ���� �� �ִ�.

	cout << data.first << " " << data.second << "���" << endl;
	system("pause");
	return 0;
}
//�ΰ��� �ڷ����� �ϳ��� �����̳ʿ��� ó���� �� �ֵ��� ���� ���� pair
//pair�� std�� ���ǵǾ� �־� ���ε� include�� �ʿ䰡 ����.
//2���� �迭, X Y��ǥ �� �ѽ����� �̷���� �����͸� �����ϴ� �뵵�� ����� �� �ִ�.

