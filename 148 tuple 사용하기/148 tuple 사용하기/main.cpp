#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	tuple<int, double> data1(1, 2.1);
	tuple<double, string>data2(2.4, "���ڿ�1");

	auto data3 = tuple_cat(data1, data2); //tuple_cat�Լ��� �̿��� ���ο� Ʃ���� ���� tuple<int,double,double,string>

	cout << get<0>(data3) << ", " << get<1>(data3) << ", " << get<2>(data3) << ", " << get<3>(data3) << endl;
	system("pause");
	return 0;
}