#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	typedef tuple<string, int, double> Data;	//typedef�� �̿��ؼ� tuple�� ����
												//Data tuple�� 3���� �ڷ����� ������ �� �ִ�.

	Data data1("���ڿ�", 10, 1.2);				//�ʱ�ȭ�ϴ� ��� 1
	auto data2 = make_tuple("���ڿ�", 10, 1.2);	//�ʱ�ȭ�ϴ� ��� 2

	cout << get<0>(data1) << ", " << get<1>(data1) << ", " << get<2>(data1) << endl;	//Ʃ�ÿ� ����� �����ʹ� 
																						//get�� �̿��� ������ �� �ִ�.
																						//get �ڿ���<>�� �̿��� �ε��� ��ȣ�� �ְ� ()�ȿ��� ��ü Ʃ�� ��ü�� �̸��� ����
	system("pause");
	return 0;
}
//tuple�� ���� �ڷ����� �� ���� �ٷ� �� �־� ��ü �ҽ� �ڵ��� ���� �پ��� ȿ���� �ִ�.

//�ܼ��� �ڷḦ �����ϰų� �ڷᱸ���� �̿��Ҷ�, �پ��� �ڷ����� ��ü���� �Ѳ����� �ٷ� �� �־� �����ϰ� Ȱ���� �� �ִ�.
