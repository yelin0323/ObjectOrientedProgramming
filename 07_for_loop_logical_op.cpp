#include <iostream>

using namespace std;

//�ݺ���, for loop
/*
		Range based for loop

		int a[5] = {1, 2, 3, 4, 5};

		for(int k : a)
		{
			....
		}

		keyword auto
		for(auto k : a) //auto��� �ϸ� �������� �˾Ƽ� ����
		{
			....
		}

		���� ���α׷� �迭���� �ִ밪�� ã�Ƽ� ���
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


//���� �迭������ range based for loop
// ������ �ȵȴ� (ũ�⸦ �𸣱� ������!)
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


//��������, logical operator
/*
	&& : AND
	|| : OR
	! : NOT

	c++������ and, or, not�� ���� -> ����! �ҹ��ڸ� ����
								  -> Ű���� �߿��� &,|,!�� �������� �ʴ� ���� ���
*/
int main()
{
	int a(10), b(20); //c++ ǥ����
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
