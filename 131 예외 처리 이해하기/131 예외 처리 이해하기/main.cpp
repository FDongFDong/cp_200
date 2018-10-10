#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data;
	int number = 0;

	try
	{
		number = data.at(10);
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}
	system("pause");
	return 0;
}
//what함수는 오류메시지를 의미.
//유효하지 않은 인덱스에 접근 했기 떄문에 오류 메시지가 출력된다.
