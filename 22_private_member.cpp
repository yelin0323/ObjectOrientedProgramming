/*
	public vs. private member

	public : 어디서든 사용 가능

	private : class 구현하는 코드에서만 사용 가능
	why? 왜 써?
	 - 중요한 데이터를 막 바꿀 수 없게 설정하거나, 범위를 설정하기 위해	
*/

#include <iostream>
#include <string>

using namespace std;

class PrintData
{
private:
	int a;		//class member variable
	double b;	//class member variable
public:
	PrintData(int _a, double _b);
	void myprint();
};

PrintData::PrintData(int _a = 10, double _b = 45.0) : a(_a), b(_b)
{

}

void PrintData::myprint()
{
	cout << "int: " << a << endl;
	cout << "double: " << b << endl;
}

int main()
{
	PrintData pd;
	
	/* private이기 때문에 변경 불가능
		pd.a = 100; 
		pd.b = 200.459;
	*/
	
	pd.myprint();

	return 0;
}