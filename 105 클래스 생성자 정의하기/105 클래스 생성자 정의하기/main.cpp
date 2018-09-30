#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
private:
	string name_;
public: 
	KingInfo()
	{
		name_ = "조선 예종 이황";
	}
	string GetName() const
	{
		return name_;
	}
};

int main()
{
	KingInfo king_info;
	cout << king_info.GetName() << endl;

	system("pause");
	return 0;
}

