/*
	Multiple inheritance

	- �θ� 2�� �̻��� ���
	-> �θ� ���� �̸��� ������ ������ �� ��� ��ȣ���� �� �ֱ� ������
	  �����ϸ� ������� �ʴ´�! (java������ ����� �� ����.)
*/

#include <iostream>

using namespace std;

class PA 
{
public:
	int x;
	PA(int _x) : x(_x)
	{
		cout << "PA constructor" << '\n';
	}

};

class PB
{
public:
	int x;
	int y;
	PB(int _y) : y(_y)
	{
		x = 90;
		cout << "PB constructor" << '\n';
	}

};

class CC : public PA, public PB
{
public:
	CC(int _x, int _y) : PA(_x), PB(_y)
	{
		cout << "CC constructor" << '\n';
	}
};

int main()
{
	CC obj_c(10, 10);

	cout << "------------------------" << '\n';

	cout << "x is: " << obj_c.PA::x << endl;	//obj_c.x�� �ϸ� PA�� x���� PB�� x���� ��ȣ�ϱ� ������ ��Ȯ�ϰ� ������Ѵ�.
	cout << "y is: " << obj_c.y << endl;


	return 0;
}