#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;

int main()
{
	int size = fs::file_size("temp.txt");

	cout << "���� ũ�� : " << size << "����Ʈ" << endl;
	return 0;
}

//file_size�Լ��� ���ڴ� ������ ���
//��ü ��θ� �Է����� �ۤ��´ٸ� ������Ʈ ������ ������ ���Եȴ�.
