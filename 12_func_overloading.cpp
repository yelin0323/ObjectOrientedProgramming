#include <iostream>

//Function Overloading
/*
	Function Overloading
	 - over + loading
	 - 같은 함수이름 허용(c에서는 불가능)
	 - 단, 매개변수가 개수 혹은 타입에서 달라야..

	  void func_a(void)
	  void func_a(int a)
	  void func_a(float a)
	  void func_a(float a, int b)
	  void func_a(int a, float b)

	 - 주의. 함수 반환형은 상관없어..

	  int func_a(int k)
	  void func_a(int k)
	  => 이런 경우는 overloading이 안된다.
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

	cout << boolalpha; //bool형을 true, false로 출력
	cout << "james: " << findPerson("james") << endl;
	cout << "21: " << findPerson(21) << endl;
	cout << "15: " << findPerson(15) << endl;

	return 0;
}