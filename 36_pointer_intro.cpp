#include <iostream>

using namespace std;

/*
	Pointer
		- pointer review : dereferencing
		- nullptr
		- nullptr vs. NULL
			NULL : 정수 0
			nullptr : pointer 0
			=> 초기화는 nullptr
*/
/*
int main()
{
	int a = 10;

	cout << "a: " << a << endl;

	int* pa = nullptr;
	pa = &a;

	cout << "pa: " << pa << endl;
	cout << "*pa: " << *pa << endl;

	return 0;
}
*/


/*
	Pointer to array
*/
int main()
{
	int* p = new int[5];

	for (int i = 0; i < 5; i++)
	{
		p[i] = i + 1;
	}

	delete[] p;

	return 0;
}