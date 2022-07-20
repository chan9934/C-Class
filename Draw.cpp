#include "Draw.h"
#include "Map.h"
#include "Player.h"
#include <iostream>

using namespace std;
void Draw()
{
	for (int Y = 0; Y < 10; ++Y) 
	{
		for (int X = 0; X < 10; ++X)
		{
			if (' ' == KeyPlayer.X && ' ' == KeyPlayer.Y)
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