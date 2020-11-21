#pragma once

#include <SFML/Graphics.hpp>
#include "31_NPC_SET.h"

using namespace sf;

class GUN
{
private:
	CircleShape gun;
	CircleShape bullet;
	bool showBullet;
public:
	GUN();
	void moveLeft();
	void moveRight();
	void fireBullet();
	void update(NPC_SET& npcs);
	void draw(RenderWindow& _winodw);
};