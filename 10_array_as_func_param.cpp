#include <iostream>

using namespace std;

//Function
/*
	1. Function parameter vs Function argument

	int func_a(int k) <------ parameter : 정의할 때
	{
		...
	}

	func_a(50); <------ argument : 호출할 때

	2. Array as function parameter and argument
	 - 1차원 배열의 합을 구하는 함수 구현

	3. pointer의 경거망동을 막아주는 const //데이터를 읽기만 바랬는데 막 쓰는 것을 막자!
	 - int a = 10;

	 둘 간의 차이점은 무엇인가?
	 - int *pa = &a;
	 - const int *pa = &a;
*/

// 1) int sum_array_elements(int _array[], int _size)
// 2)int sum_array_elements(int* _array, int _size)
int sum_array_elements(const int* _array, int _size)
{
	int sum(0);

	for (int i = 0; i < _size; i++)
	{
		sum += _array[i];
		// _array[4] = 60; -> 읽기만 원하는 경우 const를 사용해서 이런 경우를 막을 수 있다.
	}

	return sum;
}

int main()
{
	int array_a[5] = { 1,2,3,4,5 };

	int sum = sum_array_elements(array_a, 5);

	cout << "Array sum: " << sum << endl;

	return 0;
}