#include <iostream>
#include <set>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int age;
	Person(string _name, int _age) : name(_name), age(_age) {}
	bool operator<(const Person& p)	const//operator overloading
	{
		if (name < p.name)
		{
			return true;
		}
		else if (name == p.name)
		{
			if (age < p.age)
			{
				return true;
			}
		}
		return false;
	}
};

int main()
{
	set<Person> myset;

	myset.insert(Person("John1", 30));
	myset.insert(Person("John2", 28));
	myset.insert(Person("John3", 31));
	myset.insert(Person("John4", 19));
	myset.insert(Person("John5", 25));
	
	auto pos = myset.find(Person("John5", 27));	//나이가 달라서 not found
	//auto pos = myset.find(Person("John6", 19));	//not found

	if (pos == myset.end())
	{
		cout << "Not found" << endl;
	}
	else
	{
		cout << "Found" << endl;
	}

	pair<set<Person>::iterator, bool> res = myset.insert(Person("John6", 19));
	res = myset.insert(Person("John6", 99));
	//res.first == iterator , res.second == bool이다.
	//19살은 있지만 John6가 없기 때문에 res.second는 false

	if (res.second == false)
	{
		cout << "Already exist" << endl;
	}
	else
	{
		cout << "Insertion success" << endl;
	}

	myset.erase(Person("John3",31));	//3을 지워라

	//for (auto e = myset.begin(); e != myset.end(); e++)	//iterator
	for (auto& e : myset)	//iterator를 안쓰는 방법 //rnage-based for loop, reference
	{
		cout << e.name << " is " << e.age << " years old." << endl;
	}

	return 0;
}