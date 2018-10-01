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
		achieve = "���� ���� ���� ���ʰ��";
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
		//cout << achieve << endl;//����
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

//friend Ű���带 �̿��� GoodKing Ŭ������ ���� ������ Ǯ���ش�. 
//�̶� friend�� ������ �� �ִ� Ŭ������ �������� �� �� ������, Ŭ�������� ������ ����.
