#include <iostream>

//Function Overloading
/*
	Function Overloading
	 - over + loading
	 - ���� �Լ��̸� ���(c������ �Ұ���)
	 - ��, �Ű������� ���� Ȥ�� Ÿ�Կ��� �޶��..

	  void func_a(void)
	  void func_a(int a)
	  void func_a(float a)
	  void func_a(float a, int b)
	  void func_a(int a, float b)

	 - ����. �Լ� ��ȯ���� �������..

	  int func_a(int k)
	  void func_a(int k)
	  => �̷� ���� overloading�� �ȵȴ�.
*/

using namespace std;

struct Person {
	string name;
	unsigned int age;
};

Person* pdata = 0;

bool findPerson(string name)
{
	for (int i = 0; i < 3; i++)
	{
		if (pdata[i].name == name)
		{
			return true;
		}
	}
	return false;
}

bool findPerson(unsigned int age)
{
	for (int i = 0; i < 3; i++)
	{
		if (pdata[i].age == age)
		{
			return true;
		}
	}
	return false;
}


int main()
{
	pdata = new Person[3];

	pdata[0] = { "james", 40 };
	pdata[1] = { "jane", 20 };
	pdata[2] = { "tom", 15 };

	cout << boolalpha; //bool���� true, false�� ���
	cout << "james: " << findPerson("james") << endl;
	cout << "21: " << findPerson(21) << endl;
	cout << "15: " << findPerson(15) << endl;

	return 0;
}