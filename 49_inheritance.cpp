/*
	Inheritance, 상속

	protected 
	 - 외부에서는 private랑 똑같이 동작하지만, 자식에게는 public하게 동작
*/

#include <iostream>

using namespace std;

class Coord_2D
{
//private:
protected:
	int x;
	int y;
public:
	Coord_2D(int _x, int _y) : x(_x), y(_y) 
	{ 
		cout << "Constructor Coord_2D" << endl; 
	}
	~Coord_2D() 
	{
		cout << "Destructor Coord_2D" << endl;
	}
	void showCoord();

};

void Coord_2D::showCoord()
{
	cout << x << ", " << y;
}

//---------------------------------------------------------

class Coord_3D : Coord_2D // public, protected를 상속받겠다. //public Coord_2D //Coord_2D의 public를 상속받겠다
{
private:
	int z;
public:
	Coord_3D(int _x, int _y, int _z) : Coord_2D(_x, _y), z(_z) 
	{ 
		cout << "Constructor Coord_3D" << endl; 
	}
	~Coord_3D()
	{
		cout << "Destructor Coord_3D" << endl;
	}
	void showCoord();
};

void Coord_3D::showCoord()
{
	//showCoord();	//public으로만 상속받으면 이렇게
	cout << x << ", " << y;	//public, protected로 상속받으면 이렇게
	cout << ", " << z << endl;
}

int main()
{
	{
		Coord_3D a(10, 20, 30);
		a.showCoord();	//3D showCoord가 실행 : 자식 클래스의 메소드가 실행됨
  
		Coord_3D b(10, 10, 10);
		//b.showCoord();	//public으로 상속받지 않았기 떄문에 안됨

	}
	
	return 0;
}