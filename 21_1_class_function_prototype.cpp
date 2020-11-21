#include <iostream>

using namespace std;


/*
	class function prototype
	- function declaration과 definition을 구별
	- class에는 declaration(prototype)만 지정
	- class 외부에 function definition

	- why:
	   + 인터페이스와 구현을 분리하여 코드 생산성이 높아진다.
	   ==> 함수의 파라미터와 반환값만 알고 사용할 수 있게된다. (인터페이스가 간편해진다))
*/

//나중에 이 부분은 .h (header file)이 되고, 프로그램을 구현할 때 이 부분만 보고 함수를 사용
class PrintData
{
public:
	void myprint(int i); // function declaration, 함수 선언, ---> function prototype ==>  interface
};

//나중에 이 부분은 .cpp (c++ file)이 되고, 코드를 구현
//PrintData class 내의 함수 myprint 정의
void PrintData::myprint(int i) 	// function definition, 함수 정의 ---> function implementation (함수 구현)
{
	cout << "int: " << i << endl;
}

int main()
{
	PrintData* ppd = new PrintData();
	ppd->myprint(4);
	delete ppd;

	return 0;
}
