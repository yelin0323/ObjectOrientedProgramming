/*
	Inheritance, ���
	protected
	method Overriding

	�θ�Ŭ������ overriden�� method ȣ��

	public ���: �θ� class���� ����� ���� �� �� ������ ������ ��ӵ�
	  ex) �θ� Ŭ������ protected, public�� ������ protected�� ��� //�ܺο��� �θ� Ŭ������ method�� �� �� ����.
	  ex) �θ� Ŭ������ public�� ������ public���� ��� //�ܺ�(ex.main())���� �θ� Ŭ������ method�� �� �� �ִ�.
	        //-----------------------------------------------------------------------------
				Coord_3D a(10, 20, 30);
				a.showCoord();

				a.Coord_2D::showCoord();	//public�� ��� ����
			//-----------------------------------------------------------------------------
	protected ���:
	private ���:
	default ��� : private

	������ ���� : private > protected > public
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

class Coord_3D : public Coord_2D //Coord_2D�� public�� ��ӹްڴ�
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
		a.showCoord();

		// �θ�Ŭ���� Coord_2D�� method showCoord()�� ȣ���ϴ� ���
		a.Coord_2D::showCoord();

	}

	return 0;
}