/*
	static member variable
	 - ��ü�� ������� �����ϴ� variable
	 - ��� ��ü�� ��ġ �ڽ��� variableó�� ����
	 - ���� ������ ��� ��ü���� visible
	 - �ʱ�ȭ�� ������
	 - ��ü���̵� ��밡��

	const static member variable
	 - �� ���� �Ұ�
	 - class���� ������ �� �ʱ�ȭ
	
	static member function
	 - ��ü�� ������� ����
	 - static variable�� access ����
*/

#include <iostream>

using namespace std;

class Car
{
public:
	static int year;
	int month;
	const static int year2 = 1000;	//������ �� �ʱ�ȭ ���־���ϰ� �ٲ� �� ����.
	Car() {}
	static void showYear()
	{
		cout << year << endl;
		//cout << month << endl; //month�� static variable�� �ƴϱ� ������ access �Ұ���
	}
	void changeYear(int _y)
	{
		year = _y;
	}
};

int Car::year = 2020; //static variable�� �ʱ�ȭ �ϴ� ������ ���

int main()
{
	Car c;
	c.showYear();	//2020
	Car d;
	d.showYear();	//2020
	cout << "without object: " << Car::year << endl;	//2020

	Car::year = 3030;	
	c.showYear();	//3030
	d.showYear();	//3030
	cout << "without object: " << Car::year << endl;	//3030

	d.changeYear(4040);
	c.showYear(); //4040;
	d.showYear(); //4040;
	cout << "without object: " << Car::year << endl;	//4040

	cout << "without object year2 : " << Car::year2 << endl;	//changeyear()��� �Ұ�

	Car::year = 5000;
	Car::showYear(); //static function�̱� ������ �ܵ����� ��밡��

	return 0;
}