#include <iostream>
#include "Typewrite.h"
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

Typewrite::Typewrite(std::string newText)
{
	myText = newText;
}

std::string Typewrite::get_text() {
	return myText;
}

void Typewrite::TypewriteEffect() {
	std::string mainText = myText;
	std::string displayText = "";

	bool running = true;
	bool reverse = false;

	int typewriteDelay = 100;

	while (running == true) {
		if (!reverse) {
			for (int i = 0; i < mainText.size(); i++) {
				if (displayText.size() >= mainText.size()) {
					Sleep(typewriteDelay);
					reverse = true;
				}
				else {
					displayText.push_back(mainText[i]);
					Sleep(typewriteDelay);
					std::cout << displayText[i] << "";
				}
			}
		}
		else {
			for (int i = 0; i < mainText.size(); i++) {
				system("CLS");
				if (displayText.size() <= 0) {
					running = false;
				}
				else {
					displayText.pop_back();
				}
				std::cout << displayText;
				Sleep(typewriteDelay);
			}
		}
	}
}