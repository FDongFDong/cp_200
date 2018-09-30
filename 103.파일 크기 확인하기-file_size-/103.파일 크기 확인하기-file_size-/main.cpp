#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	int size = fs::file_size("temp.txt");

	cout << "파일 크기 : " << size << "바이트" << endl;
	return 0;
}

//file_size함수의 인자는 파일의 경로
//전체 경로를 입력하지 앟ㄴ는다면 프로젝트 폴더의 파일을 열게된다.
