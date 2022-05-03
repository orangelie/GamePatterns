/*
*
* Github: https://github.com/orangelie/GamePatterns
* Author: orangelie
* // [ Game Programming Patterns ]
* // MIT Licenss
*
*/





#pragma once

#include "Command.h"
#include "../Actor/Unit.h"

class MoveUnitCommand : public Command {
public:
	MoveUnitCommand(Unit* unit, int x, int y) :
		unit(unit), x(x), y(y), before_x(0), before_y(0) {}

	virtual void execute() {
		before_x = unit->x();
		before_y = unit->y();
		unit->moveTo(x, y);

		Print("execute !");
		Print("현재 좌표: " << '(' << unit->x() << ',' << unit->y() << ')' << '\n');
	}

	virtual void undo() {
		unit->moveTo(before_x, before_y);

		Print("undo !");
		Print("현재 좌표: " << '(' << unit->x() << ',' << unit->y() << ')' << '\n');
	}

private:
	Unit* unit;
	int x, y, before_x, before_y;

};