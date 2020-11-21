#include <iostream>

using namespace std;


/*
	Reference variable (��������)

	1)����
	int a;
	int &ra = a; //������ ��
	-> �̷��� �����ϸ� ra�ε� a�� ���� ��Ҹ� access �� �� �ִ�.

	2) �� ����ϴ°�?
	 - �Լ� ȣ��� ����� ū ������ ���縦 ���ϱ� ����
	 - �������� ������ ���ϱ� ����
*/

//1)����
/*
int main()
{
	int a = 55;
	int& ra = a;

	cout << "a: " << a << endl;		//55
	cout << "ra: " << ra << endl;	//55

	ra = 66;
	cout << "a: " << a << endl;		//66
	cout << "ra: " << ra << endl;	//66

	int& rra = a;
	rra = 77;
	cout << "a: " << a << endl;		//77
	cout << "ra: " << ra << endl;	//77
	cout << "rra: " << rra << endl;	//77

	int& ka = rra;
	rra = 88;
	cout << "a: " << a << endl;		//88
	cout << "ra: " << ra << endl;	//88
	cout << "rra: " << rra << endl;	//88
	cout << "ka: " << ka << endl;	//88


	int k = 50;
	ra = k;	//ra�� ������ k�� ���� �����ϴ� �� - int& ra = k�� k�� ra��� �̸��� �ϳ� �� ���̴� �� : �� ���� �ٸ� ���̴�.
	cout << "a: " << a << endl;		//50
	cout << "ra: " << ra << endl;	//50
	cout << "k: " << k << endl;		//50

	ra = 100;
	cout << "a: " << a << endl;		//100
	cout << "ra: " << ra << endl;	//100
	cout << "k: " << k << endl;		//50

	return 0;
}
*/


//2) �� ����ϴ°�?

void func_a(int n)
{
	n = 100;
	return;
}

void func_b(int* n)
{
	*n = 20;
	return;
}

void func_r(int& n)
{
	n = 100;
	return;
}

int main()
{
	int n(10);
	func_a(n);

	cout << "n: " << n << endl; //n: 10

	func_b(&n);	//�����ͷ� �ѱ� ��� �Ǽ��� ���ؼ� �ٸ� �޸� ������ �ǵ帱 �� �ִ�.
	cout << "n: " << n << endl; //n: 20

	func_r(n); //���縦 ���ص� �ǰ� �����͸� ������� �ʾƵ� �ȴ�!
	cout << "n: " << n << endl; //n: 100 

	return 0;
}