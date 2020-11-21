#include <iostream>
#include <string>

using namespace std;

/*
	1) class member function의 overloading

	2) Class member function에서 default parameter 사용

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

	void myprint(string s = "s is not given")	//default값 설정
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