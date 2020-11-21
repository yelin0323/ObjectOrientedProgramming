#include <iostream>

using namespace std;


//pointer를 이용한 변수 접근
/*
	1) 기존 c언어의 방법

	int i = 10;
	int *pi = &i;
	*pi = 20;

	2) c++에서 변수공간을 생성하고 접근하는 방법

	new		: 공간생성 (c언어에서의 malloc 유사)
	delete  : 공간해제 (c언어에서의 free 유사)
*/
/*
int main()
{
	int* pi = new int; //int를 저장하는 공간을 생성

	*pi = 10;

	cout << *pi << endl;

	*pi = 20;

	cout << *pi << endl;

	delete pi; //반드시 반환을 해주어야한다.

	return 0;
}
*/


//static array / dynamic array
/*
	static array
	int pa[10];	//정적 배열 : source code -> complie -> object -> link -> exe / object로 만들 때 10개의 공간을 할당
	
	dynamic array

	int * pb = new int[10]; // runtime 단계에서 공간 할당	
	delete[] pb //free dynamic array : 반드시 필요(배열이라는 것을 명시해주어야함)
*/
int main()
{
	//정적배열 -> 해제해줄 수 없다.
	int pa[10];
	pa[5] = 10;

	cout << "pa[5]: " << pa[5] << endl;

	// 동적배열
	int* pb = new int[10];
	pb[5] = 10;
	cout << "pb[5]: " << pb[5] << endl;
	delete[] pb;

	return 0;
}