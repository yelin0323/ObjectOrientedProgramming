/*
	Simple Fast Multimedia Library

	SFML�� �̿��� C++ �������α׷� �����
*/

#include <iostream>
#include <SFML/Graphics.hpp>	//SFML include file�ȿ� Graphics.hpp
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Main.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(640, 480), "Hello SFML");
	CircleShape shape(100.0f);
	shape.setFillColor(Color::Green);

	while (window.isOpen())
	{

		window.clear();
		window.draw(shape);
		window.display();
	}


	return 0;
}