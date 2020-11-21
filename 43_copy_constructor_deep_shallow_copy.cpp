/*
	Copy constructor
	- ���ο� ��ü�� ���� ��, �ٸ� ��ü�� ������ �����ؼ� ����� ��� ȣ���ϴ� ������

	- �����Ϸ��� ���� �ڵ����� ����
	  ��� member variable�� �ڵ� ����

	- ������ ���� ���� ����.
	  �����ڿ� �����ϵ�, �μ��� ��ü reference variable
	  member variable ���縦 ��� ó���� ���

	����?
		- ������ ������ �����ϴ� ��ü�� ������ �� 
		  ����Ǵ� ������ ������ ������ ����Ű�� ������ �����ϱ� ���ؼ� ���
		=> b�� a�� �����Ͽ� c �迭�� ���� ����Ű�ٰ� b�� �����Ǹ� c�� ���� ���� �Ǳ� ������ a�� ������ �� ���� �߻�
		=> b�� a�� ������ �� c �迭�� ���� �迭�� ����� b�� �Ҵ� -> ���� �ذ�! -> copy reference
	
	shallow copy : �������� �� ������ �����ϴ°�
	deep copy : ���� ������ �����ؼ� ���� ������ �ִ� ��

*/

#include <iostream>

using namespace std;

class Car
{
private:
	int year;
	char* ptr;
public:
	Car(int _year) : year(_year) 
	{
		cout << "Original constructor was called" << endl;
		ptr = new char[300000];
	}
	~Car()
	{
		delete[] ptr;
	}
	Car(Car& _c)
	{
		cout << "copy constructor was called" << endl;
		year = _c.year;
		ptr = new char[300000];
	}
	void showYear()
	{
		cout << "This car was made in " << year << endl;
	}
};


int main()
{
	Car c(2010);
	c.showYear();

	//c�� �����ؼ� ��ü d�� e�� ����� ���
	Car d = c;	//Car d; d = c; �ʹ� �ٸ���! 
	Car e(c);

	//d�� e�� constructor�� ��ġ���ʰ� �������
	//copy constructor�� ������ copy constructor�� ��ģ��.
	d.showYear(); 
	e.showYear();

	Car f(2020);
	{
		Car g = f;	//�� ��Ȳ���� copy constructor�� ������ f�� �����Ǵ� ptr�� �����ȴ�. -> ����
	}

	return 0;
}