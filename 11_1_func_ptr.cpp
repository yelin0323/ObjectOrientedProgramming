#include <iostream>

using namespace std;

//Function Pointer
/*
	- 함수의 주소
	  함수의 이름 그 자체

	- 함수주소를 담는 포인터
	 ex) int (*pf) (int) //return 값  (*포인터 이름)  parameter
*/

void func_A(void)
{
	cout << "This is func_A" << endl;
}

void func_B(void)
{
	cout << "This is func_B" << endl;
}

int func_C(int k)
{
	cout << "This is func_C" << endl;
	return k + 1;
}

int main()
{
	void (*pf)(void); //function pointer pf를 선언

	pf = func_A;
	pf();

	pf = func_B;
	pf();

	int (*pf_c)(int);
	pf_c = func_C;
	cout << "After call: " << pf_c(5) << endl;

	return 0;
}