#include <iostream>
#include <climits>

//initialization(초기화)
/*
int main()
{
	using namespace std;

	//초기화하는 다섯 가지 방법
	int a = 50;
	int b(50);
	int c = (50);
	int d{ 50 };
	int e = { 50 };

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	return 0;
}
*/


//진수별 표기법
/*
int main()
{
	// 16진수 0x10
	// 8진수 010
	// 10진수 10

	// 진수에 따른 숫자 출력
	// cout << hex, oct, dec
	// 16진수 hex / 8진수 oct / 10진수 dec

	using namespace std;

	int a = 10;
	int b = 0x10; //16진수
	int c = 010; //8진수

	cout << a << endl;
	cout << hex;		//16진수로 출력
	cout << b << endl;
	cout << oct;
	cout << c << endl;
	cout << dec;
	cout << a << " " << b << " " << c << endl;


	return 0;
}
*/

//bool data type  (true, false)
int main()
{
	// boolalpha for cout
	// noboolalpha for cout

	using namespace std;

	bool b = true; // true 대신 1 써도됨
	bool c = false; //false 대신 0 써도됨

	cout << boolalpha; // std::boolalpha (정식)
	cout << b << endl;
	cout << c << endl;

	cout << noboolalpha;
	cout << b << endl;
	cout << c << endl;
	
	return 0;
}