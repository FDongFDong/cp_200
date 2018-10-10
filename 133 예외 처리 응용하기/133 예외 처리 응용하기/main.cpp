#include <iostream>
#include <vector>
#include <string>

using namespace std;

class InputError : public runtime_error
{
public:
	InputError(int idx, string msg) : runtime_error("")
	{
		cout << idx << "�� �ε����� �߸��� �Է°� : " << msg << endl;
	}
};

int main()
{
	vector<int>data;
	data.push_back(1);

	int idx = 10;
	int value = 20;

	try
	{
		if (idx >= data.size())
		{
			throw InputError(idx, to_string(value));
		}
		data.at(idx) = 99;
	}
	catch (InputError e)
	{
		cout << e.what();
	}
	system("pause");
	return 0;
}
//runtime_error�� ��ӹ޾ƾ� try catch���� ����� �� ������, runtime_error�� �޽����� ����ϴ� ��ҷθ� �����ص� �ȴ�.
//�� Ŭ������ �� ���� ���ڸ� ������, runtime_error�� string���·� �ʱ�ȭ�Ѵ�. 
//what�Լ��� ����� �� �ִ� �� InputError Ŭ������ Runtime_error�� ��� �޾ұ� �����̴�.
