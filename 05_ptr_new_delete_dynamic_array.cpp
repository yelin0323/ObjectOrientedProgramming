#include <iostream>

using namespace std;


//pointer�� �̿��� ���� ����
/*
	1) ���� c����� ���

	int i = 10;
	int *pi = &i;
	*pi = 20;

	2) c++���� ���������� �����ϰ� �����ϴ� ���

	new		: �������� (c������ malloc ����)
	delete  : �������� (c������ free ����)
*/
/*
int main()
{
	int* pi = new int; //int�� �����ϴ� ������ ����

	*pi = 10;

	cout << *pi << endl;

	*pi = 20;

	cout << *pi << endl;

	delete pi; //�ݵ�� ��ȯ�� ���־���Ѵ�.

	return 0;
}
*/


//static array / dynamic array
/*
	static array
	int pa[10];	//���� �迭 : source code -> complie -> object -> link -> exe / object�� ���� �� 10���� ������ �Ҵ�
	
	dynamic array

	int * pb = new int[10]; // runtime �ܰ迡�� ���� �Ҵ�	
	delete[] pb //free dynamic array : �ݵ�� �ʿ�(�迭�̶�� ���� ������־����)
*/
int main()
{
	//�����迭 -> �������� �� ����.
	int pa[10];
	pa[5] = 10;

	cout << "pa[5]: " << pa[5] << endl;

	// �����迭
	int* pb = new int[10];
	pb[5] = 10;
	cout << "pb[5]: " << pb[5] << endl;
	delete[] pb;

	return 0;
}