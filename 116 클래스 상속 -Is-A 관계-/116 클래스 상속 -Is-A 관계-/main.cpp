#include <iostream>

using namespace std;

class Landload
{
public:
	void IamLandload()
	{
		cout << "건물주 입니다." << endl;
	}
};
class Tenant
{
public:
	void IamTenant()
	{
		cout << "세입자 입니다." << endl;
	}
};
class Nation : public Landload, public Tenant
{
public:
	bool is_landload;

public:
	void Who()
	{
		cout << "저는 ";
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
//Has-A 관계가 한쪽의 일방적인 포함이면, Is-A 관계는 무엇은 무엇이다, 무엇은 한 종류이다라는 의미
