/*
	class template
*/

#include <iostream>

using namespace std;

//default를 설정하면 선언할 때 그 type은 입력안해도 됨
template<typename T1, typename T2= int>	
class MyData
{
public:
	T1 data1;
	T2 data2;
	MyData(T1 _data1, T2 _data2) : data1(_data1), data2(_data2) {};

};

int main()
{
	MyData<int> a(10,10);	//int
	MyData<double,int> b(20.3,10);	//double
	MyData<char,double> c('z',4.5);	//char

	cout << a.data1 <<"," << a.data2 << endl;
	cout << b.data1 << "," << b.data2 << endl;
	cout << c.data1 << "," << c.data2 << endl;

	return 0;
}