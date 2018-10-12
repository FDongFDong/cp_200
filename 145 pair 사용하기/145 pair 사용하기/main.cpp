#include <iostream>
#include <string>

using namespace std;

int main()
{
	pair<string, int> data("백제 근초고왕", 13);//pair는 딱 두개의 자료형만 담을 수 있다.

	cout << data.first << " " << data.second << "대왕" << endl;
	system("pause");
	return 0;
}
//두개의 자료형을 하나의 컨테이너에서 처리할 수 있도록 돕는 것이 pair
//pair은 std에 정의되어 있어 별로도 include할 필요가 없다.
//2차원 배열, X Y좌표 등 한쌍으로 이루어진 데이터를 저장하는 용도로 사용할 수 있다.

