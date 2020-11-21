/*
	Constructor, ������ : class���� object�� ������ �ɶ� �ڵ����� ����Ǵ� �Լ�

	Destructor, �Ҹ���
		- ��ü�� ����� �� ����Ǵ� �Լ�
		- Ŭ���� �̸��� ~�� �ٿ��� ����
		- ��ü�� �Ҵ���� ���� �޸𸮸� �����ؾ� �� �� ���
*/

#include <iostream>

using namespace std;

class Car
{
private:
	char* ptr;
public:
	Car()
	{
		ptr = new char[3000000];
		cout << "Car constructor was called" << endl;
	};
	~Car()
	{
		cout << "Car destructor was called" << endl;
		delete[] ptr;	//ptr�� delete ���� ������ �޸� ���� ����
	};
};

int main()
{
	cout << "Start--------------------------------" << endl;
	{
		Car c;
	}	//c�� ������Ƿ� ~Car() ����
	cout << "End-----------------------------------" << endl;



	return 0;
}