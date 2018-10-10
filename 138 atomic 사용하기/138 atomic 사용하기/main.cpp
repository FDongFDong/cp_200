#include <iostream>
#include <atomic>

using namespace std;

int main()
{
	atomic<int> data1(10);

	int number = 20;

	bool is_exchange = data1.compare_exchange_weak(number, 30);
	//compare_exchange_weak는 값교체가 이루어지면 true, 그렇지 않으면 false를 리턴.
	//함수의 첫 번쨰 인자 number와 data1의 값이 같지 않다면 data1은 변경되지 않는다. 그리고 number는 data1의 값을 같는다.
	//즉data1 10이 number 20과 같지 않다면 data1은 10을 유지하고 number는 data1의 값 10을 갖게 된다.
	//같으면 30
	cout << boolalpha;
	cout << "data1 : " << data1 << ", number : " << number << ", " << is_exchange << endl;

	atomic<int>data2 = ATOMIC_VAR_INIT(10);

	is_exchange = atomic_compare_exchange_weak(&data2, &number, 40);

	cout << "data2 : " << data2 << ", number : " << number << ", " << is_exchange << endl;

	system("pause");
	return 0;
}