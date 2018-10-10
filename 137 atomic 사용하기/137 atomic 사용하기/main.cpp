#include <iostream>
#include <atomic>

using namespace std;

int main()
{
	atomic<int> data1(10);
	atomic<int> data2 = ATOMIC_VAR_INIT(20);				
	atomic<int> data3 = data1.exchange(data2.load());		//data1�� exchange�Լ��� ȣ���ϸ� ���ڷ� data2�� ���� �����Ѵ�. data1�� data2�� ������ ��ü�ǰ�
															//data3���� ���ϰ�(data1�� ������) 10�� �Ҵ��.
															//exchange �Լ��� ���ϰ��� ����Ǳ� ������ 
	cout << data1 << ", " << data2 << ", " << data3 << endl;

	atomic_exchange(&data1, data3);						//data1.exchange(data3.load())
	atomic_exchange(&data2, data1.load());				
	atomic_exchange(&data3, 55);

	cout << data1 << ", " << data2 << ", " << data3 << endl;

	return 0;
}