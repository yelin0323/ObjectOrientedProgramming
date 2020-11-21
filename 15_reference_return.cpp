#include <iostream>

using namespace std;

/*
	reference for function return type
	 - 함수의 반환형으로서의 reference 사용

	int func(...);
	int& func(...);
	const int & func(...);
*/

int& func_a(int n)
{
	n = n + 10;
	return n;
}

int& func_b(int& m) //const int& func_b(int& m)으로 바꾸는 것이 바람직
{
	m = m + 10;
	return m;
}

int main()
{
	int k = 10;

	k = func_a(k);
	int& rk = func_a(k); 
	//이럴 경우 n에 참조변수 rk가 생기는데 n은 함수종료와 함께 사라짐으로 쓰레기값이 된다

	cout << "k: " << k << endl;
	cout << "rk: " << rk << endl;

	func_b(k) = 1000;
	cout << "k: " << k << endl; 
	//func_b(k)의 결과가 k의 공간(참조변수)이기 때문에 k에 1000이저장되어 1000이 출력
	//-> 이런경우를 방지하기 위해서 반환형 앞에 const를 붙인다!


	return 0;
}