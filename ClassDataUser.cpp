#define _CRT_SECURE_NO_WARNINGS
#include "ClassDataUser.h"
#include "ClassEquipment.h"
#include <fstream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <conio.h>

ClassDataUser::ClassDataUser(int no, string userName, string buildingName, string email, string phoneNum, string password, string fileName, string date1, int hour1, int minute1, int second1) {
	this->no = no;
	this->userName = userName;
	this->buildingName = buildingName;
	this->email = email;
	this->phoneNum = phoneNum;
	this->password = password;
	this->fileName = fileName;
	this->date1 = date1;
	this->hour1 = hour1;
	this->minute1 = minute1;
	this->second1 = second1;
}
ClassDataUser::ClassDataUser() {
	this->no = NULL;
	this->userName = "NULL";
	this->buildingName = "NULL";
	this->email = "NULL";
	this->phoneNum = "NULL";
	this->password = "NULL";
	this->fileName = "NULL";
	this->date1 = "NULL";
	this->hour1 = NULL;
	this->minute1 = NULL;
	this->second1 = NULL;
}
void ClassDataUser::setNo(int value) {
	no = value;
}
int ClassDataUser::getNo()const {
	return no;
}
void ClassDataUser::setUserName(string& value) {
	userName = value;
}
string ClassDataUser::getUserName()const {
	return userName;
}
void ClassDataUser::setBuildingName(string& value) {
	buildingName = value;
}
string ClassDataUser::getBuildingName()const {
	return buildingName;
}
void ClassDataUser::setEmail(string& value) {
	email = value;
}
string ClassDataUser::getEmail()const {
	return email;
}
void ClassDataUser::setPhoneNum(string& value) {
	phoneNum = value;
}
string ClassDataUser::getPhoneNum()const {
	return phoneNum;
}
void ClassDataUser::setPassword(string& value) {
	password = value;
}
string ClassDataUser::getPassword()const {
	return password;
}
void ClassDataUser::setFileName(string& value) {
	fileName = value;
}
string ClassDataUser::getFileName()const {
	return fileName;
}
void ClassDataUser::setDate1(const string& value) {
	date1 = value;
}
string ClassDataUser::getDate1()const {
	return date1;
}
void ClassDataUser::setHour1(int value) {
	hour1 = value;
}
int ClassDataUser::getHour1()const {
	return hour1;
}
void ClassDataUser::setMinute1(int value) {
	minute1 = value;
}
int ClassDataUser::getMinute1()const {
	return minute1;
}
void ClassDataUser::setSecond1(int value) {
	second1 = value;
}
int ClassDataUser::getSecond1()const {
	return second1;
}

bool is_integer(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (!isdigit(str[i])) {
			return false;
		}
	}
	return true;
}
void gotoxy1(int x, int y)           //definition of gotoxy function//                                               
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

string row7U(7, 196), row15U(15, 196), row23U(23, 196), row31U(31, 196), row47U(47, 196), row55U(55, 196), row63U(63, 196);
char col1 = 179;
char cornerUL1 = 218, cornerUR1 = 191, cornerLL1 = 192, cornerLR1 = 217;
char midd1 = 197, middO1 = 194, middU1 = 193, middL1 = 195, middR1 = 180;
string RowCase1(50, 205), rowBox1(44, 196), RowB1(8, 205);
char ColCase1 = 219, colCase1 = 186;
char cornerULCase1 = 201, cornerURCase1 = 187, cornerLLCase1 = 200, cornerLRCase1 = 188;

ClassDataUser user[1000];
ClassDataUser userCom[1000];
ClassEquipment eq;
void ClassDataUser::userRegister() {
	int id = 0, i, j;
	char ch, chh, passwordA[100], passwordB[100];
	string choose;
	string userName1, buildingName1, email1, phoneNum1, password1, password2, fileName1;
	string RowR1(10, 205); // row register
	fstream readNoUser;
	readNoUser.open("all_user.bin", ios::in | ios::binary);
	while (readNoUser.read((char*)&user[id], sizeof(ClassDataUser))) {} // read data from file and read until the end and get the last data
	id = user[id].getNo(); // the last data
	readNoUser.close();
	id++;
againA:
	//cout << "\n";
	cout << setw(53) << cornerULCase1 << RowCase1 << cornerURCase1 << endl;
	for (int i = 1; i <= 40; i++) {
		cout << setw(53) << ColCase1 << setw(51) << ColCase1 << endl;
	}
	cout << setw(53) << cornerLLCase1 << RowCase1 << cornerLRCase1 << endl;
	gotoxy1(72, 0);
	cout << cornerULCase1 << RowR1 << cornerURCase1 << endl;
	gotoxy1(72, 1);
	cout << ColCase1 << " Register " << ColCase1 << endl;
	gotoxy1(72, 2);
	cout << cornerLLCase1 << RowR1 << cornerLRCase1 << endl;
	int y1 = 4, y2 = 5, y3 = 6;
	for (int i = 1; i <= 7; i++) {
		gotoxy1(55, y1);
		cout << cornerUL1 << rowBox1 << cornerUR1 << endl;
		gotoxy1(55, y2);
		cout << col1 << setw(45) << col1 << endl;
		gotoxy1(55, y3);
		cout << cornerLL1 << rowBox1 << cornerLR1 << endl;
		y1 += 5;
		y2 += 5;
		y3 += 5;
	}
	gotoxy1(55, 3);
	cout << "Username: ";
	gotoxy1(55, 8);
	cout << "Building Name: ";
	gotoxy1(55, 13);
	cout << "Email(...@gmail.com): ";
	gotoxy1(55, 18);
	cout << "Phone Number: ";
	gotoxy1(55, 23);
	cout << "Password: ";
	gotoxy1(55, 28);
	cout << "Comfirm Password: ";
	gotoxy1(55, 33);
	cout << "File Name: ";
	gotoxy1(55, 37);
	cout << cornerULCase1 << RowB1 << cornerURCase1 << setw(16) << cornerULCase1 << RowB1 << cornerURCase1 << " " << cornerULCase1 << RowB1 << cornerURCase1 << endl;
	gotoxy1(55, 38);
	cout << colCase1 << " RESET  " << colCase1 << setw(16) << colCase1 << " CANCEL " << colCase1 << " " << colCase1 << "   OK   " << colCase1 << endl;
	gotoxy1(55, 39);
	cout << cornerLLCase1 << RowB1 << cornerLRCase1 << setw(16) << cornerLLCase1 << RowB1 << cornerLRCase1 << " " << cornerLLCase1 << RowB1 << cornerLRCase1 << endl;

	user[id].setNo(id);
again0:
	fstream readUsername;
	readUsername.open("all_user.bin", ios::in | ios::binary);
	gotoxy1(57, 5);
	fflush(stdin); getline(cin, userName1); // userName1.length() should be 13 in order to fit with size of table
	if (userName1.empty()) {
		goto again0;
	}
	while (readUsername.read((char*)&userCom[id], sizeof(ClassDataUser))) {
		if (userCom[id].getUserName() == userName1) {
			readUsername.close();
			goto again0;
		}
	}
	readUsername.close();
again1:
	fstream readBuildingName;
	readBuildingName.open("all_user.bin", ios::in | ios::binary);
	gotoxy1(57, 10);
	fflush(stdin); getline(cin, buildingName1); // buildingName1.length() should be 13
	if (buildingName1.empty()) {
		goto again1;
	}
	// read data from file "all_user.bin" to compare new data and old data
	while (readBuildingName.read((char*)&userCom[id], sizeof(ClassDataUser))) {
		if (userCom[id].getBuildingName() == buildingName1) {
			readBuildingName.close();
			goto again1;
		}
	}
	readBuildingName.close();
again2:
	fstream readEmail;
	readEmail.open("all_user.bin", ios::in | ios::binary);
	gotoxy1(57, 15);
	fflush(stdin); getline(cin, email1); // email1.length() should be 19
	if (email1.empty()) {
		goto again2;
	}
	while (readEmail.read((char*)&userCom[id], sizeof(ClassDataUser))) {
		if (userCom[id].getEmail() == email1) {
			readEmail.close();
			goto again2;
		}
	}
	readEmail.close();
again3:
	fstream readPhoneNum;
	readPhoneNum.open("all_user.bin", ios::in | ios::binary);
	gotoxy1(57, 20);
	fflush(stdin); getline(cin, phoneNum1); // phoneNum1.length() should be 13
	if (phoneNum1.empty()) {
		goto again3;
	}
	if (!is_integer(phoneNum1)) {
		goto again3;
	}
	while (readPhoneNum.read((char*)&userCom[id], sizeof(ClassDataUser))) {
		if (userCom[id].getPhoneNum() == phoneNum1) {
			readPhoneNum.close();
			goto again3;
		}
	}
	readPhoneNum.close();
again4:
	gotoxy1(57, 25);
	//fflush(stdin); getline(cin, password1); // password1.length() should be 13
	for (i = 0;;) {
		ch = _getch();
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
			passwordA[i] = ch;
			++i;
			cout << "*";
		}
		if (ch == '\b' && i >= 1) {
			cout << "\b \b";
			--i;
		}
		if (ch == '\r') {
			passwordA[i] = '\0';
			break;
		}
	}
	password1 = string(passwordA);
	if (password1.empty()) {
		goto again4;
	}
