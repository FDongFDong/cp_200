#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> data;
	data.push_back(1);

	try
	{
		if (data.empty() == true)
		{
			throw "백터가 비어 있다.";
		}
		if (data.size() < 2)
		{
			throw 99;
		}
	}
	catch (char* e)
	{
		cout << "catch(char* e)" << e << endl;
	}
	catch (int e)
	{
		cout << "catch (int e)" << e << endl;
	}
	system("pause");
	return 0;

}
//유형에 맞춰 원하는 에러 메시지를 확인 할 수 있다.
//로그 파일을 만들 때 위와 같이 작성하면 에러 발생지점을 정확히 잡아낼 수 있다.
