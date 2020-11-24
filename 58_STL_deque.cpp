/*
	Standard template library

	- data structure, algorithm of C  (C에서는 구현해야하는 자료구조같은 것을 미리 만들어 놓은 것)

	- C++ 국제표준에서 제정, 구현은 각자 
	 
	- container : 데이터 저장
	 * vector
	 * array
	 * deque (덱 : double ended queue) : 앞뒤로 in, out이 가능
	 * list : doubly-linked list,
			  단점 : index에 의한 random access 불가능, 메모리 공간을 좀 더 쓴다.
			  장점 : 삽입, 삭제가 쉽다
	 * forward_list : singly-linked list
			: index에 의한 random access 불가능
	
	- iterator : container 안의 데이터에 대해서 통일된 접근 방법 제공
				-> list도 포인터처럼 접근할 수 있다.

	- 사용 예
	1) 1,2,3,4,5를 넣는다.
	2) 맨 앞, 맨 끝 요소에 읽는다
	3) 차례로 읽는다
	4) 역순으로 읽는다
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

	//역순 읽기
	for (auto e = mydeque.rbegin(); e != mydeque.rend(); e++)
	{
		cout << *e << " ";

	}
	cout << endl;



	return 0;
}