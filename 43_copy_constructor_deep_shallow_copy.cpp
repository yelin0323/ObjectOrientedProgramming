/*
	Copy constructor
	- 새로운 객체를 만들 때, 다른 객체의 내용을 복사해서 만드는 경우 호출하는 생성자

	- 컴파일러에 의해 자동으로 생성
	  모든 member variable을 자동 복사

	- 별도로 만들 수도 있음.
	  생성자와 동일하되, 인수는 객체 reference variable
	  member variable 복사를 모두 처리해 줘야

	언제?
		- 포인터 변수를 포함하는 객체를 복사할 때 
		  복사되는 변수의 포인터 변수가 가리키는 변수를 복사하기 위해서 사용
		=> b가 a를 복사하여 c 배열을 같이 가리키다가 b가 해제되면 c도 같이 해제 되기 때문에 a를 조작할 때 문제 발생
		=> b가 a를 복사할 때 c 배열과 같은 배열을 만들어 b에 할당 -> 문제 해결! -> copy reference
	
	shallow copy : 복사했을 때 변수를 공유하는것
	deep copy : 같은 변수를 복사해서 각자 가지고 있는 것

*/

#include <iostream>

using namespace std;

class Car
{
private:
	int year;
	char* ptr;
public:
	Car(int _year) : year(_year) 
	{
		cout << "Original constructor was called" << endl;
		ptr = new char[300000];
	}
	~Car()
	{
		delete[] ptr;
	}
	Car(Car& _c)
	{
		cout << "copy constructor was called" << endl;
		year = _c.year;
		ptr = new char[300000];
	}
	void showYear()
	{
		cout << "This car was made in " << year << endl;
	}
};


int main()
{
	Car c(2010);
	c.showYear();

	//c를 복사해서 객체 d와 e를 만드는 방법
	Car d = c;	//Car d; d = c; 와는 다르다! 
	Car e(c);

	//d와 e는 constructor를 거치지않고 만들어짐
	//copy constructor가 있으면 copy constructor를 거친다.
	d.showYear(); 
	e.showYear();

	Car f(2020);
	{
		Car g = f;	//이 상황에서 copy constructor가 없으면 f와 공유되는 ptr이 삭제된다. -> 오류
	}

	return 0;
}