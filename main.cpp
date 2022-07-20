#include <iostream>
#include <vector>
#include <conio.h>



using std::cout;
using std::endl;
using std::cin;









//
//int MAP[10][10] =
//{
//	{1,1,1,1,1,1,1,1,1,1},
//	{1,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,1},
//	{1,1,1,1,1,1,1,1,1,1}
//};
//
//int main() //entry point ¡¯¿‘¡°
//{
//
//	int PlayerX = 1;
//	int PlayerY = 1;
//	for( ;;)
//	{
//
//		
//		char Key = ' ';
//		//input()
//		Key = _getch();
//		//process()
//		if (Key == 'w')
//		{
//			--PlayerY;
//		}
//		else if (Key == 's')
//		{
//			++PlayerY;
//		}
//		else if (Key == 'a')
//		{
//			--PlayerX;
//		}
//		else if (Key == 'd')
//		{
//			++PlayerX;
//		}
//
//		system("cls");
//		//render();
//		for (int Y = 0; Y < 10; ++Y)
//		{
//			for (int X = 0; X < 10; ++X)
//			{
//				if (X == PlayerX && PlayerY == Y)
//				{
//					cout << 'P';
//				}
//				else if (MAP[Y][X] == 0)
//				{
//					cout << ' ';
//				}
//				else if (MAP[Y][X] == 1)
//				{
//					cout << '*';
//				}
//				cout << ' ';
//			}
//			cout << endl;
//		}
//	}
//
//	return 0;
//}