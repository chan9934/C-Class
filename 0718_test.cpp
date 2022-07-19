#include<iostream>
#include<conio.h>

using std::cout;
using std::endl;

int MAP[10][10]
{
	 {1,1,1,1,1,1,1,1,1,1}
	,{1,0,0,0,0,0,0,0,0,1}
	,{1,0,0,0,0,0,0,0,0,1}
	,{1,0,0,0,0,0,0,0,0,1}
	,{1,0,0,0,0,0,0,0,0,1}
	,{1,0,0,0,0,0,0,0,0,1}
	,{1,0,0,0,0,0,0,0,0,1}
	,{1,0,0,0,0,0,0,0,0,1}
	,{1,0,0,0,0,0,0,0,0,1}
	,{1,1,1,1,1,1,1,1,1,1}
};

int main()
{
	int XLocation = 1;
	int YLocation = 1;

	for (; ;)
	{
		char Key = ' ';
		Key = _getch();
		system("cls");
		switch (Key)
		{
		case 'w': 
			--YLocation;
			if (1 == MAP[XLocation][YLocation])
			{
				++YLocation;
			}
			break;
		case 's': 
			++YLocation;
			if (1 == MAP[XLocation][YLocation])
			{
				--YLocation;
			}
			break;
		case 'd':
			++XLocation;
			if (1 == MAP[XLocation][YLocation])
			{
				--XLocation;
			}
			break;
		case 'a':
			--XLocation;
			if (1 == MAP[XLocation][YLocation])
			{
				++XLocation;
			}
			break;
		default:
			break;
		}

		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				if (j == XLocation && i == YLocation)
				{
					cout << 'P';
				}
				else if (1 == MAP[i][j])
				{
					cout << '*';
				}
				else if (0 == MAP[i][j])
				{
					cout << ' ';
				}
			}
			cout << endl;
		}
	}
}