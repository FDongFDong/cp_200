#include <iostream>
#include <string>

using namespace std;

class Ondal
{
private:
	int year_;
public:
	friend void GetYear(Ondal ondal)
	{
		cout << "�ƴܼ� ���� ���� : " << ondal.year_ << endl;
	}
	void SetYear(int year)
	{
		year_ = year;
	}
};

int main()
{
	Ondal ondal;
	ondal.SetYear(590);

	GetYear(ondal);
	return 0;
}

//�ܺο� ��� ������ ����ϴ� friend Ű����� �ſ� ���������� ����ϰų� �ƿ� ������� �ʴ� ���� ����.
//���������� ��Ʈ����. 