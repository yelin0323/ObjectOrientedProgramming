/*
	container adaptor 
	: vector 또는 deque같은 container를 stack,queue,priority_queue처럼 쓸 수 있도록 해주는 것
	
	- add 'how to access' to container
		+ stack : push, pop, top, empty, size
		+ queue : push, pop, front, back, empty, size
		+ priority_queue : push, pop, top, empty, size	//우선순위가 높은 애가 먼저 나와

*/

#include <iostream>
#include <stack>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	//stack<int> mystack;	//default container를 이용해서 stack을 만든 것
	stack<int, vector<int>> mystack;	//vector를 이용해서 stack을 만든것

	mystack.push(5);
	mystack.push(4);
	mystack.push(3);

	cout << "top: " << mystack.top() << endl;
	cout << "size: " << mystack.size() << endl;
	cout << "empty: " << mystack.empty() << endl;

	while (mystack.empty() != true)
	{
		cout << mystack.top() << " ";
		mystack.pop();	//pop이 반환값이 없기 때문에 top을 사용
	}
	cout << endl;

	return 0;
}