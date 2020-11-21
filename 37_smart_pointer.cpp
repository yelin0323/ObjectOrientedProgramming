/*
	Smart pointer

	- 기존 문제점 :
		+ 할당과 해제가 짝이 맞아야 -> 안되면 memory leak(메모리 누수)가 발생
		+ new, delete
		+ malloc, free
	
	- 다른 언어의 해결책
		+ Java -> pointer를 없앰
		+ Garbage collector	-> garbage collector가 다 쓴 메모리를 알아서 해제
		+ 개발자는 편하나, 컴퓨터 load 증가

	- C++의 smart pointer 도입
		+ 메모리 자동 해제 : no garbage collector ---> 속도 향상
		+ nullptr로 자동 초기화
		+ delete 하면 에러
		+ 동적으로 할당받은 공간에 대해서만 사용
*/

#include <iostream>

using namespace std;

class Person
{
private:
	string name;
public:
	Person(string _name)
	{
		name = _name;
	}
	void showName()
	{
		cout << "My name is " << name << endl;
	}
};

int main()
{
	unique_ptr<int> pa(new int);	//int를 가리키는 smart point 선언, 해제 안해도됨
	*pa = 30;
	cout << "*pa: " << *pa << endl;

	unique_ptr<int[]> paa(new int[5]);	//int형 배열을 가리키는 smart pointer 선언
	for (int i = 0; i < 5; i++)
	{
		paa[i] = i + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << i << " " << paa[i] << endl;
	}

	//정적으로 할당된 공간에는 사용 불가
	//int a = 10;
	//	unique_ptr<int> epa(&a); //정적공간을 해제하려고 하기 때문에 에러발생
	//	cout << *epa << endl;

	unique_ptr<Person> cpa(new Person("John"));
	cpa->showName();


	return 0;
}