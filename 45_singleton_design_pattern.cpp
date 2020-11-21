/*
	Design pattern: singleton 패턴

	- 클래스로부터 오직 한개의 객체만 생성되도록 하는 방법
*/

#include <iostream>

using namespace std;

class Car
{
private:
	Car() {}
	static Car* instance;
public:
	static Car* getInstance()
	{
		if (instance != nullptr)
		{
			return instance;
		}
		else
		{
			instance = new Car();
			return instance;
		}
	}
};

Car* Car::instance = nullptr;

int main()
{
	Car* c = Car::getInstance();
	Car* d = Car::getInstance();
	Car* e = Car::getInstance();

	cout << "c  addr: " << c << endl;
	cout << "d  addr: " << d << endl;
	cout << "e  addr: " << e << endl;

	return 0;

}