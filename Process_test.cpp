#include "Process_test.h"

#include "Input_test.h"
#include "Player_test.h"
#include "Map_test.h"

void Process(int Key)
{
	
	switch (Key)
	{
	case 'W':
		--PL->YPlayer;
		if (Predict(PL->XPlayer, PL->YPlayer))
		{
			++PL->YPlayer;
		}
		
		break;
	case 'w':
		--PL->YPlayer;

		if (Predict(PL->XPlayer, PL->YPlayer))
		{
			++PL->YPlayer;
		}
		break;

	case 'S':
		++PL->YPlayer;

		if (Predict(PL->XPlayer, PL->YPlayer))
		{
			--PL->YPlayer;
		}
		break;
	case 's':
		++PL->YPlayer;

		if (Predict(PL->XPlayer, PL->YPlayer))
		{
			--PL->YPlayer;
		}
		break;

	case 'D':

		++PL->XPlayer;

		if (Predict(PL->XPlayer, PL->YPlayer))
		{
			--PL->XPlayer;
		}
		break;
	case 'd':

		++PL->XPlayer;

		if (Predict(PL->XPlayer, PL->YPlayer))
		{
			--PL->XPlayer;
		}
		break;

	case 'A':
		--PL->XPlayer;

		if (Predict(PL->XPlayer, PL->YPlayer))
		{
			++PL->XPlayer;
		}
		break;
	case 'a':
		--PL->XPlayer;

		if (Predict(PL->XPlayer, PL->YPlayer))
		{
			++PL->XPlayer;
		}
		break;
	default:
		break;

	}
	
}

bool Predict(int YFuture, int XFuture)
{
	if ('*' == Map[YFuture][XFuture])
	{
		return true;
	}
	return false;
}