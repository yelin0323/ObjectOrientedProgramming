/*
	array of object

	static array: Person p[10]

	array by vector	//vector�� SLL�� ���

	#include <vector>

	vector<data_type> vname;	//vector���� / <data_type> : template ex)int, Person....

	vname.push_back()
	vname.front()
	vname.back()
	vname.pop_back()
	vname.empty()	//��Ұ� �ֳľ���

	range based for-loop
	for (auto& k : vname) {...}

	vname.begin()		//vector�� ���� / iterator : vector�� ������(�ּ��� ����)
	vname.end()			//vector�� ������ �˷��ִ� node
	for(auto p = vname.begin(); p != vname.end(); p++)
	{	*p ....}
	
	vname.erase(vname.begin()+i)	//i��° �� ���� (0������ ����)
	vname.insert(vname.begin()+i, value) //������ ��ġ�� �ٷ� �տ�����

	vname.at(i)		// i��° ��
	vname[i]		// i��° ��

	vname.size()	//vector�� ũ�⸦ ��ȯ
*/

#include <iostream>
#include <vector> 

using namespace std;

class Person
{
public:
	int age;
	Person() :age(0) {};
};

//static array
/*
int main()
{
	Person p[10];

	for (auto& i : p)	//auto : p�� � type�� �־ �˾Ƽ��ض� / &���� ������ ���������ʰ� �׳� ���� ���ؼ�(�ð� ����)
	{
		cout << "age: " << i.age << endl;
	}

	return 0;
}
*/

//vector
int main()
{
	vector<int> ivector;

	//vector �⺻ ����
	ivector.push_back(10);
	ivector.push_back(20);
	ivector.push_back(30);
	ivector.push_back(40);
	ivector.push_back(50);

	for (auto& i : ivector)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << ivector.empty() << endl;
	cout << "front: " << ivector.front() << endl;
	cout << "back: " << ivector.back() << endl;

	ivector.pop_back();

	cout << "back: " << ivector.back() << endl;

	//����
	cout << "---------------" << endl;
	for (auto p = ivector.begin(); p != ivector.end(); p++)	//pointer �̿��ؼ� ���
	{
		cout << *p << " ";
	}
	cout << endl;

	ivector.erase(ivector.begin() + 1);	//1��° ���� ����
	cout << "earase" << endl;
	for (int i = 0; i < ivector.size(); i++)	//vname.at(i)�̿��ؼ� ���
	{
		cout << ivector.at(i) << " ";
	}
	cout << endl;

	ivector.insert(ivector.begin() + 1, 999);	//1��° �� �տ� 999 ����
	cout << "insert" << endl;
	for (int i = 0; i < ivector.size(); i++)	//�迭ó�� ����ؼ� ���
	{
		cout << ivector[i] << " ";
	}
	cout << endl;

	return 0;
}