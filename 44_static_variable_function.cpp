/*
	static member variable
	 - 객체와 상관없이 존재하는 variable
	 - 모든 객체가 마치 자신의 variable처럼 공유
	 - 변경 내용이 모든 객체에게 visible
	 - 초기화는 별도로
	 - 객체없이도 사용가능

	const static member variable
	 - 값 변동 불가
	 - class에서 선언할 때 초기화
	
	static member function
	 - 객체와 상관없이 존재
	 - static variable만 access 가능
*/

#include <iostream>

using namespace std;

class Car
{
public:
	static int year;
	int month;
	const static int year2 = 1000;	//선언할 때 초기화 해주어야하고 바꿀 수 없다.
	Car() {}
	static void showYear()
	{
		cout << year << endl;
		//cout << month << endl; //month가 static variable이 아니기 때문에 access 불가능
	}
	void changeYear(int _y)
	{
		year = _y;
	}
};

int Car::year = 2020; //static variable를 초기화 하는 유일한 방법

int main()
{
	Car c;
	c.showYear();	//2020
	Car d;
	d.showYear();	//2020
	cout << "without object: " << Car::year << endl;	//2020

	Car::year = 3030;	
	c.showYear();	//3030
	d.showYear();	//3030
	cout << "without object: " << Car::year << endl;	//3030

	d.changeYear(4040);
	c.showYear(); //4040;
	d.showYear(); //4040;
	cout << "without object: " << Car::year << endl;	//4040

	cout << "without object year2 : " << Car::year2 << endl;	//changeyear()사용 불가

	Car::year = 5000;
	Car::showYear(); //static function이기 떄문에 단독으로 사용가능

	return 0;
}