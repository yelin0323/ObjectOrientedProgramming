#include <iostream>  
#include <string>

using namespace std;

//casting
/*
int main()
{
	char c = 'a';
	cout << c << endl;
	cout << (int)c << endl; //casting
	cout << int(c) << endl; //casting

	return 0;
}
*/


//float vs double
/*
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield); //�� ��Ȯ�ϰ� ����ϱ� ���� ��ɾ�
	float a = 10.0 / 3.0;
	double b = 10.0 / 3.0;

	a = a * 1e6; //1*10^6 ������
	b = b * 1e6;

	cout << a << endl;
	cout << b << endl;

	return 0;
}
*/

//const
/*
int main()
{
	//define���ٴ� const�� ����ϴ� ���� �������� �� �� �ֱ� ������ �� ����

	const int a = 10;
	cout << a << endl;
	// a = 20; -> const ������ ���� ����

	return 0;
}
*/

//array(�迭) -> ���� data type, ���ӵ� ����
/*
int main()
{
	//1. array �迭, 2. ���ڿ� �迭 3. ���ڿ� �Է¹ޱ� - cin.getline(�迭, �ִ�ũ�� + �ι��� +1)

	const int arSize = 20;
	char buf[arSize];

	cout << "Enter answer : ";
	cin.getline(buf, arSize); // �ٹٲ��� ������ ���������Է����� �ްڴ�.

	cout << "Answer is : " << buf << endl;


	return 0;
}
*/

//string class -> ���ڿ� ó���� ���� c++�� ������ ����
int main()
{
	string answer;

	//cout << "Enter answer : ";
	//cin >> answer;				//�̷��� �ϸ� ù �ܾ �Է�
	//cout << "Your answer is : " << answer << endl;

	cout << "Enter answer : ";
	getline(cin, answer);
	cout << "Your answer is : " << answer << endl;

	cout << "Length : " << answer.length() << endl; // ���ڿ��� ����
	cout << "first : " << answer[0] << endl; //ù ��° ����
	cout << "last : " << answer[answer.length() - 1] << endl; //������ ����

	return 0;
}
