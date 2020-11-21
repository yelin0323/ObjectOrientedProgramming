#include <iostream>

using namespace std;

//Function Pointer
/*
	- �Լ��� �ּ�
	  �Լ��� �̸� �� ��ü

	- �Լ��ּҸ� ��� ������
	 ex) int (*pf) (int) //return ��  (*������ �̸�)  parameter
*/

void func_A(void)
{
	cout << "This is func_A" << endl;
}

void func_B(void)
{
	cout << "This is func_B" << endl;
}

int func_C(int k)
{
	cout << "This is func_C" << endl;
	return k + 1;
}

int main()
{
	void (*pf)(void); //function pointer pf�� ����

	pf = func_A;
	pf();

	pf = func_B;
	pf();

	int (*pf_c)(int);
	pf_c = func_C;
	cout << "After call: " << pf_c(5) << endl;

	return 0;
}