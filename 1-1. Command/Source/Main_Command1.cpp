/*
*
* Github: https://github.com/orangelie/GamePatterns
* Author: orangelie
* // [ Game Programming Patterns ]
* // MIT Licenss
*
*/





#include "../Header/Input/InputHandler.h"

int main() {
	const char keySet[] = { BUTTON_X, BUTTON_Y, BUTTON_A, BUTTON_B };
	int keyIndex = 0;

	InputHandler iHandler;

	for (;;) {
		gPressedButton = keySet[keyIndex];

		Command* command = iHandler.handleInput();

		if (command != nullptr) {
			char xInput = _getch();
			switch (xInput) {
			case 'z': command->execute(); break;
			case 'x': command->undo(); break;

			case 'w': keyIndex = 1; break;
			case 's': keyIndex = 2; break;
			case 'a': keyIndex = 0; break;
			case 'd': keyIndex = 3; break;

			default: break;
			}

			delete command;
		}
	}
}