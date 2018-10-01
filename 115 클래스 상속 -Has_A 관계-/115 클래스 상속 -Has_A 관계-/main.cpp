#include <iostream>

using namespace std;

class Rent
{
public:
	void Payment()
	{
		cout << "임대료를 받습니다." << endl;
	}
};
class Landload : public Rent
{
public:
	void GetMoney()
	{
		cout << "건물주라서 ";
		Payment();
	}
};
int main()
{
	Landload master;
	master.GetMoney();

	return 0;
}

//Has-A 관계는 포함, 집합 관계
//부모 클래스가 자식 클래스를 포함, 소유하는 관계
