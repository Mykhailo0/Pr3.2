// Lab_03_2.cpp
// < ������ ������� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 31
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

	// ����� 1: ������������ � ���������� ����
	if (x < 1 && c != 0)
		F = (a*(pow(x,2))+(b/c));
	if (x > 3 && c == 0)
		F = x-a/pow((x-c),2);
	if (!(x < 0 && c != 0) && !(x > 0 && c == 0))
		F = pow((x),2)/pow((c),2);
	cout << endl;
	cout << "1) F = " << F << endl;
	// ����� 2: ������������ � ������ ����
	if (x < 1 && c != 0)
		F = (a * (pow(x, 2)) + (b / c));
	else
		if (x > 3 && c == 0)
			F = x - a / pow((x - c), 2);
		else
			F = pow((x), 2) / pow((c), 2);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
