#include <iostream>
#include <vector>

using namespace std;

class TmpClass
{
public:
	TmpClass()
	{
		cout << "������ ȣ��" << endl;
	}
	~TmpClass()
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}
};
int main()
{
	TmpClass * temp_class = new TmpClass();

	delete temp_class;
	temp_class = nullptr;
	system("pause");
	return 0;
}

//Ŭ���� ��ü�� �������� ���� �Ǵ� �� ������ �Ҵ�ȴ�.
//��ü�� new�λ����ϸ� delete�� �����ϰ� �����ʹ� null�� ����� ���� �����̴�.
