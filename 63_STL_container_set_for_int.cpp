/*
	container set(�����̳� ����)
	 : �ߺ����� �ʴ� ���� ����, ���� ���θ� Ȯ���ϴµ� ���

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

	//1�� ������ �� ��ġ�� ���� iterator
	//	  ������, myset.end()
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
	//res.first == iterator , res.second == bool�̴�.
	//3�� �̹� ������ bool�� false�� �ȴ�.

	if (res.second == false)
	{
		cout << "Already exist" << endl;
	}
	else
	{
		cout << "Insertion success" << endl;
	}

	myset.erase(3);	//3�� ������

	//for (auto e = myset.begin(); e != myset.end(); e++)	//iterator
	for(auto& e : myset)	//iterator�� �Ⱦ��� ��� //rnage-based for loop, reference
	{
		cout << e << " ";
	}
	cout << endl;

	return 0;
}