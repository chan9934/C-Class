#include "Process.h"

void Process(int KeyCode)
{

	{
		if ('w' == KeyCode || 'W' == KeyCode)
		{
			--KeyPlayer.Y;
		}
		else if ('a' == KeyCode || 'A' == KeyCode)
		{
			--KeyPlayer.X;
		}
		if ('s' == KeyCode || 'S' == KeyCode)
		{
			++KeyPlayer.Y;
		}
		if ('d' == KeyCode || 'D' == KeyCode)
		{
			++KeyPlayer.X;
		}
	}
}
