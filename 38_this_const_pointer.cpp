//Pointer this
/*
	Pointer this

	- inside class definition
	- ��ü �ڽ��� ����Ű�� ������
	- pointer this�� �̿��ؼ� class ������ 
	  member variable (property)�� member function (method)�� 
	  ���ٰ���
*/
/*
#include <iostream>

using namespace std;

class Person
{
private:
	string name;
public:
	Person(string _name)
	{
		this->name = _name;
	}

	void showName()
	{
		cout << "My name is " << this->name << endl;
	}
};

int main()
{
	Person* pa = new Person("Tom");
	pa->showName();
	delete pa;

	return 0;
}
*/

//const and pointer
/*
	const(���) and pointer

	1) const int* pa
		pa�� ����Ű�� ��ġ�� �ִ� ������ ���� �ٲ� �� ����

	2) int* const pa
		pa�� ����� �ּ� ���� �ٲ� �� ����
	
	3) const int* const pa
		1,2���� ��� ����
*/
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	const int* pa = nullptr;

	pa = &a;

	//*pa = 35;	//pa�� ����Ű�� ���� const�� ������ ����

	int b = 111;
	int c = 999;

	int* const pa2 = &b;
	//pa2 = &c; //pa2�� const�� ������ ����

	const int* const pa3 = &b;
	//*pa3 = 555;	//1��
	//pa3 = &c;		//2�� �Ѵ� �ȵ�

	return 0;
}