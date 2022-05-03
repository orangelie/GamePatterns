/*
*
* Github: https://github.com/orangelie/GamePatterns
* Author: orangelie
* // [ Game Programming Patterns ]
* // MIT Licenss
*
*/





#pragma once

#include "CppUtils.h"

class Unit {
public:
	void moveTo(int x, int y) {
		PositionX = x;
		PositionY = y;
	}

	int x() const {
		return PositionX;
	}

	int y() const {
		return PositionY;
	}

private:
	int PositionX;
	int PositionY;

};