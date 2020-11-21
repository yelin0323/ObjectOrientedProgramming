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
	Coord_2D(int _x, int _y) : x(_x), y(_y) {}
	void showCoord();
	Coord_2D addCorrd(Coord_2D& _k);

	//Oerator loading
	Coord_2D operator+(Coord_2D& _k);
	bool operator==(Coord_2D& _k);
	bool operator!=(Coord_2D& _k);
	Coord_2D& operator++();	//++a
	Coord_2D operator++(int); //a++

};

Coord_2D Coord_2D::operator+ (Coord_2D& _k)
{
	Coord_2D temp(x + _k.x, y + _k.y);
	return temp;
}

bool Coord_2D::operator==(Coord_2D& _k)
{
	return((x == _k.x) && (y == _k.y));
}

bool Coord_2D::operator!=(Coord_2D& _k)
{
	//return !((x == _k.x) && (y == _k.y));
	return !(*this == _k); //이미 == operator가 있기 때문에 이렇게 사용 가능하지만 오류 나지 않도록 조심하자!
}

Coord_2D& Coord_2D::operator++()
{
	x++;
	y++;
	return *this;
}

Coord_2D Coord_2D::operator++(int)
{
	Coord_2D temp = *this;
	x++;
	y++;
	return temp;	//증가하기 전을 반환
}


void Coord_2D::showCoord()
{
	cout << "( " << x << ", " << y << " )" << endl;
}

int main()
{
	Coord_2D a(10, 10);
	Coord_2D b(20, 20);

	a.showCoord();
	b.showCoord();

	if (a == b)	//operator loverloading을 정의해서 사용가능
	{
		cout << "same" << endl;
	}
	else if (a != b)
	{
		cout << "different" << endl;
	}
	cout << "++a" << endl;
	b = ++a;
	a.showCoord();
	b.showCoord();

	cout << "a++" << endl;
	b = a++;
	a.showCoord();
	b.showCoord();



	return 0;
}