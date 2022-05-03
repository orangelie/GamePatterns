/*
* 
* Github: https://github.com/orangelie/GamePatterns
* Author: orangelie
* // [ Game Programming Patterns ]
* // MIT Licenss
* 
*/





#pragma once

static int gPressedButton;

#define BUTTON_X ('X')
#define BUTTON_Y ('Y')
#define BUTTON_A ('A')
#define BUTTON_B ('B')

#define Print(message) std::cout << message << std::endl

#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <vector>

#include <conio.h>

#define BREAKING int _ = _getch()

bool isPressed(int _btnPressedState) {
	if (gPressedButton == _btnPressedState) return true;
	return false;
}