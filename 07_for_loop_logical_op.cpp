#include <iostream>

using namespace std;

//반복문, for loop
/*
		Range based for loop

		int a[5] = {1, 2, 3, 4, 5};

		for(int k : a)
		{
			....
		}

		keyword auto
		for(auto k : a) //auto라고 하면 변수형을 알아서 맞춤
		{
			....
		}

		응용 프로그램 배열에서 최대값을 찾아서 출력
	*/
/*
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };

	for (auto k : a)
	{
		cout << k << endl;
	}

	return 0;
}
*/


//동적 배열에서의 range based for loop
// 동작이 안된다 (크기를 모르기 때문에!)
/*
int main()
{
	int* pa = new int[5];

	for (int k : pa)
	{
		cout << k << endl;
	}
}
*/


//논리연산자, logical operator
/*
	&& : AND
	|| : OR
	! : NOT

	c++에서는 and, or, not을 지원 -> 주의! 소문자만 가능
								  -> 키보드 중에서 &,|,!를 지원하지 않는 것을 고려
*/
int main()
{
	int a(10), b(20); //c++ 표현법
	//int a = 10, b = 20;

	if ((a < b) and (b % 2 == 0))
	{
		cout << "1" << endl;
	}
	else if ((a < b) or (b % 2 == 0))
	{
		cout << "2" << endl;
	}
	if (not (a<b))
	{
		cout << "3" << endl;
	}
	return 0;
}
