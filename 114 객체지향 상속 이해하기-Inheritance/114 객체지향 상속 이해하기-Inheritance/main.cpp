#include <iostream>
#include <string>

using namespace std;

class Info
{
public:
	Info()
	{

	};
	string name_;
	int year_;
};
class GoodKing : public Info
{
private:
	string country_;
public:
	GoodKing(const string country) : country_(country)
	{

	};
	void Display()
	{
		cout << country_ << " " << name_ << " ���� ���� BC : " << year_ << endl;
	}
};
class BadKing : public Info
{
private: 
	string country_;
public:
	BadKing(const string country) : country_(country) {};
	void Display()
	{
		cout << country_ << " " << name_ << " ���� ���� : " << year_ << endl;
	}
};
int main()
{
	GoodKing king1("������");
	king1.name_ = "�ܱ��հ�";
	king1.year_ = 2333;

	BadKing king2("���");
	king2.name_ = "������";
	king2.year_ = 1330;

	king1.Display();
	king2.Display();

	system("pause");
	return 0;
}
