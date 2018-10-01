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
		cout << "아단성 전투 연도 : " << ondal.year_ << endl;
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

//외부에 모든 접근을 허용하는 friend 키워드는 매우 제한적으로 사용하거나 아예 사용하지 않는 것이 좋다.
//정보은닉을 깨트린다. 