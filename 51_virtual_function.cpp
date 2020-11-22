/*
	Virtual function
	 - virtual function by reference
	 - virtual destructor
	 - pure virtual function
	   장점 : 부모 클래스가 pure virtual function을 가지고 있으면 자식 클래스는 반드시 그 클래스를 가지고 있어야 한다.
	          -> 그렇지 않으면 오류 발생!
			  ==> 이렇게 하면 내가 만들고자하는 기능을 부모클래스에 pure virtual function으로 만들어 놓으면 자식 클래스에는 반드시 그 클스를 구현하게 됨
			      인터페이스의 일관성을 유지할 수 있게됨
*/

#include <iostream>

using namespace std;

class A
{
public:
	virtual ~A()
	{
		cout << "Destructor A" << endl;
	}
	virtual void iam()
	{
		cout << "I am A" << endl;
	}
	virtual void foo() = 0;	//pure virtual function : 진짜 실체가 없는거야 
};

class AA : public A
{
public :
	~AA()
	{
		cout << "Destructor AA" << endl;
	}
	void iam()
	{
		cout << "I am AA" << endl;
	}
};

class AB : public A
{
public:
	~AB()
	{
		cout << "Destructor AB" << endl;
	}
	void iam()
	{
		cout << "I am AB" << endl;
	}
};

//함수 하나로 자식 class도 접근하려면 virtual function이 필요!
void doSomething(A* pa)
{
	pa->iam();	//I am A
}

void doSomething(A& pa)
{
	pa.iam();	//I am A
}



int main()
{
	//A* pa = new AA();
	//pa->iam();	//I am A

	//pa = new AB();
	//pa->iam(); //I am A

	//doSomething(new A());
	//doSomething(new AA());	//I am AA를 출력 할 수 있도록 해주는게 virtual function
	//doSomething(new AB());

	//--------------------------------------------------
	//virtual function by reference
	/*
		A a;
		AA aa;
		AB ab;
		A& ra = aa;

		ra.iam();	//I am AA

		doSomething(a);
		doSomething(aa);
		doSomething(ab);
	*/


	//--------------------------------------------------
	// virtual destructor
	{
		A* pa = new AA(); 
		delete pa;
		//부모 클래스인 A의 포인터가 AA를 가리키고 있다가
		//delete되면 AA가 먼저 사라지고 A가 사라진다 (virtual이 없으면 자식 클래스가 delete되지 않을 수 있다)
	}



	return 0;
}