/*
	Virtual function
	 - virtual function by reference
	 - virtual destructor
	 - pure virtual function
	   ���� : �θ� Ŭ������ pure virtual function�� ������ ������ �ڽ� Ŭ������ �ݵ�� �� Ŭ������ ������ �־�� �Ѵ�.
	          -> �׷��� ������ ���� �߻�!
			  ==> �̷��� �ϸ� ���� ��������ϴ� ����� �θ�Ŭ������ pure virtual function���� ����� ������ �ڽ� Ŭ�������� �ݵ�� �� Ŭ���� �����ϰ� ��
			      �������̽��� �ϰ����� ������ �� �ְԵ�
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
	virtual void foo() = 0;	//pure virtual function : ��¥ ��ü�� ���°ž� 
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

//�Լ� �ϳ��� �ڽ� class�� �����Ϸ��� virtual function�� �ʿ�!
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
	//doSomething(new AA());	//I am AA�� ��� �� �� �ֵ��� ���ִ°� virtual function
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
		//�θ� Ŭ������ A�� �����Ͱ� AA�� ����Ű�� �ִٰ�
		//delete�Ǹ� AA�� ���� ������� A�� ������� (virtual�� ������ �ڽ� Ŭ������ delete���� ���� �� �ִ�)
	}



	return 0;
}