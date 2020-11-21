//Pointer this
/*
	Pointer this

	- inside class definition
	- 객체 자신을 가리키는 포인터
	- pointer this를 이용해서 class 내에서 
	  member variable (property)과 member function (method)를 
	  접근가능
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
	const(상수) and pointer

	1) const int* pa
		pa가 가리키는 위치에 있는 변수의 값을 바꿀 수 없음

	2) int* const pa
		pa에 저장된 주소 값을 바꿀 수 없음
	
	3) const int* const pa
		1,2번이 모두 적용
*/
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	const int* pa = nullptr;

	pa = &a;

	//*pa = 35;	//pa가 가리키는 값이 const기 때문에 오류

	int b = 111;
	int c = 999;

	int* const pa2 = &b;
	//pa2 = &c; //pa2가 const기 때문에 오류

	const int* const pa3 = &b;
	//*pa3 = 555;	//1번
	//pa3 = &c;		//2번 둘다 안됨

	return 0;
}