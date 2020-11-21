/*
	public vs. private member

	public : ��𼭵� ��� ����

	private : class �����ϴ� �ڵ忡���� ��� ����
	why? �� ��?
	 - �߿��� �����͸� �� �ٲ� �� ���� �����ϰų�, ������ �����ϱ� ����	
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
	
	/* private�̱� ������ ���� �Ұ���
		pd.a = 100; 
		pd.b = 200.459;
	*/
	
	pd.myprint();

	return 0;
}