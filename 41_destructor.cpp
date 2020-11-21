/*
	Constructor, 생성자 : class에서 object가 생성이 될때 자동으로 실행되는 함수

	Destructor, 소멸자
		- 객체가 사라질 떄 수행되는 함수
		- 클래스 이름에 ~를 붙여서 선언
		- 객체가 할당받은 동적 메모리를 해제해야 할 때 사용
*/

#include <iostream>

using namespace std;

class Car
{
private:
	char* ptr;
public:
	Car()
	{
		ptr = new char[3000000];
		cout << "Car constructor was called" << endl;
	};
	~Car()
	{
		cout << "Car destructor was called" << endl;
		delete[] ptr;	//ptr를 delete 하지 않으면 메모리 누수 생겨
	};
};

int main()
{
	cout << "Start--------------------------------" << endl;
	{
		Car c;
	}	//c가 사라지므로 ~Car() 실행
	cout << "End-----------------------------------" << endl;



	return 0;
}