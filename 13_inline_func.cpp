#include <iostream>

using namespace std;


/*
	�Լ� ȣ��
	�Լ� ȣ�⿡ ���� overhead
	�Լ� overhead�� �غ��ϴ� inline
	inline�� ����ؾ߸� �ұ�?
	 - inline ��ü�� �ʹ� Ŭ ���� overhead �ð����� ���� �ɸ� �� �����Ƿ� ����� �ʿ�x
	 - complier�� inline�� ����������� ������
*/
inline double calc_sum(double a, double b)
{
	return (a+b);
}

int main()
{
	cout << calc_sum(1.0, 2.0) << endl;
	cout << calc_sum(2.0, 2.0) << endl;
	cout << calc_sum(3.0, 2.0) << endl;
	//=> �̷���쿡 �Լ��� �Դٰ��� ���� �ʵ��� ���ִ°� inline

	return 0;
}