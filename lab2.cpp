// lab2.cpp
// ����� ����
// ����������� ������ � 2.1
// ˳����� ��������.
// ������ 15
#include <iostream>
#include <Windows.h>

using namespace std;
int main()
{
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251); 

	double b; // ������� ��������
	//double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "b = "; cin >> b;

	//z1 = sqrt(2 * b + 2 * sqrt(b * b - 4)) / (sqrt(b * b - 4) + b + 2);
	z2 = 1. / sqrt(b + 2);

	cout << endl;

	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
