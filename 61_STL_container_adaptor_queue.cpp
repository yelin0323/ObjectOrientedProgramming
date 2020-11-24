/*
	container adaptor
	: vector 또는 deque같은 container를 stack,queue,priority_queue처럼 쓸 수 있도록 해주는 것

	- add 'how to access' to container
		+ queue : push, pop, front, back, empty, size
*/

#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int age;
	Person(string _name, int _age) : name(_name), age(_age) {};
	void printPersonInfo()
	{
		cout << name << " is " << age << " years old." << endl;
	}
};

int main()
{
	queue<Person, deque<Person>> myqueue;	//deque으로 하면 되는데 왜 vector로 하면 안될까...

	myqueue.push(Person("James", 20));
	myqueue.push(Person("Cindy", 19));
	myqueue.push(Person("Jinho", 21));

	cout << "front : " << myqueue.front().name << endl;	
	cout << "back : " << myqueue.back().name << endl;
	cout << "empty : " << myqueue.empty() << endl;	
	cout << "size : " << myqueue.size() << endl;

	while (myqueue.empty() != true)
	{
		myqueue.front().printPersonInfo();
		myqueue.pop();
	}
	cout << endl;


	return 0;
}