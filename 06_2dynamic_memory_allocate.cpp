#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

char* getname(void);

//���ڿ� ���� ������ �޸� �Ҵ�
/*
	- ���ڿ��� ���̰� �ٸ� ���, �Ϸ����� ���۸� ����ϸ� �޸� ����
	- ��) ���ڿ� ���̰� ��κ� 10, 1���� 100

	�ִ���̷� ���ڿ� �Է��� �ް�,
	���� ���̿� ���� �޸𸮸� �Ҵ�޾� ����
*/
int main()
{
	char* name;

	name = getname();

	cout << "Name: " << name << endl;
	cout << "Name address: " << (int*)name << endl;

	delete[] name;
	return 0;
}

char* getname(void)
{
	char temp[101];

	cout << "Enter name: ";
	cin >> temp;

	char* pn = new char[strlen(temp)+1];
	strcpy(pn, temp); //temp ���� pn�� ����
	return pn;

}