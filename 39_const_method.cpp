/*
	const and class

	- member function 뒤에 const를 붙이면,
	  그 함수 내에서는 member variable의 값을 수정할 수 없다.
	  -> 외부에서 변경할 수 없도록 지정

	- Class 객체를 가리키는 pointer가 const이면,
	  const member function만 호출 할 수 있다.

	왜 사용해? 개발자들의 실수를 막기 위해서!

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

	void showName() const //method를 const로 지정
	{
		//this->name = this->name + " Nice guy";	//method가 const기 때문에 오류
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
	//pa->showChangedName();	//showChangedNaame은 const method가 아니기 때문에 호출 불가
	delete pa;

	return 0;
}