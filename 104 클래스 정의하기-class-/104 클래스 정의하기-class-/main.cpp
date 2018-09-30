#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
private:
	string name_;
public:
	void SetName(string name)
	{
		name_ = name;
	}

	string GetName() const
	{
		return name_;
	}
};

int main()
{
	KingInfo king_info;
	king_info.SetName("조선 세조 이유");

	cout << king_info.GetName() << endl;
	system("pause");
	return 0;
}