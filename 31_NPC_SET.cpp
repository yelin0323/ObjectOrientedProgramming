#include "31_NPC_SET.h"

NPC_SET::NPC_SET(int num)
{
	int inc = 0;
	sf::Color colors[3] = { Color::Red, Color::Cyan, Color::Magenta };

	for (int i = 0; i < num; i++)
	{
		NPC npc(30.0f + inc, 30.0f + inc, (i + 1) * 2, colors[i % 3]);
		npcs.push_back(npc);
		inc += 20;
	}
}

void NPC_SET::update()
{
	for (auto& _e : npcs)
	{
		_e.update();
	}
}

void NPC_SET::draw(RenderWindow& _window)
{
	for (auto& _e : npcs)
	{
		_e.draw(_window);
	}
}

void NPC_SET::checkHit(FloatRect _rect)
{
	for (auto& _e : npcs)
	{
		if (_rect.intersects(_e.getArea()) == true)
		{
			_e.destroyed = true;
		}
	}
}