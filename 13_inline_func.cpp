#include <iostream>

using namespace std;


/*
	함수 호출
	함수 호출에 따른 overhead
	함수 overhead를 극복하는 inline
	inline을 사용해야만 할까?
	 - inline 자체가 너무 클 때는 overhead 시간보다 오래 걸릴 수 있으므로 사용할 필요x
	 - complier가 inline을 사용할지말지 정해줌
*/
inline double calc_sum(double a, double b)
{
	return (a+b);
}

int main()
{
	cout << calc_sum(1.0, 2.0) << endl;
	cout << calc_sum(2.0, 2.0) << endl;
	cout << calc_sum(3.0, 2.0) << endl;
	//=> 이런경우에 함수를 왔다갔다 하지 않도록 해주는게 inline

	return 0;
}