#include <iostream>

using namespace std;

/*
	default parameter of function

	- �Լ� �Ķ���Ϳ� �⺻���� ����.
	- �μ��� ���� ���, �⺻������ ȣ��

	void func(int a, int b);	// ȣ���� ��, �ݵ�� a�� b�� �ش��ϴ� �μ�����
	void func(int a = 5, int b = 6);	//a�� b�� ���� ���ϰ� ȣ���ص�, 5�� 6�� �̿�
	void func(int a, int b = 6);	//�μ� 1���� �ʼ�
*/

void func_a(int a, int b, int c)
{
	cout << a << ":" << b << ":" << c << endl;
}

void func_b(int a = 4, int b = 5, int c = 6)
{
	cout << a << ":" << b << ":" << c << endl;
}

//void func_c(int a = 7, int b, int c = 8)	//��� �ȵ�, default�� �پ��־�ߵ�
void func_c(int a, int b = 7, int c = 8)
{
	cout << a << ":" << b << ":" << c << endl;
}
int main()
{
	func_a(1, 2, 3);
	func_b();
	func_c(1);

	return 0;
}