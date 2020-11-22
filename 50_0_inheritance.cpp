/*
	Inheritance, 상속
	protected
	method Overriding

	부모클래스의 overriden된 method 호출

	public 상속: 부모 class에서 선언된 변수 중 더 강력한 것으로 상속됨
	  ex) 부모 클래스에 protected, public이 있으면 protected로 상속 //외부에서 부모 클래스의 method를 쓸 수 없다.
	  ex) 부모 클래스에 public만 있으면 public으로 상속 //외부(ex.main())에서 부모 클래스의 method를 쓸 수 있다.
	        //-----------------------------------------------------------------------------
				Coord_3D a(10, 20, 30);
				a.showCoord();

				a.Coord_2D::showCoord();	//public인 경우 가능
			//-----------------------------------------------------------------------------
	protected 상속:
	private 상속:
	default 상속 : private

	강력한 순서 : private > protected > public
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
	cout << x << ", " << y << endl;
}

//---------------------------------------------------------

class Coord_3D : public Coord_2D //Coord_2D의 public를 상속받겠다
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
		a.showCoord();

		// 부모클래스 Coord_2D의 method showCoord()를 호출하는 방법
		a.Coord_2D::showCoord();

	}

	return 0;
}