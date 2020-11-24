/*
	container adaptor
	: vector �Ǵ� deque���� container�� stack,queue,priority_queueó�� �� �� �ֵ��� ���ִ� ��

	- add 'how to access' to container
		+ priority_queue : push, pop, top, empty, size	//�켱������ ���� �ְ� ���� ����

*/

#include <iostream>
#include <queue>	//queue + priority_queue
#include <vector>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int age;
	Person(string _name, int _age) : name(_name), age(_age) {};
	void printPersonInfo() const
	{
		cout << name << " is " << age << " years old." << endl;
	}
};

//�켱������ ���� 
class ComparePerson
{
public:
	bool operator() (Person& p1, Person& p2)
	{
		//return (p1.age < p2.age);	//���̰� ������ �켱������ ����.
		return (p1.name.compare(p2.name) > 0);	// 1�� ��ȯ : p1�� p2���� �۴�. : p1�� �����Ĺ迭���� �տ� �ְ� �켱������ ����.
	}
};

//priority_queue �⺻ ����
/*
int main()
{
	priority_queue<int> mypqueue;	//deque���� �ϸ� �Ǵµ� �� vector�� �ϸ� �ȵɱ�...

	mypqueue.push(4);
	mypqueue.push(3);
	mypqueue.push(5);

	cout << "top : " << mypqueue.top() << endl;	//5 //���ڰ� ū�� �켱������ ���⶧����
	cout << "empty : " << mypqueue.empty() << endl;	//0
	cout << "size : " << mypqueue.size() << endl;	//3

	while (mypqueue.empty() != true)
	{
		cout << mypqueue.top() << endl;
		mypqueue.pop();
	}
	cout << endl;


	return 0;
}

*/

int main()
{
	priority_queue<Person, vector<Person>, ComparePerson> mypqueue;

	mypqueue.push(Person("James", 20));
	mypqueue.push(Person("Cindy", 19));
	mypqueue.push(Person("Jinho", 21));

	cout << "front : " << mypqueue.top().name << endl;	
	cout << "empty : " << mypqueue.empty() << endl;
	cout << "size : " << mypqueue.size() << endl;	

	while (mypqueue.empty() != true)
	{
		mypqueue.top().printPersonInfo();
		mypqueue.pop();
	}
	cout << endl;


	return 0;
}