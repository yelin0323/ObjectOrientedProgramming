/*
	Multiple inheritance

	- 부모가 2개 이상인 경우
	-> 부모가 같은 이름의 변수를 가지게 될 경우 모호해질 수 있기 때문에
	  가능하면 사용하지 않는다! (java에서는 사용할 수 없다.)
*/

#include <iostream>

using namespace std;

class PA 
{
public:
	int x;
	PA(int _x) : x(_x)
	{
		cout << "PA constructor" << '\n';
	}

};

class PB
{
public:
	int x;
	int y;
	PB(int _y) : y(_y)
	{
		x = 90;
		cout << "PB constructor" << '\n';
	}

};

class CC : public PA, public PB
{
public:
	CC(int _x, int _y) : PA(_x), PB(_y)
	{
		cout << "CC constructor" << '\n';
	}
};

int main()
{
	CC obj_c(10, 10);

	cout << "------------------------" << '\n';

	cout << "x is: " << obj_c.PA::x << endl;	//obj_c.x로 하면 PA의 x인지 PB의 x인지 모호하기 때문에 명확하게 해줘야한다.
	cout << "y is: " << obj_c.y << endl;


	return 0;
}