#include <Arduboy2.h>

#include "CircleFilter.h"
#include "LetterM.h"

Arduboy2 arduboy;

void setup()
{
	arduboy.begin();
}

void loop()
{
	if(!arduboy.nextFrame())
		return;

	arduboy.clear();

	Sprites::drawOverwrite(0, 0, LetterM, 0);
	Sprites::drawErase(0, 0, CircleFilter, 0);

	arduboy.display();
}