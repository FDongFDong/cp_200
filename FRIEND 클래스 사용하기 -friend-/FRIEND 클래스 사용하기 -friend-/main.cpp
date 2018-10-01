#include <iostream>
#include <string>

using namespace std;

class GoodKing;
class BadKing;

class Info
{
private:
	string achieve;
	friend class GoodKing;

public:
	Info()
	{
		
	};
};
class GoodKing : Info
{
public:
	GoodKing()
	{
		achieve = "백제 중흥 군주 근초고왕";
	}
	void Display()
	{
		cout << achieve << endl;
	}
};
class BadKing : public Info
{
public:
	BadKing()
	{
		
	};
	void Display()
	{
		//cout << achieve << endl;//에러
	}
};

int main()
{
	GoodKing king1;
	king1.Display();

	BadKing king2;
	king2.Display();

	system("pause");
	return 0;
}

//friend 키워드를 이용해 GoodKing 클래스에 접근 권한을 풀어준다. 
//이때 friend로 선언할 수 있는 클래스는 여러개가 될 수 있으며, 클래스에는 제한이 없다.
