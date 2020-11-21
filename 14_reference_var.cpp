#include <iostream>

using namespace std;


/*
	Reference variable (참조변수)

	1)정의
	int a;
	int &ra = a; //선언할 때
	-> 이렇게 선언하면 ra로도 a의 저장 장소를 access 할 수 있다.

	2) 왜 사용하는가?
	 - 함수 호출시 사이즈가 큰 변수의 복사를 피하기 위해
	 - 포인터의 위험을 피하기 위해
*/

//1)정의
/*
int main()
{
	int a = 55;
	int& ra = a;

	cout << "a: " << a << endl;		//55
	cout << "ra: " << ra << endl;	//55

	ra = 66;
	cout << "a: " << a << endl;		//66
	cout << "ra: " << ra << endl;	//66

	int& rra = a;
	rra = 77;
	cout << "a: " << a << endl;		//77
	cout << "ra: " << ra << endl;	//77
	cout << "rra: " << rra << endl;	//77

	int& ka = rra;
	rra = 88;
	cout << "a: " << a << endl;		//88
	cout << "ra: " << ra << endl;	//88
	cout << "rra: " << rra << endl;	//88
	cout << "ka: " << ka << endl;	//88


	int k = 50;
	ra = k;	//ra의 공간에 k의 값을 저장하는 것 - int& ra = k는 k에 ra라는 이름을 하나 더 붙이는 것 : 두 개는 다른 것이다.
	cout << "a: " << a << endl;		//50
	cout << "ra: " << ra << endl;	//50
	cout << "k: " << k << endl;		//50

	ra = 100;
	cout << "a: " << a << endl;		//100
	cout << "ra: " << ra << endl;	//100
	cout << "k: " << k << endl;		//50

	return 0;
}
*/


//2) 왜 사용하는가?

void func_a(int n)
{
	n = 100;
	return;
}

void func_b(int* n)
{
	*n = 20;
	return;
}

void func_r(int& n)
{
	n = 100;
	return;
}

int main()
{
	int n(10);
	func_a(n);

	cout << "n: " << n << endl; //n: 10

	func_b(&n);	//포인터로 넘길 경우 실수에 의해서 다른 메모리 공간을 건드릴 수 있다.
	cout << "n: " << n << endl; //n: 20

	func_r(n); //복사를 안해도 되고 포인터를 사용하지 않아도 된다!
	cout << "n: " << n << endl; //n: 100 

	return 0;
}