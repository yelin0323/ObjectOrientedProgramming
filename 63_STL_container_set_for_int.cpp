/*
	container set(컨테이너 집합)
	 : 중복되지 않는 값을 저장, 존재 여부를 확인하는데 사용

	- check if element already exists.
	- keeps elements in increasing order
	- method insert
		+ returns pair<iterator, bool>, true for insert success

	- method find
		+ returns iterator for target element

	- object as element
		
		
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> myset;

	myset.insert(5);
	myset.insert(4);
	myset.insert(3);
	myset.insert(2);
	myset.insert(1);

	//1이 있으면 그 위치에 대한 iterator
	//	  없으면, myset.end()
	auto pos = myset.find(1);
	//auto pos = myset.find(6);	//not found

	if (pos == myset.end())
	{
		cout << "Not found" << endl;
	}
	else
	{
		cout << "Found" << endl;
	}

	pair<set<int>::iterator, bool> res = myset.insert(3);
	//res.first == iterator , res.second == bool이다.
	//3이 이미 있으면 bool은 false가 된다.

	if (res.second == false)
	{
		cout << "Already exist" << endl;
	}
	else
	{
		cout << "Insertion success" << endl;
	}

	myset.erase(3);	//3을 지워라

	//for (auto e = myset.begin(); e != myset.end(); e++)	//iterator
	for(auto& e : myset)	//iterator를 안쓰는 방법 //rnage-based for loop, reference
	{
		cout << e << " ";
	}
	cout << endl;

	return 0;
}