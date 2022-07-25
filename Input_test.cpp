#include "Input_test.h"
#include <iostream>
#include <conio.h>

using std::cin;
int Key()
{
	int KeyNote{};
	KeyNote = _getch();
	return KeyNote;
}