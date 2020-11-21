#include <iostream>

using namespace std;
/*
	getter, setter

	- private member variable => object를 생성하고 나서는 read, write가 불가능
	- read, write할 수 있는 member function 제공 필요
	- read하는 function을 getter
	- write하는 function을 setter
	- getter/setter naming: get/set+variable_name
	  ex) member variable: age, getAge(), setAge()
	- getter/setter는 보통 class내에서 정의
*/
/*
class Person
{
private:
	int age;
public:
	int getAge()
	{
		return age;
	}
	void setAge(int _age)
	{
		age = _age;
	}
};

int main()
{
	Person p;

	p.setAge(50);

	return 0;
}
*/



/*
	object as function parameter
	- class Person
	- object p of class Person
	- function: void foo(Person p_of_foo)

	- person p;
	- foo(p);
	
	- p_of_foo is copy of p
	- p_of_foo를 수정해도, p는 바뀌지 않는다.
*/
/*
class Person
{
public:
	int age;
};

void foo(Person p_of_foo)	//p_of_foo는 복사본!
{
	p_of_foo.age = p_of_foo.age * 2;

}

int main()
{
	Person p;
	p.age = 20;

	cout << "Before Age: " << p.age << endl;

	foo(p);	//call-by-value

	cout << "After Age: " << p.age << endl;

	return 0;
}
*/

/*
	Object reference as function parameter
	- class Person
	- object p of class Person
	- function: void foo(Person& p_of_foo)

	- Person p;
	- foo(p)

	- p_of_foo is another name of p
	- p_of_foo를 수정하면, p도 바뀐다.
*/
/*
class Person
{
public:
	int age;
};

void foo(Person& p_of_foo)	//p_of_foo는 복사본!
{
	p_of_foo.age = p_of_foo.age * 2;

}

int main()
{
	Person p;
	p.age = 20;

	cout << "Before Age: " << p.age << endl;

	foo(p);	//call-by-value

	cout << "After Age: " << p.age << endl;

	return 0;
}
*/

/*
	object as function return value
	- class Person
	- object p of class Person

	- function, Person bar()
	- Person p = bar()
	
	- p is a copy of a return of function bar.
*/

class Person
{
public:
	int age;
	Person() :age(0) {};
};

Person& bar()
{
	Person _p;
	return _p;
}

Person* bar2()
{
	Person* _p = new Person();
	return _p;
}

int main()
{
	Person& p = bar();
	cout << "age: " << p.age << endl; //쓰레기 값 출력 -> 함수 bar가 없어졌기 때문에

	Person* p2 = bar2();
	cout << "age: " << p2->age << endl;
	return 0;
}