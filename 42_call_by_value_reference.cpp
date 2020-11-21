/*
	객체를 함수의 인수로 전달하는 방식
		- call by value					//복사해서 넘어가는 것
		- call by reference(address)	//object의 주소를 넘겨주는 것
		- call by reference variable	
*/

#include <iostream>

using namespace std;

class Car
{
private:
	int year;
public:
	Car(int _year) : year(_year){}
	void showYear() 
	{
		cout << "This car was made in " << year << endl;
	}
	void changeYear(int _y)
	{
		year = year - _y;
	}
};

void changeCarYear(Car _c)	//call by value
{
	_c.changeYear(100);
	_c.showYear();	//1900
}

void changeCarYear(Car* _c)	//call reference(address)
{
	_c->changeYear(100);
	_c->showYear();	//1900
}

void changeCarYearRef(Car& _c)	//call reference(address)
{
	_c.changeYear(100);
	_c.showYear();	//1800
}

int main()
{
	Car c(2000);
	c.showYear();	//2000

	cout << "call by value before after" << endl;
	changeCarYear(c);
	c.showYear();	//2000

	cout << "call by reference (address) before after" << endl;
	changeCarYear(&c);
	c.showYear();	//1900

	cout << "call by reference variable before after" << endl;
	changeCarYearRef(c);
	c.showYear();	//1800

	return 0;
}