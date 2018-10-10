#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void Pause(int sec)
{
	this_thread::sleep_for(chrono::seconds(sec));
};

int main()
{
	thread sleep1(Pause, 3);
	thread sleep2(Pause, 4);
	thread sleep3(Pause, 5);

	sleep1.join();
	cout << "3초 대기" << endl;

	sleep2.join();
	cout << "4초 대기" << endl;

	sleep3.join();
	cout << "5초 대기" << endl;

	return 0;
}
//스레드는 한 프로세스에서 실행되는 단위를 의미
//프로세스 내부적으로 여러 스레드들은 한정된 시스템 자원을 공유 또는 독점한다. 
//스레드를 제어하는 주체는 OS 스케줄러로 동작 방식은 CPU 사양에 따라 다르다.
//스레드는 프로세스가 더 많고 복잡한 작업을 위해 탄생한 실행 단위이기도 하다.

//chrono는 c++ 개발을 돕는 라이브러리로 boost에 속해 있던 것
//c++ 표준을 새로 제정하면서 크로노를 포함했으며, 비주얼 스튜디오는 2012부터 해당 라이브러리를 제공
//생산성 향상에 많은 도움이 된다.

//정수형 변수를 인자로 받는 함수를 선언한다. 그리고 현재 스레드를 몇 초간 멈추도록 this_thread::sleep_for함수를 이용한다.
//chrono::secon(sec)는 2s로도 변경하여 사용할 수 있다.

//스레드 3개를 선언하며 동작할 함수로 Pause를 지정.
//Pause의 인자로 각각 3,4,5를 전달한다. 이떄 사용하는 함수 인자는 가변이라 호출할 함수의 인자 개수에 맞춰 넘길 수 있다.

//스레드를 시작하기 위해 join함수를 호출 