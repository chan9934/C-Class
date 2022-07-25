#include <iostream>
#include <conio.h>
#include "Render_test.h"
#include "Input_test.h"
#include "Map_test.h"
#include "Player_test.h"
#include "Process_test.h"

using std::endl;
using std::cin;
using std::cout;

int main()
{

	PL = new PlayerLocate();
	PL->XPlayer = 1;
	PL->YPlayer = 1;

	while (true)
	{

		int KeyKey = Key();
		if ('Q' == KeyKey || 'q' == KeyKey)
		{
			delete PL;
			PL = nullptr;
			break;
		}
		Process(KeyKey);
		Render();
		
	}

	return 0;
	
}