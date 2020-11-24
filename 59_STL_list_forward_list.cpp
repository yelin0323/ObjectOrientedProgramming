/*
	Standard template library(STL)

	 * list : doubly-linked list,
			  ���� : index�� ���� random access �Ұ���, �޸� ������ �� �� ����.
			  ���� : ����, ������ ����
	 * forward_list : singly-linked list
			: index�� ���� random access �Ұ���

	- iterator : container ���� �����Ϳ� ���ؼ� ���ϵ� ���� ��� ����
				-> list�� ������ó�� ������ �� �ִ�.
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

	//���� �б�. by iterator
	for (auto e = mylist.rbegin(); e != mylist.rend(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;

	//2�� �ڸ��� 100�� �ִ´�.
	auto loc = mylist.cbegin();	//constuct begin()
	advance(loc, 1);	//mydeque�� 1�� �ڸ��� loc�� ����Ű����

	mylist.insert(loc, 100);	//loc�ڸ� �տ� 100 ����

	for (auto e = mylist.begin(); e != mylist.end(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;

	//4����
	loc = mylist.cbegin();
	advance(loc, 4);	//loc�� 4���ڸ��� ����Ű����
	mylist.erase(loc);	//4���ڸ��� �ִ� �� ���� // 4����

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

	//myfwdlist.push_back(3);	//forward_list�� push_back�� ����
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

	//2�� �ڸ� �ڿ� 100�� �ִ´�.
	auto loc = myfwdlist.cbegin();	//constuct begin()
	advance(loc, 1);	//mydeque�� 1�� �ڸ��� loc�� ����Ű����

	myfwdlist.insert_after(loc, 100);	//loc�ڸ� �ڿ� 100 ����

	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;

	//100 ����
	loc = myfwdlist.cbegin();
	//advance(loc, 4);	//loc�� 4���ڸ��� ����Ű����
	loc = next(loc);	//���� loc�� �������� ����Ű����
	//loc = prev(loc) //������ ���°� : forward_list������ �������� ����.
	myfwdlist.erase_after(loc);	//2���ڸ��� �ڿ� �ִ� �� ���� // 100 ����

	for (auto e = myfwdlist.begin(); e != myfwdlist.end(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;


	return 0;
}