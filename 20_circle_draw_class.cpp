#include <iostream>
#include <windows.h>

using namespace std;

//간단한 객체의 구현과 그림 그리기

class MY_CIRCLE
{
public:
	int left, right, top, bottom;

	MY_CIRCLE(int l, int t, int r, int b) :left(l), top(t), right(r), bottom(b)
	{
	}
	
	void do_draw()
	{
		HDC hdc = GetWindowDC(GetForegroundWindow());	//그림을 그리기 위해 윈도우 창을 가져오는 함수들(인터넷 찾아봐라)
		Ellipse(hdc, left, top, right, bottom);		//타원을 그려
	}

	MY_CIRCLE Clone()
	{
		return *this;
	}

	MY_CIRCLE& CloneR()
	{
		return *this;
	}

	MY_CIRCLE* CloneP()
	{
		return this;
	}
};

int main()
{
	MY_CIRCLE c1(100, 100, 180, 180);
	MY_CIRCLE c2(200, 200, 300, 300);

	c1.do_draw();
	c2.do_draw();

	/*
	cout << "c1 address: " << &c1 << endl;
	cout << "c2 address: " << &c2 << endl;

	MY_CIRCLE c1c = c1.Clone();
	MY_CIRCLE c2c = c2.Clone();
	
	cout << "c1c address: " << &c1c << endl;
	cout << "c2c address: " << &c2c << endl;

	c1c.left = 50;

	cout << "c1 left: " << c1.left << endl;
	cout << "c1c left: " << c1c.left << endl;

	MY_CIRCLE& c1r = c1.CloneR();
	cout << "c1r address: " << &c1r << endl;
	cout << "c1r left: " << c1r.left << endl;
	
	*/
	

	return 0;
}