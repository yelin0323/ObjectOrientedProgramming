#include <iostream>

using namespace std;

struct things
{
	char name[20];
	double weight;
	double price;
};

//동적 구조체 생성과 접근
/*
		c에서의 구조체 선언과 접근
		- struct 키워드를 구조체 이름 앞에 꼭 붙여야
		- 동적으로 구조체 공간 생성을 위해서는 malloc 사용, free 해제

		c++에서 구조체 선언과 사용
		- struct 키워드 없이 구조체 이름만으로도 사용 가능
		- 동적 구조체는 array와 같이, new와 delete
	*/

int main()
{
	things* pt = new things;

	cout << "Enter name: ";
	cin.get(pt->name,20);

	cout << "Enter weight: ";
	cin >> pt->weight;

	cout << "Enter price: ";
	cin >> (*pt).price;

	cout << pt->name << " " << (*pt).weight << " " << pt->price << endl;

	delete pt;

	return 0;
}



