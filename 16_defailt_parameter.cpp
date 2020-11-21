#include <iostream>

using namespace std;

/*
	default parameter of function

	- 함수 파라미터에 기본값을 지정.
	- 인수가 없는 경우, 기본값으로 호출

	void func(int a, int b);	// 호출할 때, 반드시 a와 b에 해당하는 인수지정
	void func(int a = 5, int b = 6);	//a와 b를 지정 안하고 호출해도, 5와 6을 이용
	void func(int a, int b = 6);	//인수 1개는 필수
*/

void func_a(int a, int b, int c)
{
	cout << a << ":" << b << ":" << c << endl;
}

void func_b(int a = 4, int b = 5, int c = 6)
{
	cout << a << ":" << b << ":" << c << endl;
}

//void func_c(int a = 7, int b, int c = 8)	//얘는 안됨, default는 붙어있어야됨
void func_c(int a, int b = 7, int c = 8)
{
	cout << a << ":" << b << ":" << c << endl;
}
int main()
{
	func_a(1, 2, 3);
	func_b();
	func_c(1);

	return 0;
}