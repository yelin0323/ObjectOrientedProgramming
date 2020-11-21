/*
	const and class

	- member function �ڿ� const�� ���̸�,
	  �� �Լ� �������� member variable�� ���� ������ �� ����.
	  -> �ܺο��� ������ �� ������ ����

	- Class ��ü�� ����Ű�� pointer�� const�̸�,
	  const member function�� ȣ�� �� �� �ִ�.

	�� �����? �����ڵ��� �Ǽ��� ���� ���ؼ�!

*/

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

	void showName() const //method�� const�� ����
	{
		//this->name = this->name + " Nice guy";	//method�� const�� ������ ����
		cout << "My name is " << this->name << endl;
	}

	void showChangedName()
	{
		this->name = this->name + " Nice guy";
		cout << "My name is " << this->name << endl;
	}
};

int main()
{
	const Person* pa = new Person("Tom");
	pa->showName();
	//pa->showChangedName();	//showChangedNaame�� const method�� �ƴϱ� ������ ȣ�� �Ұ�
	delete pa;

	return 0;
}