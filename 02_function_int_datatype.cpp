#include <iostream>
#include <cmath>
#include <climits>

//�Լ����
/*
int main()
{
	using namespace std;

	cout << "������ ���ϰ��� �ϴ� ���ڸ� �Է��ϼ��� : ";

	double n;

	cin >> n;

	double nsqrt = sqrt((double)n);

	cout << n << "�� �������� " << nsqrt << endl;

	return 0;
}
*/

//�Լ�����
/*
using namespace std; //���������� ���� ��� �Լ����� ����� �� �ִ�.

int add_two_numbers(int _a, int _b);

int main()
{
	cout << "ù ��° ���ڸ� �Է��ϼ��� : ";
	int a, b;
	cin >> a;
	cout << "�� ��° ���ڸ� �Է��ϼ��� : ";
	cin >> b;

	int res = add_two_numbers(a, b);

	cout << a << "�� " << b << "�� ���� ����" << res << endl;

	return 0;
}

int add_two_numbers(int _a, int _b)
{
	
	cout << "This is function" << endl;
	return (_a + _b);
}
*/

//������ ������
int main()
{
	/*
	������ type
	- ���� : short - 2byte
		 int   - 4byte
		 long  - 4byte
		 long long - 8byte
	*/
	
	using namespace std;

	short s_var;
	int i_var;
	long l_var;
	long long ll_var;

	cout << "short size : " << sizeof(short) << endl;
	cout << "int size : " << sizeof(int) << endl;
	cout << "long size : " << sizeof(long) << endl;
	cout << "longlong size : " << sizeof(long long) << endl;
	cout << endl;

	cout << "short size : " << sizeof s_var << endl;
	cout << "int size : " << sizeof i_var << endl;
	cout << "long size : " << sizeof l_var << endl;
	cout << "longlong size : " << sizeof ll_var << endl;
	cout << endl;


	cout << "short max : " << SHRT_MAX << endl; //SHRT_MAT�� ����Ϸ��� #include <limits>�� �����ؾ���
	cout << "short min : " << SHRT_MIN << endl;
	cout << "int max : " << INT_MAX << endl;
	cout << "int min : " << INT_MIN << endl;
	cout << "long max : " << LONG_MAX << endl;
	cout << "long min : " << LONG_MIN << endl;
	cout << "long long max : " << LLONG_MAX << endl;
	cout << "long long min : " << LLONG_MIN << endl;
}




