#include <iostream>
#include <map>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int age;
	Person(string _name, int _age) : name(_name), age(_age){}
	bool operator<(const Person& p) const
	{
		if (name < p.name)
		{
			return true;
		}
		else if (name > p.name)
		{
			return false;
		}
		else //name == p.name
		{
			if (age < p.age)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
};

int main()
{
	std::map<Person, int> mymap;

	mymap.insert(make_pair(Person("mike1", 24), 24));
	mymap.insert(make_pair(Person("mike2", 21), 21));
	mymap.insert(make_pair(Person("mike3", 20), 20));
	mymap.insert(make_pair(Person("mike4", 29), 29));
	mymap.insert(make_pair(Person("mike5", 19), 19));

	cout << mymap[Person("mike1", 24)] << endl;

	auto pos = mymap.find(Person("mike6", 24));
	if (pos == mymap.end())
	{
		cout << "Unable to find" << endl;
	}
	else
	{
		cout << (*pos).first.name << " " << (*pos).second << endl;
	}

	pair<map<Person, int>::iterator, bool> res = mymap.insert(make_pair(Person("mike10", 99), 99));

	if (res.second == true)
	{
		cout << "Insertion success" << endl;
	}
	else
	{
		cout << "Insertion failed " << (*(res.first)).first.name << ", " << (*(res.first)).first.age << endl;
	}

	for (auto& e : mymap)
	{
		cout << e.first.name << ", " << e.second << endl;
	}

	return 0;
}