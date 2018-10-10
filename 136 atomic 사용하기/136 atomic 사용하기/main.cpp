#include <iostream>
#include <atomic>

using namespace std;

int main()
{
	atomic<int>data1 = 10;									//atomic을 사용하는 방법으로 정수형 변수처럼 =연산자를 이용해 값을 할당할 수 있다.
	atomic<int>data2 = ATOMIC_VAR_INIT(20);					//위 라인 보다 직관성을 높이고 보다 명확하게 선언하려면 atomic관련 지시문을 사용할 수도 있다.
	atomic_int data3 = ATOMIC_VAR_INIT(30);					//atomic<int>와 atomic_int는 같은 의미, 초기화 방식은 이렇게 3가지

	cout << data1 << ", " << data2 << ", " << data3 << endl;

	data1.store(11);										//stroe는 =연산자와 같은 의미 data1 = 11
	data2.store(data3.load());								//data2의 store를 호출하며 인자로 data3의 값을 전달. load는 해당 값을 불러온다는 의미

	atomic_store(&data3,50);								//store와 atomic_store는 같은 의미 다만 atomic_store는 첫 번쨰 인자로 값을 저장할 변수 이름, 두번째 인자로는 값을 받는다.

	cout << data1 << ", " << data2 << ", " << data3 << endl;
	system("pause");
	return 0;
}
//네트워크, 멀티 스레딩 환경에서 프로그래밍을 할 때, 세마포어, 뮤텍스, violate등 공유자원을 사용하기 위한 여러 기법을 활용할 것이다.
//그때 필요한 클래스인 atomic

//atomic으로 인터락 등을 활용해 동기화 객체를 사용하기 위한 기법들을 생략하면 더 쉽게 프로그래밍 할 수 있다.
//<atomic으로 int산술 연산하는 방법>

