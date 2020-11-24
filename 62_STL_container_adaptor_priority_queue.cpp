/*
	container adaptor
	: vector 또는 deque같은 container를 stack,queue,priority_queue처럼 쓸 수 있도록 해주는 것

	- add 'how to access' to container
		+ priority_queue : push, pop, top, empty, size	//우선순위가 높은 애가 먼저 나와

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

//우선순위를 결정 
class ComparePerson
{
public:
	bool operator() (Person& p1, Person& p2)
	{
		//return (p1.age < p2.age);	//나이가 많은게 우선순위가 높다.
		return (p1.name.compare(p2.name) > 0);	// 1이 반환 : p1이 p2보다 작다. : p1이 사전식배열에서 앞에 있고 우선순위가 높다.
	}
};

//priority_queue 기본 예제
/*
int main()
{
	priority_queue<int> mypqueue;	//deque으로 하면 되는데 왜 vector로 하면 안될까...

	mypqueue.push(4);
	mypqueue.push(3);
	mypqueue.push(5);

	cout << "top : " << mypqueue.top() << endl;	//5 //숫자가 큰게 우선순위가 높기때문에
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