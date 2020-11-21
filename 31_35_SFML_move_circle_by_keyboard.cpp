/*
	//31_SFML_move_circle_by_keyboard
	Color class		//�������� ���� ���ؼ� �˾ƺ���

	CircleShape::setPosition(float x, float y)	//������ �ʱ� ��ġ

	RectangleShape, Vector2f		// �簢�� ��� ���� �������� ����

	Event.type, KeyPressed		//�������� ǥ���ϱ� ���� �̺�Ʈ ó��
	Keyboard, isKeyPressed

	CircleShape::move(float offset_x, float offset_y)	//������ ��ġ ����
*/

/*
	//32_SFML_NPC

	NPC, Non-Player Character �����̱�

	�簢���� ����������.
	myRect.move(float offset_x, float offset_y)

	�簢�� �����̴� �ӵ��� �����غ���

	���� ���� �簢���� �����غ���
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
	window.setFramerateLimit(60); //parameter : frame �� / ���� ���� ���� ������

	/*
		CircleShape shape(50.0f, 40);	// Circhleshape(radius(������), pointCount(���� �̷�� �ﰢ���� ��//���� ���� �� ���� ������))
		shape.setFillColor(Color::Green);	//Black, White, Red, Green, Blue, Yellow, Magenta, Cyan ����� �ִ�
		shape.setPosition(320.0f-50.0f, 480.0f-50.0f);	//��ǥ�� ���� �ѷ��δ� �簢�� ���� ����̱� ������ �߽���ġ�� ���߱� ���ؼ� -50.0f�� ���ش�
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