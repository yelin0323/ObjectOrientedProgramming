#include <iostream>

using namespace std;


/*
	class function prototype
	- function declaration�� definition�� ����
	- class���� declaration(prototype)�� ����
	- class �ܺο� function definition

	- why:
	   + �������̽��� ������ �и��Ͽ� �ڵ� ���꼺�� ��������.
	   ==> �Լ��� �Ķ���Ϳ� ��ȯ���� �˰� ����� �� �ְԵȴ�. (�������̽��� ����������))
*/

//���߿� �� �κ��� .h (header file)�� �ǰ�, ���α׷��� ������ �� �� �κи� ���� �Լ��� ���
class PrintData
{
public:
	void myprint(int i); // function declaration, �Լ� ����, ---> function prototype ==>  interface
};

//���߿� �� �κ��� .cpp (c++ file)�� �ǰ�, �ڵ带 ����
//PrintData class ���� �Լ� myprint ����
void PrintData::myprint(int i) 	// function definition, �Լ� ���� ---> function implementation (�Լ� ����)
{
	cout << "int: " << i << endl;
}

int main()
{
	PrintData* ppd = new PrintData();
	ppd->myprint(4);
	delete ppd;

	return 0;
}
