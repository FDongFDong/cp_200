#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
private:
	string value_;
	int number_;
public:
	KingInfo() {};

	void SetValue(const string value)
	{
		if (value.empty() == false)
		{
			value_ = value;
		}
		else
		{
			cout << "잘못된 인자!!" << endl;
		}
	}

	string GetValue() const
	{
		if (value_.empty() == false)
		{
			return value_;
		}
		else
		{
			return "설정을 먼저 해주세요";
		}
	}
};
int main()
{
	KingInfo king_info1;
	king_info1.SetValue("조선 중종 이역");

	KingInfo king_info2;
	king_info2.SetValue("조선 인종 이호");

	//king_info1.value_ = "조선 명종 이환";  //에러

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;
	system("pause");
	return 0;
}
//정보은닉은 외부에서 클래스 내부를 바라보는데 제한을 두어 임의로 클래스 내부 데이터를 교체하지 못하도록 
//막는 것이 목적

//또한 사용자가 굳이 알지 않아도 되는 사항은 숨겨 필요한 정보로만 프로그래밍 가능하도록 돕는 것.
