#include <iostream>
#include <atomic>

using namespace std;

int main()
{
	atomic<int> data1(10);
	atomic<int> data2 = ATOMIC_VAR_INIT(20);				
	atomic<int> data3 = data1.exchange(data2.load());		//data1의 exchange함수를 호출하며 인자로 data2의 값을 전달한다. data1은 data2의 값으로 교체되고
															//data3에는 리턴값(data1의 원래값) 10이 할당됨.
															//exchange 함수의 리턴값은 변경되기 이전값 
	cout << data1 << ", " << data2 << ", " << data3 << endl;

	atomic_exchange(&data1, data3);						//data1.exchange(data3.load())
	atomic_exchange(&data2, data1.load());				
	atomic_exchange(&data3, 55);

	cout << data1 << ", " << data2 << ", " << data3 << endl;

	return 0;
}