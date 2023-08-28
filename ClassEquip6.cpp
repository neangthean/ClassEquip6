#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>
#include "ClassEquipment.h"
#include "ClassDataUser.h"
#include "Owner.h"
using namespace std;

void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main() {
	system("color 71");
	string  rowB(11, 205), rowCase(50, 205);
	char colB = 219;
	char cornerBUL = 201, cornerBUR = 187, cornerBLL = 200, cornerBLR = 188;
	ClassDataUser user;
	Owner own;
	string choose;
	int ch;
again:
	system("cls");
	gotoxy(72, 5);
	cout << cornerBUL << rowB << cornerBUR << endl;
	gotoxy(72, 6);
	cout << colB << " Home Page " << colB << endl;
	gotoxy(72, 7);
	cout << cornerBLL << rowB << cornerBLR << endl << endl;
	int y1 = 10, y2 = 11, y3 = 12;
	for (int i = 1; i <= 4; i++) {
		gotoxy(52, y1);
		cout << cornerBUL << rowCase << cornerBUR << endl;
		gotoxy(52, y2);
		cout << colB << setw(51) << colB << endl;
		gotoxy(52, y3);
		cout << cornerBLL << rowCase << cornerBLR << endl;
		y1 += 4;
		y2 += 4;
		y3 += 4;
	}
	gotoxy(72, 11);
	cout << "[1] Register" << endl;
	gotoxy(72, 15);
	cout << "[2] Login" << endl;
	gotoxy(72, 19);
	cout << "[3] Owner" << endl;
	gotoxy(72, 23);
	cout << "[4] Exit" << endl << endl;
	cout << "Input your choice: ";
	fflush(stdin); getline(cin, choose);
	if (choose == "1") {
		system("cls");
		user.userRegister(); // for users to register account and then manage data on their account
	}
	else if (choose == "2") {
		system("cls");
		user.userLogin(); // for users to login their account and then manage data on their account
	}
	else if (choose == "3") {
		system("cls");
		own.loginSystem(); // for only admin/owner to manage data of all users data and also manage users info
		//dataUser.userInfo();
		//dataUser.display();
	}
	else if (choose == "4") {
		exit(0);
	}
	else {
		system("cls");
		cout << "You input invalid choice!" << endl;
	}
	cout << "\n<< Press Enter to process [Home Page] again >>" << endl;
	ch = _getch();
	if (ch == 13) {
		goto again;
	}
	return 0;
}