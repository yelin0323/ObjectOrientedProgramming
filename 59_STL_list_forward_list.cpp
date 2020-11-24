/*
	Standard template library(STL)

	 * list : doubly-linked list,
			  단점 : index에 의한 random access 불가능, 메모리 공간을 좀 더 쓴다.
			  장점 : 삽입, 삭제가 쉽다
	 * forward_list : singly-linked list
			: index에 의한 random access 불가능

	- iterator : container 안의 데이터에 대해서 통일된 접근 방법 제공
				-> list도 포인터처럼 접근할 수 있다.
*/

#include <iostream>
#include <forward_list>
#include <iterator>

using namespace std;

//list
/*
int main()
{
	list<int> mylist;

	mylist.push_back(3);
	mylist.push_back(4);
	mylist.push_back(5);
	mylist.push_front(2);
	mylist.push_front(1);

	cout << "list front: " << mylist.front() << endl;
	cout << "list back: " << mylist.back() << endl;

	for (auto e = mylist.begin(); e != mylist.end(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;

	//역순 읽기. by iterator
	for (auto e = mylist.rbegin(); e != mylist.rend(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;

	//2번 자리에 100을 넣는다.
	auto loc = mylist.cbegin();	//constuct begin()
	advance(loc, 1);	//mydeque의 1번 자리를 loc이 가리키도록

	mylist.insert(loc, 100);	//loc자리 앞에 100 삽입

	for (auto e = mylist.begin(); e != mylist.end(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;

	//4삭제
	loc = mylist.cbegin();
	advance(loc, 4);	//loc이 4번자리를 가리키도록
	mylist.erase(loc);	//4번자리에 있는 값 삭제 // 4삭제

	for (auto e = mylist.begin(); e != mylist.end(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;


	return 0;
}
*/

//forward  list
int main()
{
	forward_list<int> myfwdlist;

	//myfwdlist.push_back(3);	//forward_list는 push_back이 없어
	myfwdlist.push_front(5);
	myfwdlist.push_front(4);
	myfwdlist.push_front(3);
	myfwdlist.push_front(2);
	myfwdlist.push_front(1);

	//cout << "forward_list front: " << myfwdlist.begin() << endl;

	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;

	//2번 자리 뒤에 100을 넣는다.
	auto loc = myfwdlist.cbegin();	//constuct begin()
	advance(loc, 1);	//mydeque의 1번 자리를 loc이 가리키도록

	myfwdlist.insert_after(loc, 100);	//loc자리 뒤에 100 삽입

	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;

	//100 삭제
	loc = myfwdlist.cbegin();
	//advance(loc, 4);	//loc이 4번자리를 가리키도록
	loc = next(loc);	//현재 loc의 다음꺼를 가리키도록
	//loc = prev(loc) //앞으로 가는것 : forward_list에서는 지원하지 않음.
	myfwdlist.erase_after(loc);	//2번자리에 뒤에 있는 값 삭제 // 100 삭제

	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;


	return 0;
}