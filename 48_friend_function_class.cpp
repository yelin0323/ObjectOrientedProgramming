/*
	Friend function

	Friend class
*/
#include <iostream>

using namespace std;

//---------------------------------------------------------
class Coord_2D
{
	friend void outSideShowCoord(const Coord_2D& _c);	//outSideShowCoord�Լ������� private������ ���� ����
	friend class SHOW;	//class SHOW������ private������ ���� ����
private:
	int x;
	int y;
public:
	Coord_2D(int _x, int _y) : x(_x), y(_y) {}
	void showCoord();

};

void Coord_2D::showCoord()
{
	cout << x << ", " << y << endl;
}

//-----------------------------------------------------------
class SHOW
{
public:
	void showCoord(const Coord_2D& _c);
};


void SHOW::showCoord(const Coord_2D& _c)
{
	cout << _c.x << ", " << _c.y << endl;
	return;
}

//----------------------------------------------------------

void outSideShowCoord(const Coord_2D& _c)
{
	//������ �ܺο��� Coord_2D�� x,y�� ����� �� ����.
	cout << _c.x << ", " << _c.y << endl;
	return;
}


int main()
{
	Coord_2D a(10, 10);

	outSideShowCoord(a);
	
	SHOW s;
	s.showCoord(a);

	return 0;
}