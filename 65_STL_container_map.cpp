/*
	container map : key�� value�� ����

	- works like hash table
	- method insert
	 + returns pair<iterator, bool>, true for insertion success, otherwise false
	- method find
	 + returns interator for target element
	-object as element
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map < string, int> mymap;

	mymap.insert(make_pair("mike1", 24));
	mymap.insert(make_pair("mike2", 21));
	mymap.insert(make_pair("mike3", 20));
	mymap.insert(make_pair("mike4", 29));
	mymap.insert(make_pair("mike5", 19));

	for (auto& e : mymap)
	{
		cout << e.first << ", " << e.second << endl;
	}

	//�����ϱ�
	cout << "---�����ϱ�---" << endl;
	//pair<map<string, int>::iterator, bool> res = mymap.insert(make_pair("mike10", 99));
	pair<map<string, int>::iterator, bool> res = mymap.insert(make_pair("mike3", 99));	//key�� ���Ƶ� ������ �� ����
	if (res.second == true)
	{
		cout << "Insertion success" << endl;
	}
	else
	{
		cout << "Insertion failed " << (*(res.first)).first << ", " << (*(res.first)).second << endl;
	}

	for (auto& e : mymap)
	{
		cout << e.first << ", " << e.second << endl;
	}

	//�̸����� ã��
	cout << "----�̸����� ã��---" << endl;
	auto pos = mymap.find("mike3");

	if (pos == mymap.end())
	{
		cout << "Failed to find" << endl;
	}
	else
	{
		cout << (*pos).first << ", " << (*pos).second << endl;
	}

	//find ���
	cout << mymap["mike1"] << endl; //Ű��(�̸�)���� value(����) ã��
	cout << mymap["mike99"] << endl; //Ű���� ���� ���

	//�����ϱ�
	cout << "----�����ϱ�---" << endl;
	mymap.erase("mike4");
	for (auto& e : mymap)
	{
		cout << e.first << ", " << e.second << endl;
	}

	return 0;
}