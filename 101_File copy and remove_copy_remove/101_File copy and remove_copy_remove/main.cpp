#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	fs::copy("연개수영 전설.txt", "(복사)연개수영 전설.txt");
	fs::remove("연개수영 전설.txt");

	return 0;
}
// 복사할 파일 이름을 첫 번쨰 인자, 복사된 파일이 갖게 될 이름을 두 번째 인자로 사용
//만약 복사된 파일의 이름이 원본과 똑같다면 예외처리가 되지 않았다는 에러가 발생한다.

//remove 함수는 삭제할 파일 이름을 인자로 사용한다. 전달받은 인자와 똑같은 경로와 이름의 파일을 삭제한다.
//다른 특정 폴더의 파일을 대상으로 한다면 전체 경로를 기입해야 한다.
//경로를 지정할 땐 슬래시 2개를 붙여서 사용