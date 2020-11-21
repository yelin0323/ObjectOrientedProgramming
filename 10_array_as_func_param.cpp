#include <iostream>

using namespace std;

//Function
/*
	1. Function parameter vs Function argument

	int func_a(int k) <------ parameter : ������ ��
	{
		...
	}

	func_a(50); <------ argument : ȣ���� ��

	2. Array as function parameter and argument
	 - 1���� �迭�� ���� ���ϴ� �Լ� ����

	3. pointer�� ��Ÿ����� �����ִ� const //�����͸� �б⸸ �ٷ��µ� �� ���� ���� ����!
	 - int a = 10;

	 �� ���� �������� �����ΰ�?
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
		// _array[4] = 60; -> �б⸸ ���ϴ� ��� const�� ����ؼ� �̷� ��츦 ���� �� �ִ�.
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