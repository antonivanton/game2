#include "pch.h"
#include <iostream>
#include<windows.h>
#include <conio.h>

using namespace std;
#define SPACE 32
#define UP 72
#define LEFT 75
#define DOWN 80
#define RIGHT 77


//отображение поля 
const int sizeX = 10;
const int sizeP = 20;
int Array1[sizeX][sizeP];



void Show()
{
	for (int i = 0; i < sizeX; i++) {
		for (int j = 0; j < sizeP; ++j) {

			cout << Array1[i][j] << ends;

		}
		cout << endl;
	}





}

void sizeOfConsole() {
	//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//system("mode con cols=90 lines=30");


}


//передвидение фигур
void MoveToPlus()
{
	




}

// передвижение плюса
void MovePlus()
{




}


// инициализаци

void Initiolize()
{
	for (int i = 0; i < sizeX; i++) {
		for (int j = 0; j < sizeP; ++j) {
			Array1[i][j] = 0;

		}
	}

	int x = 0, y = 0;


	Array1[0][0] = 1;
	Array1[3][2] = 1;
	Array1[6][0] = 1;
	Array1[9][3] = 1;
	Array1[1][18] = 2;
	Array1[3][19] = 2;
	Array1[5][17] = 2;
	Array1[9][19] = 2;
	Array1[4][14] = 3;


		 //логика главной фигуры

}






int main()
{
	sizeOfConsole();
	Initiolize();
	Show();
	
	MoveToPlus(); 
	
	Show();

}



//#include "pch.h"
//#include <iostream>
//#include <conio.h>
//#include <ctime>
//#include <Windows.h>
//#include <stdlib.h> 
//
//
//#define SPACE 32
//#define UP 72
//#define DOWN 80
//#define LEFT 75
//#define RIGHT 77
//
//using namespace std;
//
//// пометка игрового поля
//const int sizeX = 14;
//const int sizeY = 14;
//
//int GameZone[sizeX][sizeY];
//
//void sizeOfConsole() {
//	// ограничение консоли по размеру
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	system("mode con cols=80 lines=25");
//}
//
//// вывод игрового поля
//void Show() {
//
//}
//
//
//// круги и кывадрата двигаються к плюсу
//void MoveToPlus() {
//
//}
//
//// движение плюса
//void MovePlus() {
//
//}
//
//// инициализация кругов и квадратов
//void Initialize() {
//

//
//

//
//int main()
//{
//	sizeOfConsole();
//	Initialize();
//	Show();
//}
