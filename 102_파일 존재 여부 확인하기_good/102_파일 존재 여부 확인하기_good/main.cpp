#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ifstream stream;
	stream.open("C:\\Users\\fdongfdong\\Desktop\\영단어 및 수동태 능동태");

	if (stream.good() == true)
	{
		cout << "파일이 존재합니다." << endl;
	}
	else
	{
		cout << "파일이 없습니다." << endl;
	}
	stream.close();
	return 0;
}
//open함수에 인자로 사용된 파일 경로가 옳다면 ifstream은 정상적으로 파일이 열렸다는 내부 상태 값을 같게 된다.
//good 함수를 호출했을 때, 파일이 정상적으로 오픈 되었다면 true
