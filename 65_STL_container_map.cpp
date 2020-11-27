/*
	container map : key와 value로 구성

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

	//삽입하기
	cout << "---삽입하기---" << endl;
	//pair<map<string, int>::iterator, bool> res = mymap.insert(make_pair("mike10", 99));
	pair<map<string, int>::iterator, bool> res = mymap.insert(make_pair("mike3", 99));	//key만 같아도 삽입할 수 없어
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

	//이름으로 찾기
	cout << "----이름으로 찾기---" << endl;
	auto pos = mymap.find("mike3");

	if (pos == mymap.end())
	{
		cout << "Failed to find" << endl;
	}
	else
	{
		cout << (*pos).first << ", " << (*pos).second << endl;
	}

	//find 대용
	cout << mymap["mike1"] << endl; //키값(이름)으로 value(나이) 찾기
	cout << mymap["mike99"] << endl; //키값이 없는 경우

	//삭제하기
	cout << "----삭제하기---" << endl;
	mymap.erase("mike4");
	for (auto& e : mymap)
	{
		cout << e.first << ", " << e.second << endl;
	}

	return 0;
}