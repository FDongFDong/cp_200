#include <iostream>
#include <vector>

namespace MyArea
{
	int Plus(int x, int y)
	{
		return x + y;
	}
}
using namespace std;
using namespace MyArea;
using MyVector = vector<int>;

int main()
{
	MyVector data;			//vector<int> data
	data.push_back(1);
	data.push_back(2);
	
	cout << "Data : " << data.at(0) << ", " << data.at(1) << endl;
	cout << "Plus : " << Plus(2, 4) << endl;
	system("pause");
	return 0;
}

//typedef보단 using 키워드를 사용하는 것이 더 직관적이며 코드 가독성이 효율적이다.
