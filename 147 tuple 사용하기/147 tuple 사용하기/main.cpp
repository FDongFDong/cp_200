#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	typedef tuple<string, int, double>Data;

	Data data1("문자열", 10, 1.2);

	string my_str = "";
	int my_int = 0;

	tie(my_str, my_int, ignore) = data1;		//tie함수를 선언하며 my_str,my_int,ignore을 인자로 전달
												//ignore는 값을 가져오지 않을 때 입력

	cout << my_str << ", " << my_int << endl;
	system("pause");
	return 0;
}