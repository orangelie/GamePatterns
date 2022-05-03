/*
*
* Github: https://github.com/orangelie/GamePatterns
* Author: orangelie
* // [ Game Programming Patterns ]
* // MIT Licenss
*
*/





#pragma once

#include "../Command/MoveUnitCommand.h"

class InputHandler {
public:
	Command* handleInput();
	Unit* getSelectedUnit() const;

private:
	std::unique_ptr<Unit> unit_ = std::make_unique<Unit>();

};


Command* InputHandler::handleInput() {
	Unit* unit = getSelectedUnit();

	if (isPressed(BUTTON_A)) {
		int y = unit->y() - 1;
		return new MoveUnitCommand(unit, unit->x(), y);
	}
	
	else if (isPressed(BUTTON_X)) {
		int x = unit->x() - 1;
		return new MoveUnitCommand(unit, x, unit->y());
	}

	else if (isPressed(BUTTON_Y)) {
		int y = unit->y() + 1;
		return new MoveUnitCommand(unit, unit->x(), y);
	}

	else if (isPressed(BUTTON_B)) {
		int x = unit->x() + 1;
		return new MoveUnitCommand(unit, x, unit->y());
	}

	return nullptr;
}

Unit* InputHandler::getSelectedUnit() const {
	return unit_.get();
}