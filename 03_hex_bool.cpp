#include <iostream>
#include <climits>

//initialization(�ʱ�ȭ)
/*
int main()
{
	using namespace std;

	//�ʱ�ȭ�ϴ� �ټ� ���� ���
	int a = 50;
	int b(50);
	int c = (50);
	int d{ 50 };
	int e = { 50 };

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	return 0;
}
*/


//������ ǥ���
/*
int main()
{
	// 16���� 0x10
	// 8���� 010
	// 10���� 10

	// ������ ���� ���� ���
	// cout << hex, oct, dec
	// 16���� hex / 8���� oct / 10���� dec

	using namespace std;

	int a = 10;
	int b = 0x10; //16����
	int c = 010; //8����

	cout << a << endl;
	cout << hex;		//16������ ���
	cout << b << endl;
	cout << oct;
	cout << c << endl;
	cout << dec;
	cout << a << " " << b << " " << c << endl;


	return 0;
}
*/

//bool data type  (true, false)
int main()
{
	// boolalpha for cout
	// noboolalpha for cout

	using namespace std;

	bool b = true; // true ��� 1 �ᵵ��
	bool c = false; //false ��� 0 �ᵵ��

	cout << boolalpha; // std::boolalpha (����)
	cout << b << endl;
	cout << c << endl;

	cout << noboolalpha;
	cout << b << endl;
	cout << c << endl;
	
	return 0;
}