/*
	Inheritance, ���

	protected 
	 - �ܺο����� private�� �Ȱ��� ����������, �ڽĿ��Դ� public�ϰ� ����
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

class Coord_3D : Coord_2D // public, protected�� ��ӹްڴ�. //public Coord_2D //Coord_2D�� public�� ��ӹްڴ�
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
	//showCoord();	//public���θ� ��ӹ����� �̷���
	cout << x << ", " << y;	//public, protected�� ��ӹ����� �̷���
	cout << ", " << z << endl;
}

int main()
{
	{
		Coord_3D a(10, 20, 30);
		a.showCoord();	//3D showCoord�� ���� : �ڽ� Ŭ������ �޼ҵ尡 �����
  
		Coord_3D b(10, 10, 10);
		//b.showCoord();	//public���� ��ӹ��� �ʾұ� ������ �ȵ�

	}
	
	return 0;
}