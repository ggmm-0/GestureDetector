#include "KeyEvent.hpp"

KeyEvent::KeyEvent(int keyCode) : keyCode(keyCode) {}

void KeyEvent::trigger() {
	INPUT input[2];
	input[0] = createKeyDownInput();
	input[1] = createKeyUpInput();
	SendInput(2, input, sizeof(INPUT));
}

INPUT KeyEvent::createKeyDownInput() {
	return createKeyInput(keyCode);
}

INPUT KeyEvent::createKeyUpInput() {
	INPUT input = createKeyInput(keyCode);
	input.ki.dwFlags = KEYEVENTF_KEYUP;
	return input;
}

INPUT KeyEvent::createKeyInput(int keyCode) {
	INPUT input;
	memset(&input, 0, sizeof(input));
	input.type = INPUT_KEYBOARD;
	input.ki.wVk = keyCode;
	input.ki.dwFlags = 0;
	input.ki.time = 0;
	input.ki.dwExtraInfo = 0;
	return input;
}
