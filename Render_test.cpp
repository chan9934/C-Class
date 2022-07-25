#include "Render_test.h"
#include "Map_test.h"
#include "Player_test.h"
#include <iostream>

using std::cout;
using std::endl;
	
void Render()
{
	system("cls");
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (Y == PL->YPlayer && X == PL->XPlayer)
			{
				cout << 'P' << ' ';
			}
			else
			{
				cout << Map[Y][X] << ' ';
			}

		}
		cout << endl;
	}
}