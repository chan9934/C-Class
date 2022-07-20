#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <algorithm>
#include "Draw.h"
#include "Input.h"
#include "Process.h"
#include "Map.h"
#include "Player.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using namespace std;







void Swap(int* A, int* B);

int main()
{
	//int Count = 100;
	//cin >> Count;
	//int* Scores = new int[Count];
	//


	//for (int i = 0; i < Count; ++i)
	//{
	//	Scores[i] = i;
	//	cout << Scores[i] << endl;
	//}
	//delete[] Scores;


	//char Greeting[6];
	//Greeting[0] = 'H';
	//Greeting[1] = 'e';
	//Greeting[2] = 'l';
	//Greeting[3] = 'l';
	//Greeting[4] = 'o';
	//Greeting[5] = '\0';/*
	//cout << Greeting << endl;*/

	//string Greeting2 = "Hello";
	//cout << Greeting2[6];

	//beginPlay()

	MyPlayer = new Player();
	MyPlayer->X = 1;
	MyPlayer->Y = 1;
	if (MyPlayer)
	{
		MyPlayer->X = 1;
		MyPlayer->Y = 1;
	}
	
	while (true)
	{
		int KeyCode = Input();
		Process(KeyCode);
		Draw();
	}

	delete MyPlayer;
	MyPlayer = nullptr;

}
void Swap(int* A, int* B)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;


}

