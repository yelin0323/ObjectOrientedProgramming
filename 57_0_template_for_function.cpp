/*
	Function template

	여러 가지 type을 동시에 처리 가능한 함수...

	c++ : function overloading > template
*/

#include <iostream>

using namespace std;

template<typename T>
T get_max(T a, T b)
{
	return (a >= b) ? a : b;
}

template<>
char get_max(char a, char b)
{
	return (a >= b) ? b : a;
}

//template이 2개 이상일 때
template<typename T1, typename T2>
T2 do_something(T1 a, T2 b)
{
	T1 temp_a = a * (T1)10;
	T2 temp_b = b * (T2)11;

	cout << "temp_a : " << temp_a << endl;
	cout << "temp_b : " << temp_b << endl;

	return temp_b;
}

int main()
{
	cout << "bigger one is : " << get_max(5, 4) << endl;
	cout << "bigger one is : " << get_max(5.3, 4.6) << endl;
	cout << "bigger one is : " << get_max('a', 'b') << endl;

	double k = do_something(5, 6.5);
	cout << "after return : " << k << endl;

	return 0;
}