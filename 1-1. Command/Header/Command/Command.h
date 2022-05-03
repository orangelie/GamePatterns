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
#include "../Actor/Unit.h"

class Command {
public:
	virtual ~Command() {}
	virtual void execute() = 0;
	virtual void undo() = 0;

};