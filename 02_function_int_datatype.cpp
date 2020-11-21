#include <iostream>
#include <cmath>
#include <climits>

//함수사용
/*
int main()
{
	using namespace std;

	cout << "제곱근 구하고자 하는 숫자를 입력하세요 : ";

	double n;

	cin >> n;

	double nsqrt = sqrt((double)n);

	cout << n << "의 제곱근은 " << nsqrt << endl;

	return 0;
}
*/

//함수선언
/*
using namespace std; //전역변수로 만들어서 모든 함수에서 사용할 수 있다.

int add_two_numbers(int _a, int _b);

int main()
{
	cout << "첫 번째 숫자를 입력하세요 : ";
	int a, b;
	cin >> a;
	cout << "두 번째 숫자를 입력하세요 : ";
	cin >> b;

	int res = add_two_numbers(a, b);

	cout << a << "와 " << b << "를 합한 값은" << res << endl;

	return 0;
}

int add_two_numbers(int _a, int _b)
{
	
	cout << "This is function" << endl;
	return (_a + _b);
}
*/

//정수형 변수형
int main()
{
	/*
	데이터 type
	- 정수 : short - 2byte
		 int   - 4byte
		 long  - 4byte
		 long long - 8byte
	*/
	
	using namespace std;

	short s_var;
	int i_var;
	long l_var;
	long long ll_var;

	cout << "short size : " << sizeof(short) << endl;
	cout << "int size : " << sizeof(int) << endl;
	cout << "long size : " << sizeof(long) << endl;
	cout << "longlong size : " << sizeof(long long) << endl;
	cout << endl;

	cout << "short size : " << sizeof s_var << endl;
	cout << "int size : " << sizeof i_var << endl;
	cout << "long size : " << sizeof l_var << endl;
	cout << "longlong size : " << sizeof ll_var << endl;
	cout << endl;


	cout << "short max : " << SHRT_MAX << endl; //SHRT_MAT를 사용하려면 #include <limits>를 선언해야함
	cout << "short min : " << SHRT_MIN << endl;
	cout << "int max : " << INT_MAX << endl;
	cout << "int min : " << INT_MIN << endl;
	cout << "long max : " << LONG_MAX << endl;
	cout << "long min : " << LONG_MIN << endl;
	cout << "long long max : " << LLONG_MAX << endl;
	cout << "long long min : " << LLONG_MIN << endl;
}




