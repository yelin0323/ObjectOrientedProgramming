/*
	Standard template library

	- data structure, algorithm of C  (C������ �����ؾ��ϴ� �ڷᱸ������ ���� �̸� ����� ���� ��)

	- C++ ����ǥ�ؿ��� ����, ������ ���� 
	 
	- container : ������ ����
	 * vector
	 * array
	 * deque (�� : double ended queue) : �յڷ� in, out�� ����
	 * list : doubly-linked list,
			  ���� : index�� ���� random access �Ұ���, �޸� ������ �� �� ����.
			  ���� : ����, ������ ����
	 * forward_list : singly-linked list
			: index�� ���� random access �Ұ���
	
	- iterator : container ���� �����Ϳ� ���ؼ� ���ϵ� ���� ��� ����
				-> list�� ������ó�� ������ �� �ִ�.

	- ��� ��
	1) 1,2,3,4,5�� �ִ´�.
	2) �� ��, �� �� ��ҿ� �д´�
	3) ���ʷ� �д´�
	4) �������� �д´�
	5) insert at the middle
	6) delete at the middle
	7) insert multiple elements at the middle
	8) delete multiple elements at the middle

*/

#include <iostream>
#include <deque>
#include <iterator>

using namespace std;

int main()
{
	deque<int> mydeque;

	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(5);
	mydeque.push_front(2);
	mydeque.push_front(1);

	cout << "deque front: " << mydeque.front() << endl;
	cout << "deque back: " << mydeque.back() << endl;

	for (auto e = mydeque.begin(); e != mydeque.end(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;

	//���� �б�
	for (auto e = mydeque.rbegin(); e != mydeque.rend(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;



	return 0;
}