#include <iostream>

using namespace std;

class Landload
{
public:
	void IamLandload()
	{
		cout << "�ǹ��� �Դϴ�." << endl;
	}
};
class Tenant
{
public:
	void IamTenant()
	{
		cout << "������ �Դϴ�." << endl;
	}
};
class Nation : public Landload, public Tenant
{
public:
	bool is_landload;

public:
	void Who()
	{
		cout << "���� ";
		if (is_landload == true)
		{
			IamLandload();
		}
		else
		{
			IamTenant();
		}
	}
};

int main()
{
	Nation nation;
	nation.is_landload = true;
	nation.Who();

	system("pause");
	return 0;
}
//Has-A ���谡 ������ �Ϲ����� �����̸�, Is-A ����� ������ �����̴�, ������ �� �����̴ٶ�� �ǹ�
