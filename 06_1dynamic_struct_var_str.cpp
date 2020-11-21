#include <iostream>

using namespace std;

struct things
{
	char name[20];
	double weight;
	double price;
};

//���� ����ü ������ ����
/*
		c������ ����ü ����� ����
		- struct Ű���带 ����ü �̸� �տ� �� �ٿ���
		- �������� ����ü ���� ������ ���ؼ��� malloc ���, free ����

		c++���� ����ü ����� ���
		- struct Ű���� ���� ����ü �̸������ε� ��� ����
		- ���� ����ü�� array�� ����, new�� delete
	*/

int main()
{
	things* pt = new things;

	cout << "Enter name: ";
	cin.get(pt->name,20);

	cout << "Enter weight: ";
	cin >> pt->weight;

	cout << "Enter price: ";
	cin >> (*pt).price;

	cout << pt->name << " " << (*pt).weight << " " << pt->price << endl;

	delete pt;

	return 0;
}



