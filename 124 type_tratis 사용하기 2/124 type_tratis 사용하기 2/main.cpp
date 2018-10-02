#include <iostream>
#include <map>

using namespace std;

struct TmpStruct
{
	int x = 0;
};

class TmpClass
{

};

int main()
{
	cout << boolalpha;
	
	cout << "== is_empty ==" << endl;
	cout << is_empty<TmpStruct>::value << endl;
	cout << is_empty<TmpClass>::value << endl;
	
	cout << "== is_array ==" << endl;
	cout << is_array<TmpStruct>::value << endl;
	cout << is_array<map<int,double>>::value << endl;
	cout << is_array<int[3]>::value << endl;

	cout << "== is_same ==" << endl;
	cout << is_same<TmpStruct, TmpClass>::value << endl;
	cout << is_same<int, signed int>::value << endl;
	cout << is_same<int, bool>::value << endl;
	cout << is_same<char, unsigned char>::value << endl;

	system("pause");
	return 0;
}
//is_empty는 내부 요소가 비어 있는지 확인한다.
//is_array는 배열 형식인지 확인한다. 
//map, vector등의 컨테이너는 템플릿 클래스의 일종이기 떄문에 배열이 아니다. 
//is_same는 두 형식을 비교해 같다면 true, 다르다면false