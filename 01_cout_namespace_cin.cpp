#include <iostream>

//hello world
/*
int main()
{
	std::cout << "Hello World" << std::endl; //endl : end of line (�ٹٲ�)
	//std : name space, cout : std namespace�� ��ü

	using namespace std; //std��� namespace�� �������״ϱ� �ؿ� ��ü���� ȥ���ɰŰ����� std�� �ٿ������ �ǹ�
	cout << "Hello World" << endl;

	cout << "Apple";
	cout << "Banana"; //endl�� ������ �ٹٲ޾��� ���

	cout << endl;
	cout << "Apple";
	cout << endl;	//�ٹٲ�
	cout << "Banana"; 



	return 0;
}

*/

//���� ����
/*
int main()
{
	using namespace std;

	int n;

	cout << "n has ";
	n = 25;
	cout << n << endl;

	n -= 1;

	cout << "n has now " << n << endl;

	return 0;
}
*/

//�Է� �ޱ�
int main()
{
	using namespace std;

	cout << "enter number: ";
	int n;
	cin >> n;
	cout << "The number you entered is " << n << endl;

	return 0;
}