again5:
	gotoxy1(57, 30);
	for (j = 0;;) {
		chh = _getch();
		if ((chh >= 'a' && chh <= 'z') || (chh >= 'A' && chh <= 'Z') || (chh >= '0' && chh <= '9')) {
			passwordB[j] = chh;
			++j;
			cout << "*";
		}
		if (chh == '\b' && j >= 1) {
			cout << "\b \b";
			--j;
		}
		if (chh == '\r') {
			passwordB[j] = '\0';
			break;
		}
	}
	password2 = string(passwordB);
	if (password2.empty()) {
		goto again5;
	}
again6:
	fstream readFileName;
	readFileName.open("all_user.bin", ios::in | ios::binary);
	gotoxy1(57, 35);
	fflush(stdin); getline(cin, fileName1); // fileName1.length() should be 17
	if (fileName1.empty()) {
		goto again6;
	}
	while (readFileName.read((char*)&userCom[id], sizeof(ClassDataUser))) {
		if (userCom[id].getFileName() == fileName1) {
			readFileName.close();
			goto again6;
		}
	}
	readFileName.close();
	//fstream writeUserFile;
	//writeUserFile.open("D:/C++ Project/ClassEquip/FileDataUser/" + user[id].getFileName() + ".bin", ios::app | ios::binary);
	//writeUserFile.close();
	cout << "\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
	fflush(stdin); getline(cin, choose);
	if (choose == "Y" || choose == "y") {
		if (password1 == password2) {
			user[id].setUserName(userName1);
			user[id].setBuildingName(buildingName1);
			user[id].setEmail(email1);
			user[id].setPhoneNum(phoneNum1);
			user[id].setPassword(password1);
			user[id].setFileName(fileName1);
			time_t now = time(0);
			tm* dt = localtime(&now);
			int yy = dt->tm_year + 1900;
			int mm = dt->tm_mon + 1;
			int dd = dt->tm_mday;
			int h = dt->tm_hour;
			int min = dt->tm_min;
			int sec = dt->tm_sec;
			string year = to_string(yy);
			string month = to_string(mm);
			string day = to_string(dd);
			string dateT = day + "/" + month + "/" + year;
			user[id].setDate1(dateT);
			user[id].setHour1(h);
			user[id].setMinute1(min);
			user[id].setSecond1(sec);
			fstream writeUser;
			writeUser.open("all_user.bin", ios::app | ios::binary);
			writeUser.write((char*)&user[id], sizeof(ClassDataUser));
			writeUser.close();
			//eq.option(user[id].getFileName());
			eq.option(user[id].getUserName(), user[id].getBuildingName(), user[id].getEmail(), user[id].getPhoneNum(), user[id].getPassword(), user[id].getFileName(), user[id].getDate1(), user[id].getHour1(), user[id].getMinute1(), user[id].getSecond1());
		}
		else {
			system("cls");
			cout << "<< Comfirm password doesn't match! >>" << endl;
		}
	}
	else if (choose == "N" || choose == "n") {
		system("cls");
		cout << "Exit from Register!\n";
	}
	else {
		system("cls");
		goto againA;
	}
};
ClassDataUser user1[1000];
void ClassDataUser::userLogin() {
	int id1 = 0, i;
	string choose;
	string email2, phoneNum2, emailOrPhoneNum;
	char password2[100], ch;
	bool chk = false;
	string RowL1(7, 205); // row login
againAA:
	cout << "\n\n\n\n\n";
	cout << setw(53) << cornerULCase1 << RowCase1 << cornerURCase1 << endl;
	for (int i = 1; i <= 18; i++) {
		cout << setw(53) << ColCase1 << setw(51) << ColCase1 << endl;
	}
	cout << setw(53) << cornerLLCase1 << RowCase1 << cornerLRCase1 << endl;
	gotoxy1(73, 6);
	cout << cornerULCase1 << RowL1 << cornerURCase1 << endl;
	gotoxy1(73, 7);
	cout << ColCase1 << " Login " << ColCase1 << endl;
	gotoxy1(73, 8);
	cout << cornerLLCase1 << RowL1 << cornerLRCase1 << endl;
	int y1 = 12, y2 = 13, y3 = 14;
	for (int i = 1; i <= 2; i++) {
		gotoxy1(55, y1);
		cout << cornerUL1 << rowBox1 << cornerUR1 << endl;
		gotoxy1(55, y2);
		cout << col1 << setw(45) << col1 << endl;
		gotoxy1(55, y3);
		cout << cornerLL1 << rowBox1 << cornerLR1 << endl;
		y1 += 5;
		y2 += 5;
		y3 += 5;
	}
	gotoxy1(55, 11);
	cout << "Email or Phone Number: ";
	gotoxy1(55, 16);
	cout << "Password: ";
	gotoxy1(55, 21);
	cout << cornerULCase1 << RowB1 << cornerURCase1 << setw(16) << cornerULCase1 << RowB1 << cornerURCase1 << " " << cornerULCase1 << RowB1 << cornerURCase1 << endl;
	gotoxy1(55, 22);
	cout << colCase1 << " RESET  " << colCase1 << setw(16) << colCase1 << " CANCEL " << colCase1 << " " << colCase1 << "   OK   " << colCase1 << endl;
	gotoxy1(55, 23);
	cout << cornerLLCase1 << RowB1 << cornerLRCase1 << setw(16) << cornerLLCase1 << RowB1 << cornerLRCase1 << " " << cornerLLCase1 << RowB1 << cornerLRCase1 << endl;
againA:
	gotoxy1(57, 13);
	fflush(stdin); getline(cin, emailOrPhoneNum);
	if (emailOrPhoneNum.empty()) {
		goto againA;
	}
againB:
	gotoxy1(57, 18);
	//fflush(stdin); cin.get(password2, 100);
	for (i = 0;;) {
		ch = _getch();
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
			password2[i] = ch;
			++i;
			cout << "*";
		}
		if (ch == '\b' && i >= 1) {
			cout << "\b \b";
			--i;
		}
		if (ch == '\r') {
			password2[i] = '\0';
			break;
		}
	}
	if (string(password2).empty()) {
		goto againB;
	}
	cout << "\n\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
	fflush(stdin); getline(cin, choose);
	if (choose == "Y" || choose == "y") {
		fstream readUser1;
		readUser1.open("all_user.bin", ios::in | ios::binary);
		system("cls");
		while (readUser1.read((char*)&user1[id1], sizeof(ClassDataUser))) {
			if ((emailOrPhoneNum == user1[id1].getEmail() || emailOrPhoneNum == user1[id1].getPhoneNum()) && password2 == user1[id1].getPassword()) {
				chk = true;
				//eq.option(user1[id1].getFileName());
				eq.option(user1[id1].getUserName(), user1[id1].getBuildingName(), user1[id1].getEmail(), user1[id1].getPhoneNum(), user1[id1].getPassword(), user1[id1].getFileName(), user1[id1].getDate1(), user1[id1].getHour1(), user1[id1].getMinute1(), user1[id1].getSecond1());
			}
		}
		if (chk == false) {
			cout << "<< Login Failed! >>" << endl;
		}
		readUser1.close();
	}
	else if (choose == "N" || choose == "n") {
		system("cls");
		cout << "Exit from Login!\n";
	}
	else {
		system("cls");
		goto againAA;
	}
}
ClassDataUser user2[1000];
void ClassDataUser::userInfo() {
	int id = 0, no = 0;
	// ASCII codes
	string RowI1(13, 205); // row info
	gotoxy1(71, 0);
	cout << cornerULCase1 << RowI1 << cornerURCase1 << endl;
	gotoxy1(71, 1);
	cout << ColCase1 << " Information " << ColCase1 << endl;
	gotoxy1(71, 2);
	cout << cornerLLCase1 << RowI1 << cornerLRCase1 << endl << endl;
	//cout << row << endl << endl;
	fstream readUser;
	readUser.open("all_user.bin", ios::in | ios::binary);
	if (readUser.peek() == EOF) {
		cout << "<< No Data! >>" << endl;
	}
	else {
		cout << cornerUL1 << row7U << middO1 << row15U << middO1 << row15U << middO1 << row31U << middO1 << row15U << middO1 << row15U << middO1 << row23U << middO1 << row23U << cornerUR1 << endl;
		cout << col1 << " No\t" << col1 << " Username\t" << col1 << " Building Name\t" << col1 << " Email\t\t\t\t" << col1 << " Phone Number\t" << col1 << " Password\t" << col1 << " File Name\t\t" << col1 << " Date of registration\t" << col1 << endl;
		// read data from binary file is line by line and it define by index from array of object
		while (readUser.read((char*)&user2[id], sizeof(ClassDataUser))) {
			no++;
			cout << middL1 << row7U << midd1 << row15U << midd1 << row15U << midd1 << row31U << midd1 << row15U << midd1 << row15U << midd1 << row23U << midd1 << row23U << middR1 << endl;
			//cout << col1 << setw(6) << user2[id].getNo() << " ";
			cout << col1 << setw(6) << no << " ";
			cout << col1 << setw(14) << user2[id].getUserName() << " ";
			cout << col1 << setw(14) << user2[id].getBuildingName() << " ";
			cout << col1 << setw(20) << user2[id].getEmail() << "@gmail.com ";
			cout << col1 << setw(14) << user2[id].getPhoneNum() << " ";
			cout << col1 << setw(14) << user2[id].getPassword() << " ";
			cout << col1 << setw(18) << user2[id].getFileName() << ".bin ";
			cout << col1 << " " << user2[id].getDate1() << " " << user2[id].getHour1() << ":" << user2[id].getMinute1() << ":" << user2[id].getSecond1() << "\t" << col1 << endl;
		}
		cout << cornerLL1 << row7U << middU1 << row15U << middU1 << row15U << middU1 << row31U << middU1 << row15U << middU1 << row15U << middU1 << row23U << middU1 << row23U << cornerLR1 << endl;
	}
	readUser.close();
}
ClassDataUser user3[1000];
ClassEquipment dataUser2[1000];
void ClassDataUser::userDisplay() {
	// ASCII codes
	string Row(156, 205);
	string RowD1(9, 205), RowT1(7, 205); // row display
	int id = 0, no1 = 0, no2 = 0;
	int sumTable1 = 0, sumChair1 = 0, sumWhiteboard1 = 0, sumPC1 = 0, sumProjector1 = 0, sumAirCon1 = 0, sumBulb1 = 0, sumFan1 = 0;
	fstream readUser;
	readUser.open("all_user.bin", ios::in | ios::binary);
	gotoxy1(72, 0);
	cout << cornerULCase1 << RowD1 << cornerURCase1 << endl;
	gotoxy1(72, 1);
	cout << ColCase1 << " Display " << ColCase1 << endl;
	gotoxy1(72, 2);
	cout << cornerLLCase1 << RowD1 << cornerLRCase1 << endl << endl;
	if (readUser.peek() == EOF) {
		cout << "<< No Data! >>" << endl;
	}
	else {
		cout << Row << endl;
		while (readUser.read((char*)&user3[id], sizeof(ClassDataUser))) {
			cout << "\n[" << user3[id].getBuildingName() << " By " << user3[id].getUserName() << "]" << endl;
			//eq.output(user3[id].getFileName());

			int id1 = 0, no = 0;
			int sumTable = 0, sumChair = 0, sumWhiteboard = 0, sumPC = 0, sumProjector = 0, sumAirCon = 0, sumBulb = 0, sumFan = 0;
			fstream readDataUser;
			readDataUser.open(user3[id].getFileName() + ".bin", ios::in | ios::binary);
			if (readDataUser.peek() == EOF) {
				cout << "<< No Data! >>" << endl;
			}
			else {
				cout << cornerUL1 << row23U << middO1 << row47U << middO1 << row55U << middO1 << row23U << cornerUR1 << endl;
				cout << col1 << "\tIdentify\t" << col1 << "\t\t  Non-Electric\t\t\t" << col1 << "\t\t\tElectric\t\t\t" << col1 << "\t\t\t" << col1 << endl;
				cout << middL1 << row7U << middO1 << row15U << midd1 << row15U << middO1 << row15U << middO1 << row15U << midd1 << row15U << middO1 << row15U << middO1 << row7U << middO1 << row7U << middO1 << row7U << middR1 << " DATE OF DATA ENTRY\t" << col1 << endl;
				cout << col1 << " No\t" << col1 << " Class\t\t" << col1 << " Table\t\t" << col1 << " Chair\t\t" << col1 << " Whiteboard\t" << col1 << " PC\t\t" << col1 << " Projector\t" << col1 << " AC\t" << col1 << " Bulb\t" << col1 << " Fan\t" << col1 << "\t\t\t" << col1 << endl;
				while (readDataUser.read((char*)&dataUser2[id1], sizeof(ClassEquipment))) {
					no++;
					cout << middL1 << row7U << midd1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row7U << midd1 << row7U << midd1 << row7U << midd1 << row23U << middR1 << endl;
					cout << col1 << setw(6) << no << " "
						//cout << col << setw(6) << dataUser[id].getIndex() << " "
						<< col1 << setw(14) << dataUser2[id1].getClassNum() << " "
						<< col1 << setw(14) << dataUser2[id1].getNumTable() << " "
						<< col1 << setw(14) << dataUser2[id1].getNumChair() << " "
						<< col1 << setw(14) << dataUser2[id1].getNumWhiteboard() << " "
						<< col1 << setw(14) << dataUser2[id1].getNumPC() << " "
						<< col1 << setw(14) << dataUser2[id1].getNumProjector() << " "
						<< col1 << setw(6) << dataUser2[id1].getNumAirCon() << " "
						<< col1 << setw(6) << dataUser2[id1].getNumBulb() << " "
						<< col1 << setw(6) << dataUser2[id1].getNumFan() << " "
						<< col1 << " " << dataUser2[id1].getDate() << " " << dataUser2[id1].getHour() << ":" << dataUser2[id1].getMinute() << ":" << dataUser2[id1].getSecond() << "\t" << col1 << endl;
					sumTable += dataUser2[id1].getNumTable();
					sumChair += dataUser2[id1].getNumChair();
					sumWhiteboard += dataUser2[id1].getNumWhiteboard();
					sumPC += dataUser2[id1].getNumPC();
					sumProjector += dataUser2[id1].getNumProjector();
					sumAirCon += dataUser2[id1].getNumAirCon();
					sumBulb += dataUser2[id1].getNumBulb();
					sumFan += dataUser2[id1].getNumFan();
				}
				cout << middL1 << row7U << middU1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row7U << midd1 << row7U << midd1 << row7U << midd1 << row23U << middR1 << endl;
				cout << col1 << "\t  Total\t\t" << col1 << setw(14) << sumTable << " " << col1 << setw(14) << sumChair << " " << col1 << setw(14) << sumWhiteboard << " " << col1 << setw(14) << sumPC << " " << col1 << setw(14) << sumProjector << " " << col1 << setw(6) << sumAirCon << " " << col1 << setw(6) << sumBulb << " " << col1 << setw(6) << sumFan << " " << col1 << setw(24) << col1 << endl;
				cout << cornerLL1 << row23U << middU1 << row15U << middU1 << row15U << middU1 << row15U << middU1 << row15U << middU1 << row15U << middU1 << row7U << middU1 << row7U << middU1 << row7U << middU1 << row23U << cornerLR1 << endl;
			}
			readDataUser.close();
			no2 += 1;
			no1 += no;
			sumTable1 += sumTable;
			sumChair1 += sumChair;
			sumWhiteboard1 += sumWhiteboard;
			sumPC1 += sumPC;
			sumProjector1 += sumProjector;
			sumAirCon1 += sumAirCon;
			sumBulb1 += sumBulb;
			sumFan1 += sumFan;
		}
		cout << endl << endl << Row << endl;
		cout << "\n\n";
		cout << setw(73) << cornerULCase1 << RowT1 << cornerURCase1 << endl;
		cout << setw(73) << ColCase1 << " TOTAL " << ColCase1 << endl;
		cout << setw(73) << cornerLLCase1 << RowT1 << cornerLRCase1 << endl;
		cout << "\t\t" << cornerUL1 << row23U << middO1 << row47U << middO1 << row55U << cornerUR1 << endl;
		cout << "\t\t" << col1 << "\tIdentify\t" << col1 << "\t\t  Non-Electric\t\t\t" << col1 << "\t\t\tElectric\t\t\t" << col1 << endl;
		cout << "\t\t" << middL1 << row15U << middO1 << row7U << midd1 << row15U << middO1 << row15U << middO1 << row15U << midd1 << row15U << middO1 << row15U << middO1 << row7U << middO1 << row7U << middO1 << row7U << middR1 << endl;
		cout << "\t\t" << col1 << "Building\t" << col1 << " Class\t" << col1 << " Table\t\t" << col1 << " Chair\t\t" << col1 << " Whiteboard\t" << col1 << " PC\t\t" << col1 << " Projector\t" << col1 << " AC\t" << col1 << " Bulb\t" << col1 << " Fan\t" << col1 << endl;
		cout << "\t\t" << middL1 << row15U << midd1 << row7U << midd1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row15U << midd1 << row7U << midd1 << row7U << midd1 << row7U << middR1 << endl;
		cout << "\t\t" << col1 << setw(14) << no2 << " " << col1 << setw(6) << no1 << " " << col1 << setw(14) << sumTable1 << " " << col1 << setw(14) << sumChair1 << " " << col1 << setw(14) << sumWhiteboard1 << " " << col1 << setw(14) << sumPC1 << " " << col1 << setw(14) << sumProjector1 << " " << col1 << setw(6) << sumAirCon1 << " " << col1 << setw(6) << sumBulb1 << " " << col1 << setw(6) << sumFan1 << " " << col1 << endl;
		cout << "\t\t" << cornerLL1 << row15U << middU1 << row7U << middU1 << row15U << middU1 << row15U << middU1 << row15U << middU1 << row15U << middU1 << row15U << middU1 << row7U << middU1 << row7U << middU1 << row7U << cornerLR1 << endl;
	}
}
ClassDataUser user4[1000];
void ClassDataUser::editUser() {
again:
	string RowE1(11, 205); // row edit
	int id = 0, id1 = 0, no = 0, ch;
	string choose, choose1, choose2;
	string newUsername, newBuildingName, newEmail, newPhoneNum, newPassword, newFileName;
	string editUsername, fileName, fileName1, fileName2;
	bool chk = false;
	fstream readUser1;
	readUser1.open("all_user.bin", ios::in | ios::binary);
	fstream writeUserTemp;
	writeUserTemp.open("temp_user.bin", ios::app | ios::binary);
	if (readUser1.peek() == EOF) {
		cout << setw(72) << cornerULCase1 << RowE1 << cornerURCase1 << endl;
		cout << setw(72) << ColCase1 << " Edit User " << ColCase1 << endl;
		cout << setw(72) << cornerLLCase1 << RowE1 << cornerLRCase1 << endl << endl;
		cout << "<< No Data! >>" << endl;
	}
	else {
		system("cls");
		cout << "\n\n\n\n\n";
		cout << setw(53) << cornerULCase1 << RowCase1 << cornerURCase1 << endl;
		for (int i = 1; i <= 15; i++) {
			cout << setw(53) << ColCase1 << setw(51) << ColCase1 << endl;
		}

		cout << setw(53) << cornerLLCase1 << RowCase1 << cornerLRCase1 << endl;
		gotoxy1(71, 6);
		cout << cornerULCase1 << RowE1 << cornerURCase1 << endl;
		gotoxy1(71, 7);
		cout << ColCase1 << " Edit User " << ColCase1 << endl;
		gotoxy1(71, 8);
		cout << cornerLLCase1 << RowE1 << cornerLRCase1 << endl << endl;
		gotoxy1(55, 11);
		cout << "Edit By Username:";
		gotoxy1(55, 12);
		cout << cornerUL1 << rowBox1 << cornerUR1 << endl;
		gotoxy1(55, 13);
		cout << col1 << setw(45) << col1 << endl;
		gotoxy1(55, 14);
		cout << cornerLL1 << rowBox1 << cornerLR1 << endl;
		gotoxy1(55, 18);
		cout << cornerULCase1 << RowB1 << cornerURCase1 << setw(16) << cornerULCase1 << RowB1 << cornerURCase1 << " " << cornerULCase1 << RowB1 << cornerURCase1 << endl;
		gotoxy1(55, 19);
		cout << colCase1 << " RESET  " << colCase1 << setw(16) << colCase1 << " CANCEL " << colCase1 << " " << colCase1 << "   OK   " << colCase1 << endl;
		gotoxy1(55, 20);
		cout << cornerLLCase1 << RowB1 << cornerLRCase1 << setw(16) << cornerLLCase1 << RowB1 << cornerLRCase1 << " " << cornerLLCase1 << RowB1 << cornerLRCase1 << endl;
	againA:
		gotoxy1(57, 13);
		fflush(stdin); getline(cin, editUsername);
		if (editUsername.empty()) {
			goto againA;
		}
		cout << "\n\n\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
		fflush(stdin); getline(cin, choose);
		if (choose == "Y" || choose == "y") {
			while (readUser1.read((char*)&user4[id], sizeof(ClassDataUser))) {
				no++;
				if (editUsername == user4[id].getUserName()) {
				againC:
					system("cls");
					chk = true;
					cout << "\n\n\n\n\n";
					cout << setw(72) << cornerULCase1 << RowE1 << cornerURCase1 << endl;
					cout << setw(72) << ColCase1 << " Edit User " << ColCase1 << endl;
					cout << setw(72) << cornerLLCase1 << RowE1 << cornerLRCase1 << endl << endl;
					int y1 = 10, y2 = 11, y3 = 12;
					for (int i = 1; i <= 6; i++) {
						gotoxy1(52, y1);
						cout << cornerULCase1 << RowCase1 << cornerURCase1 << endl;
						gotoxy1(52, y2);
						cout << ColCase1 << setw(51) << ColCase1 << endl;
						gotoxy1(52, y3);
						cout << cornerLLCase1 << RowCase1 << cornerLRCase1 << endl;
						y1 += 4;
						y2 += 4;
						y3 += 4;
					}
					gotoxy1(67, 11);
					cout << "[1] Edit Username" << endl;
					gotoxy1(67, 15);
					cout << "[2] Edit Building Name" << endl;
					gotoxy1(67, 19);
					cout << "[3] Edit Email" << endl;
					gotoxy1(67, 23);
					cout << "[4] Edit Phone Number" << endl;
					gotoxy1(67, 27);
					cout << "[5] Edit Password" << endl;
					gotoxy1(67, 31);
					cout << "[6] Exit" << endl;
					cout << "\nInput your choice: ";
					fflush(stdin); getline(cin, choose1);
					if (choose1 == "1" || choose1 == "2" || choose1 == "3" || choose1 == "4" || choose1 == "5") {
					againB:
						system("cls");
						cout << endl;
						cout << setw(72) << cornerULCase1 << RowE1 << cornerURCase1 << endl;
						cout << setw(72) << ColCase1 << " Edit User " << ColCase1 << endl;
						cout << setw(72) << cornerLLCase1 << RowE1 << cornerLRCase1 << endl << endl;
						cout << cornerUL1 << row7U << middO1 << row15U << middO1 << row15U << middO1 << row31U << middO1 << row15U << middO1 << row15U << middO1 << row23U << middO1 << row23U << cornerUR1 << endl;
						cout << col1 << " No\t" << col1 << " Username\t" << col1 << " Building Name\t" << col1 << " Email\t\t\t\t" << col1 << " Phone Number\t" << col1 << " Password\t" << col1 << " File Name\t\t" << col1 << " Date of registration\t" << col1 << endl;
						cout << middL1 << row7U << midd1 << row15U << midd1 << row15U << midd1 << row31U << midd1 << row15U << midd1 << row15U << midd1 << row23U << midd1 << row23U << middR1 << endl;
						cout << col1 << setw(8) << col1 << setw(16) << col1 << setw(16) << col1 << setw(32) << col1 << setw(16) << col1 << setw(16) << col1 << setw(24) << col1 << setw(24) << col1 << endl;
						cout << cornerLL1 << row7U << middU1 << row15U << middU1 << row15U << middU1 << row31U << middU1 << row15U << middU1 << row15U << middU1 << row23U << middU1 << row23U << cornerLR1 << endl << endl;
						cout << cornerULCase1 << RowB1 << cornerURCase1 << setw(123) << cornerULCase1 << RowB1 << cornerURCase1 << " " << cornerULCase1 << RowB1 << cornerURCase1 << endl;
						cout << colCase1 << " RESET  " << colCase1 << setw(123) << colCase1 << " CANCEL " << colCase1 << " " << colCase1 << "   OK   " << colCase1 << endl;
						cout << cornerLLCase1 << RowB1 << cornerLRCase1 << setw(123) << cornerLLCase1 << RowB1 << cornerLRCase1 << " " << cornerLLCase1 << RowB1 << cornerLRCase1 << endl;
						gotoxy1(2, 8);
						cout << no << endl;
						gotoxy1(106, 8);
						cout << user4[id].getFileName() << endl;
						string dateTime = user4[id].getDate1() + " " + to_string(user4[id].getHour1()) + ":" + to_string(user4[id].getMinute1()) + ":" + to_string(user4[id].getSecond1());
						gotoxy1(130, 8);
						cout << dateTime << endl;

						if (choose1 != "1") {
							gotoxy1(10, 8);
							cout << user4[id].getUserName() << endl;
						}
						if (choose1 != "2") {
							gotoxy1(26, 8);
							cout << user4[id].getBuildingName() << endl;
						}
						if (choose1 != "3") {
							gotoxy1(42, 8);
							cout << user4[id].getEmail() << endl;
						}
						if (choose1 != "4") {
							gotoxy1(74, 8);
							cout << user4[id].getPhoneNum() << endl;
						}
						if (choose1 != "5") {
							gotoxy1(90, 8);
							cout << user4[id].getPassword() << endl;
						}
						if (choose1 == "1") {
						again0:
							fstream readUsername;
							readUsername.open("all_user.bin", ios::in | ios::binary);
							gotoxy1(10, 8);
							fflush(stdin); getline(cin, newUsername);
							if (newUsername.empty()) {
								goto again0;
							}
							while (readUsername.read((char*)&userCom[id1], sizeof(ClassDataUser))) {
								if (userCom[id1].getUserName() == newUsername) {
									readUsername.close();
									goto again0;
								}
							}
							readUsername.close();
						}
						else if (choose1 == "2") {
						again1:
							fstream readBuildingName;
							readBuildingName.open("all_user.bin", ios::in | ios::binary);
							gotoxy1(26, 8);
							fflush(stdin); getline(cin, newBuildingName);
							if (newBuildingName.empty()) {
								goto again1;
							}
							while (readBuildingName.read((char*)&userCom[id1], sizeof(ClassDataUser))) {
								if (userCom[id1].getBuildingName() == newBuildingName) {
									readBuildingName.close();
									goto again1;
								}
							}
							readBuildingName.close();
						}
						else if (choose1 == "3") {
						again2:
							fstream readEmail;
							readEmail.open("all_user.bin", ios::in | ios::binary);
							gotoxy1(42, 8);
							fflush(stdin); getline(cin, newEmail);
							if (newEmail.empty()) {
								goto again2;
							}
							while (readEmail.read((char*)&userCom[id1], sizeof(ClassDataUser))) {
								if (userCom[id1].getEmail() == newEmail) {
									readEmail.close();
									goto again2;
								}
							}
							readEmail.close();
						}
						else if (choose1 == "4") {
						again3:
							fstream readPhoneNum;
							readPhoneNum.open("all_user.bin", ios::in | ios::binary);
							gotoxy1(74, 8);
							fflush(stdin); getline(cin, newPhoneNum);
							if (newPhoneNum.empty()) {
								goto again3;
							}
							if (!is_integer(newPhoneNum)) {
								goto again3;
							}
							while (readPhoneNum.read((char*)&userCom[id1], sizeof(ClassDataUser))) {
								if (userCom[id1].getPhoneNum() == newPhoneNum) {
									readPhoneNum.close();
									goto again3;
								}
							}
							readPhoneNum.close();
						}
						else if (choose1 == "5") {
						again4:
							gotoxy1(90, 8);
							fflush(stdin); getline(cin, newPassword);
							if (newPassword.empty()) {
								goto again4;
							}
						}
						//else if (choose1 == "6") {
						//	//cout << "New File Name: ";
						//	gotoxy1(106, 8);
						//	fflush(stdin); getline(cin, newFileName);
						//	user4[id].setFileName(newFileName);
						//	fileName1 = user4[id].getFileName() + ".bin";
						//	fileName2 = newFileName + ".bin";
						//	rename(fileName1.c_str(), fileName2.c_str());
						//}
						cout << "\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
						fflush(stdin); getline(cin, choose2);
						if (choose2 == "Y" || choose2 == "y") {
							if (choose1 == "1") {
								user4[id].setUserName(newUsername);
							}
							else if (choose1 == "2") {
								user4[id].setBuildingName(newBuildingName);
							}
							else if (choose1 == "3") {
								user4[id].setEmail(newEmail);
							}
							else if (choose1 == "4") {
								user4[id].setPhoneNum(newPhoneNum);
							}
							else if (choose1 == "5") {
								user4[id].setPassword(newPassword);
							}
							system("cls");
							cout << "<< Edit User Successful >>" << endl;
						}
						else if (choose2 == "N" || choose2 == "n") {
							goto againC;
						}
						else {
							system("cls");
							goto againB;
						}
					}
					if (choose1 == "6") {
						system("cls");
						cout << "Exit From Edit User Option!" << endl;
					}
					else {
						goto againC;
					}

				}
				writeUserTemp.write((char*)&user4[id], sizeof(ClassDataUser));
			}
			if (chk == false) {
				system("cls");
				cout << "<< Username Not Found! >>" << endl;
			}
			readUser1.close();
			writeUserTemp.close();
			remove("all_user.bin");
			rename("temp_user.bin", "all_user.bin");
		}
		else if (choose == "N" || choose == "n") {
			system("cls");
			cout << "Exit from Edit User!" << endl;
		}
		else {
			system("cls");
			goto again;
		}
	}
}
ClassDataUser user5[1000];
void ClassDataUser::updateUser() {
again:
	string RowU1(13, 205); // row update
	int id = 0, id1 = 0, no = 0;
	string choose, choose1;
	string newUsername, newBuildingName, newEmail, newPhoneNum, newPassword, newFileName;
	string updateUsername;
	bool chk = false;
	fstream readUser1;
	readUser1.open("all_user.bin", ios::in | ios::binary);
	fstream writeUserTemp;
	writeUserTemp.open("temp_user.bin", ios::app | ios::binary);
	if (readUser1.peek() == EOF) {
		cout << setw(71) << cornerULCase1 << RowU1 << cornerURCase1 << endl;
		cout << setw(71) << ColCase1 << " Update User " << ColCase1 << endl;
		cout << setw(71) << cornerLLCase1 << RowU1 << cornerLRCase1 << endl << endl;
		cout << "<< No Data! >>" << endl;
	}
	else {
		system("cls");
		cout << "\n\n\n\n\n";
		cout << setw(53) << cornerULCase1 << RowCase1 << cornerURCase1 << endl;
		for (int i = 1; i <= 15; i++) {
			cout << setw(53) << ColCase1 << setw(51) << ColCase1 << endl;
		}

		cout << setw(53) << cornerLLCase1 << RowCase1 << cornerLRCase1 << endl;
		gotoxy1(70, 6);
		cout << cornerULCase1 << RowU1 << cornerURCase1 << endl;
		gotoxy1(70, 7);
		cout << ColCase1 << " Update User " << ColCase1 << endl;
		gotoxy1(70, 8);
		cout << cornerLLCase1 << RowU1 << cornerLRCase1 << endl << endl;
		gotoxy1(55, 11);
		cout << "Update By Username:";
		gotoxy1(55, 12);
		cout << cornerUL1 << rowBox1 << cornerUR1 << endl;
		gotoxy1(55, 13);
		cout << col1 << setw(45) << col1 << endl;
		gotoxy1(55, 14);
		cout << cornerLL1 << rowBox1 << cornerLR1 << endl;
		gotoxy1(55, 18);
		cout << cornerULCase1 << RowB1 << cornerURCase1 << setw(16) << cornerULCase1 << RowB1 << cornerURCase1 << " " << cornerULCase1 << RowB1 << cornerURCase1 << endl;
		gotoxy1(55, 19);
		cout << colCase1 << " RESET  " << colCase1 << setw(16) << colCase1 << " CANCEL " << colCase1 << " " << colCase1 << "   OK   " << colCase1 << endl;
		gotoxy1(55, 20);
		cout << cornerLLCase1 << RowB1 << cornerLRCase1 << setw(16) << cornerLLCase1 << RowB1 << cornerLRCase1 << " " << cornerLLCase1 << RowB1 << cornerLRCase1 << endl;
	againA:
		gotoxy1(57, 13);
		fflush(stdin); getline(cin, updateUsername);
		if (updateUsername.empty()) {
			goto againA;
		}
		cout << "\n\n\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
		fflush(stdin); getline(cin, choose);
		if (choose == "Y" || choose == "y") {
			while (readUser1.read((char*)&user5[id], sizeof(ClassDataUser))) {
				no++;
				if (updateUsername == user5[id].getUserName()) {
				againB:
					chk = true;
					system("cls");
					cout << endl;
					cout << setw(71) << cornerULCase1 << RowU1 << cornerURCase1 << endl;
					cout << setw(71) << ColCase1 << " Update User " << ColCase1 << endl;
					cout << setw(71) << cornerLLCase1 << RowU1 << cornerLRCase1 << endl << endl;
					cout << cornerUL1 << row7U << middO1 << row15U << middO1 << row15U << middO1 << row31U << middO1 << row15U << middO1 << row15U << middO1 << row23U << middO1 << row23U << cornerUR1 << endl;
					cout << col1 << " No\t" << col1 << " Username\t" << col1 << " Building Name\t" << col1 << " Email\t\t\t\t" << col1 << " Phone Number\t" << col1 << " Password\t" << col1 << " File Name\t\t" << col1 << " Date of registration\t" << col1 << endl;
					cout << middL1 << row7U << midd1 << row15U << midd1 << row15U << midd1 << row31U << midd1 << row15U << midd1 << row15U << midd1 << row23U << midd1 << row23U << middR1 << endl;
					cout << col1 << setw(8) << col1 << setw(16) << col1 << setw(16) << col1 << setw(32) << col1 << setw(16) << col1 << setw(16) << col1 << setw(24) << col1 << setw(24) << col1 << endl;
					cout << cornerLL1 << row7U << middU1 << row15U << middU1 << row15U << middU1 << row31U << middU1 << row15U << middU1 << row15U << middU1 << row23U << middU1 << row23U << cornerLR1 << endl << endl;
					cout << cornerULCase1 << RowB1 << cornerURCase1 << setw(123) << cornerULCase1 << RowB1 << cornerURCase1 << " " << cornerULCase1 << RowB1 << cornerURCase1 << endl;
					cout << colCase1 << " RESET  " << colCase1 << setw(123) << colCase1 << " CANCEL " << colCase1 << " " << colCase1 << "   OK   " << colCase1 << endl;
					cout << cornerLLCase1 << RowB1 << cornerLRCase1 << setw(123) << cornerLLCase1 << RowB1 << cornerLRCase1 << " " << cornerLLCase1 << RowB1 << cornerLRCase1 << endl;
					gotoxy1(2, 8);
					cout << no << endl;
					gotoxy1(106, 8);
					cout << user5[id].getFileName() << endl;
					string dateTime = user5[id].getDate1() + " " + to_string(user5[id].getHour1()) + ":" + to_string(user5[id].getMinute1()) + ":" + to_string(user5[id].getSecond1());
					gotoxy1(130, 8);
					cout << dateTime << endl;
				again0:
					fstream readUsername;
					readUsername.open("all_user.bin", ios::in | ios::binary);
					gotoxy1(10, 8);
					fflush(stdin); getline(cin, newUsername);
					if (newUsername.empty()) {
						goto again0;
					}
					while (readUsername.read((char*)&userCom[id1], sizeof(ClassDataUser))) {
						if (userCom[id1].getUserName() == newUsername) {
							readUsername.close();
							goto again0;
						}
					}
					readUsername.close();
				again1:
					fstream readBuildingName;
					readBuildingName.open("all_user.bin", ios::in | ios::binary);
					gotoxy1(26, 8);
					fflush(stdin); getline(cin, newBuildingName);
					if (newBuildingName.empty()) {
						goto again1;
					}
					while (readBuildingName.read((char*)&userCom[id1], sizeof(ClassDataUser))) {
						if (userCom[id1].getBuildingName() == newBuildingName) {
							readBuildingName.close();
							goto again1;
						}
					}
					readBuildingName.close();
				again2:
					fstream readEmail;
					readEmail.open("all_user.bin", ios::in | ios::binary);
					gotoxy1(42, 8);
					fflush(stdin); getline(cin, newEmail);
					if (newEmail.empty()) {
						goto again2;
					}
					while (readEmail.read((char*)&userCom[id1], sizeof(ClassDataUser))) {
						if (userCom[id1].getEmail() == newEmail) {
							readEmail.close();
							goto again2;
						}
					}
					readEmail.close();
				again3:
					fstream readPhoneNum;
					readPhoneNum.open("all_user.bin", ios::in | ios::binary);
					gotoxy1(74, 8);
					fflush(stdin); getline(cin, newPhoneNum);
					if (newPhoneNum.empty()) {
						goto again3;
					}
					if (!is_integer(newPhoneNum)) {
						goto again3;
					}
					while (readPhoneNum.read((char*)&userCom[id1], sizeof(ClassDataUser))) {
						if (userCom[id1].getPhoneNum() == newPhoneNum) {
							readPhoneNum.close();
							goto again3;
						}
					}
					readPhoneNum.close();
				again4:
					gotoxy1(90, 8);
					fflush(stdin); getline(cin, newPassword);
					if (newPassword.empty()) {
						goto again4;
					}
					cout << "\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
					fflush(stdin); getline(cin, choose1);
					if (choose1 == "Y" || choose1 == "y") {
						user5[id].setUserName(newUsername);
						user5[id].setBuildingName(newBuildingName);
						user5[id].setEmail(newEmail);
						user5[id].setPhoneNum(newPhoneNum);
						user5[id].setPassword(newPassword);
						system("cls");
						cout << "<< Update User Successful >>" << endl;
					}
					else if (choose1 == "N" || choose1 == "n") {
						system("cls");
						cout << "2 Exit from Update User!" << endl;
					}
					else {
						system("cls");
						goto againB;
					}
				}
				writeUserTemp.write((char*)&user5[id], sizeof(ClassDataUser));
			}
			if (chk == false) {
				system("cls");
				cout << "<< Username Not Found! >>" << endl;
			}
			readUser1.close();
			writeUserTemp.close();
			remove("all_user.bin");
			rename("temp_user.bin", "all_user.bin");
		}
		else if (choose == "N" || choose == "n") {
			system("cls");
			cout << "1 Exit from Update User!" << endl;
		}
		else {
			system("cls");
			goto again;
		}
	}
}
ClassDataUser user6[1000];
ClassDataUser user7[1000];
void ClassDataUser::deleteUser() {
again:
	int id = 0, id1 = 0, no = 0, no1 = 0;
	bool chk = false;
	string deleteUsername, choose, choose1;
	string RowD1(13, 205); // row delete
	fstream readUser1;
	readUser1.open("all_user.bin", ios::in | ios::binary);
	fstream readUser2;
	readUser2.open("all_user.bin", ios::in | ios::binary);
	fstream writeUserTemp;
	writeUserTemp.open("temp_user.bin", ios::app | ios::binary);
	if (readUser1.peek() == EOF) {
		cout << setw(71) << cornerULCase1 << RowD1 << cornerURCase1 << endl;
		cout << setw(71) << ColCase1 << " Delete User " << ColCase1 << endl;
		cout << setw(71) << cornerLLCase1 << RowD1 << cornerLRCase1 << endl << endl;
		cout << "<< No Data! >>" << endl;
	}
	else {
		cout << "\n\n\n\n\n";
		cout << setw(53) << cornerULCase1 << RowCase1 << cornerURCase1 << endl;
		for (int i = 1; i <= 15; i++) {
			cout << setw(53) << ColCase1 << setw(51) << ColCase1 << endl;
		}

		cout << setw(53) << cornerLLCase1 << RowCase1 << cornerLRCase1 << endl;
		gotoxy1(70, 6);
		cout << cornerULCase1 << RowD1 << cornerURCase1 << endl;
		gotoxy1(70, 7);
		cout << ColCase1 << " Delete User " << ColCase1 << endl;
		gotoxy1(70, 8);
		cout << cornerLLCase1 << RowD1 << cornerLRCase1 << endl << endl;
		gotoxy1(55, 11);
		cout << "Delete By Username:";
		gotoxy1(55, 12);
		cout << cornerUL1 << rowBox1 << cornerUR1 << endl;
		gotoxy1(55, 13);
		cout << col1 << setw(45) << col1 << endl;
		gotoxy1(55, 14);
		cout << cornerLL1 << rowBox1 << cornerLR1 << endl;
		gotoxy1(55, 18);
		cout << cornerULCase1 << RowB1 << cornerURCase1 << setw(16) << cornerULCase1 << RowB1 << cornerURCase1 << " " << cornerULCase1 << RowB1 << cornerURCase1 << endl;
		gotoxy1(55, 19);
		cout << colCase1 << " RESET  " << colCase1 << setw(16) << colCase1 << " CANCEL " << colCase1 << " " << colCase1 << "   OK   " << colCase1 << endl;
		gotoxy1(55, 20);
		cout << cornerLLCase1 << RowB1 << cornerLRCase1 << setw(16) << cornerLLCase1 << RowB1 << cornerLRCase1 << " " << cornerLLCase1 << RowB1 << cornerLRCase1 << endl;
	againA:
		gotoxy1(57, 13);
		fflush(stdin); getline(cin, deleteUsername);
		if (deleteUsername.empty()) {
			goto againA;
		}
		cout << "\n\n\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
		fflush(stdin); getline(cin, choose);
		if (choose == "Y" || choose == "y") {
			while (readUser1.read((char*)&user6[id], sizeof(ClassDataUser))) {
				no++;
				if (deleteUsername == user6[id].getUserName()) {
					chk = true;
					system("cls");
					cout << setw(71) << cornerULCase1 << RowD1 << cornerURCase1 << endl;
					cout << setw(71) << ColCase1 << " Delete User " << ColCase1 << endl;
					cout << setw(71) << cornerLLCase1 << RowD1 << cornerLRCase1 << endl << endl;
					cout << cornerUL1 << row7U << middO1 << row15U << middO1 << row15U << middO1 << row31U << middO1 << row15U << middO1 << row15U << middO1 << row23U << middO1 << row23U << cornerUR1 << endl;
					cout << col1 << " No\t" << col1 << " Username\t" << col1 << " Building Name\t" << col1 << " Email\t\t\t\t" << col1 << " Phone Number\t" << col1 << " Password\t" << col1 << " File Name\t\t" << col1 << " Date of registration\t" << col1 << endl;
					cout << middL1 << row7U << midd1 << row15U << midd1 << row15U << midd1 << row31U << midd1 << row15U << midd1 << row15U << midd1 << row23U << midd1 << row23U << middR1 << endl;
					//cout << col1 << setw(6) << user6[id].getNo() << " ";
					cout << col1 << setw(6) << no << " ";
					cout << col1 << setw(14) << user6[id].getUserName() << " ";
					cout << col1 << setw(14) << user6[id].getBuildingName() << " ";
					cout << col1 << setw(20) << user6[id].getEmail() << "@gmail.com ";
					cout << col1 << setw(14) << user6[id].getPhoneNum() << " ";
					cout << col1 << setw(14) << user6[id].getPassword() << " ";
					cout << col1 << setw(18) << user6[id].getFileName() << ".bin ";
					cout << col1 << " " << user6[id].getDate1() << " " << user6[id].getHour1() << ":" << user6[id].getMinute1() << ":" << user6[id].getSecond1() << "\t" << col1 << endl;
					cout << cornerLL1 << row7U << middU1 << row15U << middU1 << row15U << middU1 << row31U << middU1 << row15U << middU1 << row15U << middU1 << row23U << middU1 << row23U << cornerLR1 << endl << endl;
					cout << cornerULCase1 << RowB1 << cornerURCase1 << setw(123) << cornerULCase1 << RowB1 << cornerURCase1 << " " << cornerULCase1 << RowB1 << cornerURCase1 << endl;
					cout << colCase1 << " RESET  " << colCase1 << setw(123) << colCase1 << " CANCEL " << colCase1 << " " << colCase1 << "   OK   " << colCase1 << endl;
					cout << cornerLLCase1 << RowB1 << cornerLRCase1 << setw(123) << cornerLLCase1 << RowB1 << cornerLRCase1 << " " << cornerLLCase1 << RowB1 << cornerLRCase1 << endl;
				}
			}
			readUser1.close();
			if (chk == true) {
				cout << "\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
				fflush(stdin); getline(cin, choose1);
				if (choose1 == "Y" || choose1 == "y") {
					system("cls");
					cout << "<< Delete User Successful >>" << endl;
					while (readUser2.read((char*)&user7[id1], sizeof(ClassDataUser))) {
						no1++;
						if (deleteUsername == user7[id1].getUserName()) {
							string fileName1 = user7[id1].getFileName() + ".bin";
							remove(fileName1.c_str());
						}
						if (deleteUsername != user7[id1].getUserName()) {
							writeUserTemp.write((char*)&user7[id1], sizeof(ClassDataUser));
						}
					}
					readUser2.close();
					writeUserTemp.close();
					remove("all_user.bin");
					rename("temp_user.bin", "all_user.bin");
				}
				else if (choose1 == "N" || choose1 == "n") {
					system("cls");
					cout << "2 Exit from Delete User!" << endl;
				}
				else {
					system("cls");
					goto again;
				}
			}
			else {
				system("cls");
				cout << "<< Username Not Found! >>" << endl;
			}
		}
		else if (choose == "N" || choose == "n") {
			system("cls");
			cout << "1 Exit from Delete User!" << endl;
		}
		else {
			system("cls");
			goto again;
		}
	}
}
ClassDataUser user8[1000];
void ClassDataUser::manageData() {
again:
	string RowM1(13, 205); // row manage data
	int id = 0;
	string choose;
	string manageUsername;
	bool chk = false;
	fstream readUser1;
	readUser1.open("all_user.bin", ios::in | ios::binary);
	if (readUser1.peek() == EOF) {
		cout << setw(71) << cornerULCase1 << RowM1 << cornerURCase1 << endl;
		cout << setw(71) << ColCase1 << " Manage Data " << ColCase1 << endl;
		cout << setw(71) << cornerLLCase1 << RowM1 << cornerLRCase1 << endl << endl;
		cout << "<< No Data! >>" << endl;
	}
	else {
		system("cls");
		cout << "\n\n\n\n\n";
		cout << setw(53) << cornerULCase1 << RowCase1 << cornerURCase1 << endl;
		for (int i = 1; i <= 15; i++) {
			cout << setw(53) << ColCase1 << setw(51) << ColCase1 << endl;
		}

		cout << setw(53) << cornerLLCase1 << RowCase1 << cornerLRCase1 << endl;
		gotoxy1(70, 6);
		cout << cornerULCase1 << RowM1 << cornerURCase1 << endl;
		gotoxy1(70, 7);
		cout << ColCase1 << " Manage Data " << ColCase1 << endl;
		gotoxy1(70, 8);
		cout << cornerLLCase1 << RowM1 << cornerLRCase1 << endl << endl;
		gotoxy1(55, 11);
		cout << "Manage Data By Username:";
		gotoxy1(55, 12);
		cout << cornerUL1 << rowBox1 << cornerUR1 << endl;
		gotoxy1(55, 13);
		cout << col1 << setw(45) << col1 << endl;
		gotoxy1(55, 14);
		cout << cornerLL1 << rowBox1 << cornerLR1 << endl;
		gotoxy1(55, 18);
		cout << cornerULCase1 << RowB1 << cornerURCase1 << setw(16) << cornerULCase1 << RowB1 << cornerURCase1 << " " << cornerULCase1 << RowB1 << cornerURCase1 << endl;
		gotoxy1(55, 19);
		cout << colCase1 << " RESET  " << colCase1 << setw(16) << colCase1 << " CANCEL " << colCase1 << " " << colCase1 << "   OK   " << colCase1 << endl;
		gotoxy1(55, 20);
		cout << cornerLLCase1 << RowB1 << cornerLRCase1 << setw(16) << cornerLLCase1 << RowB1 << cornerLRCase1 << " " << cornerLLCase1 << RowB1 << cornerLRCase1 << endl;
	againA:
		gotoxy1(57, 13);
		fflush(stdin); getline(cin, manageUsername);
		if (manageUsername.empty()) {
			goto againA;
		}
		cout << "\n\n\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
		fflush(stdin); getline(cin, choose);
		if (choose == "Y" || choose == "y") {
			while (readUser1.read((char*)&user8[id], sizeof(ClassDataUser))) {
				if (manageUsername == user8[id].getUserName()) {
					chk = true;
					eq.option(user8[id].getUserName(), user8[id].getBuildingName(), user8[id].getEmail(), user8[id].getPhoneNum(), user8[id].getPassword(), user8[id].getFileName(), user8[id].getDate1(), user8[id].getHour1(), user8[id].getMinute1(), user8[id].getSecond1());
				}
			}
			if (chk != true) {
				system("cls");
				cout << "<< Username Not Found! >>" << endl;
			}
		}
		else if (choose == "N" || choose == "n") {
			system("cls");
			cout << "Exit from Data Management!" << endl;
		}
		else {
			system("cls");
			goto again;
		}
	}
}