/*
	//31_SFML_move_circle_by_keyboard
	Color class		//여러가지 색에 대해서 알아보기

	CircleShape::setPosition(float x, float y)	//모형의 초기 위치

	RectangleShape, Vector2f		// 사각형 등과 같은 여러가지 모형

	Event.type, KeyPressed		//움직임을 표현하기 위한 이벤트 처리
	Keyboard, isKeyPressed

	CircleShape::move(float offset_x, float offset_y)	//모형의 위치 변경
*/

/*
	//32_SFML_NPC

	NPC, Non-Player Character 움직이기

	사각형을 움직여보자.
	myRect.move(float offset_x, float offset_y)

	사각형 움직이는 속도를 조절해보자

	여러 개의 사각형을 관리해보자
	- vector

*/

/*
	//33_SFML_class_NPC_class_NPC_SET

	class for NPC

	position x,y
	speed s
	own color
*/

#include <SFML/Graphics.hpp>
//#include <vector>
#include "31_NPC.h"
#include "31_NPC_SET.h"
#include "31_GUN.h"

//using namespace sf;
//using namespace std;


int main()
{
	RenderWindow window(VideoMode(640, 480), "Hello SFML");
	window.setFramerateLimit(60); //parameter : frame 수 / 수가 높을 수록 빠르게

	/*
		CircleShape shape(50.0f, 40);	// Circhleshape(radius(반지름), pointCount(원을 이루는 삼각형의 수//많을 수록 더 원에 가깝다))
		shape.setFillColor(Color::Green);	//Black, White, Red, Green, Blue, Yellow, Magenta, Cyan 등등이 있다
		shape.setPosition(320.0f-50.0f, 480.0f-50.0f);	//좌표가 원을 둘러싸는 사각형 왼쪽 상단이기 때문에 중심위치를 맞추기 위해서 -50.0f를 해준다
	*/
	
	GUN gun;
	NPC_SET npcs(6);	

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::KeyPressed:
				if (Keyboard::isKeyPressed(Keyboard::Left) == true)
				{
					gun.moveLeft();
				}
				else if (Keyboard::isKeyPressed(Keyboard::Right) == true)
				{
					gun.moveRight();
				}
				else if (Keyboard::isKeyPressed(Keyboard::Space) == true)
				{
					gun.fireBullet();
				}
				break;

			default:
				break;

			}
			
		}

		gun.update(npcs);
		npcs.update();


		window.clear();
		gun.draw(window);
		npcs.draw(window);

		window.display();
	}

	return 0;
}