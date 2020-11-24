/*
	container adaptor 
	: vector �Ǵ� deque���� container�� stack,queue,priority_queueó�� �� �� �ֵ��� ���ִ� ��
	
	- add 'how to access' to container
		+ stack : push, pop, top, empty, size
		+ queue : push, pop, front, back, empty, size
		+ priority_queue : push, pop, top, empty, size	//�켱������ ���� �ְ� ���� ����

*/

#include <iostream>
#include <stack>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	//stack<int> mystack;	//default container�� �̿��ؼ� stack�� ���� ��
	stack<int, vector<int>> mystack;	//vector�� �̿��ؼ� stack�� �����

	mystack.push(5);
	mystack.push(4);
	mystack.push(3);

	cout << "top: " << mystack.top() << endl;
	cout << "size: " << mystack.size() << endl;
	cout << "empty: " << mystack.empty() << endl;

	while (mystack.empty() != true)
	{
		cout << mystack.top() << " ";
		mystack.pop();	//pop�� ��ȯ���� ���� ������ top�� ���
	}
	cout << endl;

	return 0;
}