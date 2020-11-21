/*
	Operator overloading

	+, -	//산술 연산자
	==, !=	//비교 연산자
	++, -- (prefix, postfix)	//증감 연산자
*/
#include <iostream>

using namespace std;

class Coord_2D
{
private:
	int x;
	int y;
public:
	Coord_2D(int _x, int _y) : x(_x), y(_y){}
	void showCoord();
	Coord_2D addCorrd(Coord_2D& _k);

	//Oerator loading
	Coord_2D operator+(Coord_2D& _k);
};

Coord_2D Coord_2D::operator+ (Coord_2D& _k)
{
	Coord_2D temp(x + _k.x, y + _k.y);
	return temp;
}

void Coord_2D::showCoord()
{
	cout << "( " << x << ", " << y << " )" << endl;
}

Coord_2D Coord_2D::addCorrd(Coord_2D& _k)
{
	Coord_2D temp(x + _k.x, y + _k.y);
	return temp;
}

int main()
{
	Coord_2D a(10, 10);
	Coord_2D b(20, 20);

	a.showCoord();
	b.showCoord();

	Coord_2D c = a.addCorrd(b);	//c = a+b
	c.showCoord();

	Coord_2D d = a.addCorrd(b).addCorrd(c); //d = a + b + c
	//이렇게 하면 불편해! 직관적이지 않아! -> operator overloading을 하자!
	d.showCoord();

	Coord_2D e = a + b + c;	//자연스럽게 + operator를 사용할 수 있다
	e.showCoord();

	return 0;
}