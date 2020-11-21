#include <iostream>
#include <string>

using namespace std;

/*
	1) class member function�� overloading

	2) Class member function���� default parameter ���

*/

class PrintData
{
public:
	
	void myprint(int i)
	{
		cout << "int: " << i << endl;
	}

	void myprint(double d)
	{
		cout << "double: " <<d << endl;
	}

	void myprint(string s = "s is not given")	//default�� ����
	{
		cout << "string: " << s << endl;
	}

};

int main()
{
	PrintData pd;

	pd.myprint(3);
	pd.myprint(3.141592);
	pd.myprint("hello world");

	PrintData* ppd = new PrintData();
	ppd -> myprint(4);
	ppd->myprint(1.11111);
	ppd->myprint();
	ppd->myprint("bye, world");

	return 0;
}