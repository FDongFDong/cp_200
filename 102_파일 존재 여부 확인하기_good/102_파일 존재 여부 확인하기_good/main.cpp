#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ifstream stream;
	stream.open("C:\\Users\\fdongfdong\\Desktop\\���ܾ� �� ������ �ɵ���");

	if (stream.good() == true)
	{
		cout << "������ �����մϴ�." << endl;
	}
	else
	{
		cout << "������ �����ϴ�." << endl;
	}
	stream.close();
	return 0;
}
//open�Լ��� ���ڷ� ���� ���� ��ΰ� �Ǵٸ� ifstream�� ���������� ������ ���ȴٴ� ���� ���� ���� ���� �ȴ�.
//good �Լ��� ȣ������ ��, ������ ���������� ���� �Ǿ��ٸ� true
