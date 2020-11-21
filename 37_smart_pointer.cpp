/*
	Smart pointer

	- ���� ������ :
		+ �Ҵ�� ������ ¦�� �¾ƾ� -> �ȵǸ� memory leak(�޸� ����)�� �߻�
		+ new, delete
		+ malloc, free
	
	- �ٸ� ����� �ذ�å
		+ Java -> pointer�� ����
		+ Garbage collector	-> garbage collector�� �� �� �޸𸮸� �˾Ƽ� ����
		+ �����ڴ� ���ϳ�, ��ǻ�� load ����

	- C++�� smart pointer ����
		+ �޸� �ڵ� ���� : no garbage collector ---> �ӵ� ���
		+ nullptr�� �ڵ� �ʱ�ȭ
		+ delete �ϸ� ����
		+ �������� �Ҵ���� ������ ���ؼ��� ���
*/

#include <iostream>

using namespace std;

class Person
{
private:
	string name;
public:
	Person(string _name)
	{
		name = _name;
	}
	void showName()
	{
		cout << "My name is " << name << endl;
	}
};

int main()
{
	unique_ptr<int> pa(new int);	//int�� ����Ű�� smart point ����, ���� ���ص���
	*pa = 30;
	cout << "*pa: " << *pa << endl;

	unique_ptr<int[]> paa(new int[5]);	//int�� �迭�� ����Ű�� smart pointer ����
	for (int i = 0; i < 5; i++)
	{
		paa[i] = i + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << i << " " << paa[i] << endl;
	}

	//�������� �Ҵ�� �������� ��� �Ұ�
	//int a = 10;
	//	unique_ptr<int> epa(&a); //���������� �����Ϸ��� �ϱ� ������ �����߻�
	//	cout << *epa << endl;

	unique_ptr<Person> cpa(new Person("John"));
	cpa->showName();


	return 0;
}