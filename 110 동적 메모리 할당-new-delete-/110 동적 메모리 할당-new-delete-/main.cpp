#include <iostream>
using namespace std;

class Info
{
private:
	int* data;
	int* data_arr;
public:
	Info()
	{
		data = new int;
		data_arr = new int[3];
	}
	~Info()
	{
		cout << "�޸� ����;;;;" << endl;
		delete data;
		delete[] data_arr;
	}
	void Dispose()
	{
		cout << "�޸� ����;;" << endl;
		delete data;
		delete[] data_arr;
	}

};

int main()
{
	Info *info = new Info();

	info->Dispose();
	//delete info;

	return 0;
}
//������ ����ó�� ������ ������ ũ�Ⱑ �����Ǵ� ��ҵ��� �Ҵ�Ǵ� ����
//���̳ʸ��� static, ������ҵ��� �Ҵ�Ǵ� ����
//���� �����޸𸮰� �Ҵ�Ǵ� ��
