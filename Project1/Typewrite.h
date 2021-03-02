#pragma once
#include <string>

class Typewrite
{
	std::string myText;

public:
	Typewrite(std::string newText);
	std::string get_text();
	void TypewriteEffect();
};
