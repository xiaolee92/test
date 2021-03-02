#include <iostream>
#include <string>
#include "Typewrite.h"
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main() {
	Typewrite thingsToType("Hello World!!!!!!");
	Typewrite secondToType("And Goodbye!");

	thingsToType.TypewriteEffect();
	secondToType.TypewriteEffect();
	
	return 0;
}