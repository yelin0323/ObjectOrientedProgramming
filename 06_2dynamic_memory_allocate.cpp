#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

char* getname(void);

//문자열 길이 맞춤형 메모리 할당
/*
	- 문자열의 길이가 다를 경우, 일률적인 버퍼를 사용하면 메모리 낭비
	- 예) 문자열 길이가 대부분 10, 1개만 100

	최대길이로 문자열 입력을 받고,
	실제 길이에 따라 메모리를 할당받아 저장
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
	strcpy(pn, temp); //temp 값을 pn에 복사
	return pn;

}