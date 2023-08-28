#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <fstream>
#include <conio.h>
#include <ctime>
#include <Windows.h>
#include "ClassEquipment.h"
#include "ClassDataUser.h"

ClassEquipment::ClassEquipment(int index, string classNum, int numTable, int numChair, int numWhiteboard, int numPC, int numProjector, int numAirCon, int numBulb, int numFan, string date, int hour, int minute, int second) {
	this->index = index;
	this->classNum = classNum;
	this->numTable = numTable;
	this->numChair = numChair;
	this->numWhiteboard = numWhiteboard;
	this->numPC = numPC;
	this->numProjector = numProjector;
	this->numAirCon = numAirCon;
	this->numBulb = numBulb;
	this->numFan = numFan;
	this->date = date;
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}
ClassEquipment::ClassEquipment() {
	this->index = NULL;
	this->classNum = "NULL";
	this->numTable = NULL;
	this->numChair = NULL;
	this->numWhiteboard = NULL;
	this->numPC = NULL;
	this->numProjector = NULL;
	this->numAirCon = NULL;
	this->numBulb = NULL;
	this->numFan = NULL;
	this->date = "NULL";
	this->hour = NULL;
	this->minute = NULL;
	this->second = NULL;
}
void ClassEquipment::setIndex(int value) {
	index = value;
}
int ClassEquipment::getIndex()const {
	return index;
}
void ClassEquipment::setClassNum(const string& value) {
	classNum = value;
}
string ClassEquipment::getClassNum()const {
	return classNum;
}
void ClassEquipment::setNumTable(int value) {
	numTable = value;
}
int ClassEquipment::getNumTable()const {
	return numTable;
}
void ClassEquipment::setNumChair(int value) {
	numChair = value;
}
int ClassEquipment::getNumChair()const {
	return numChair;
}
void ClassEquipment::setNumWhiteboard(int value) {
	numWhiteboard = value;
}
int ClassEquipment::getNumWhiteboard()const {
	return numWhiteboard;
}
void ClassEquipment::setNumPC(int value) {
	numPC = value;
}
int ClassEquipment::getNumPC()const {
	return numPC;
}
void ClassEquipment::setNumProjector(int value) {
	numProjector = value;
}
int ClassEquipment::getNumProjector()const {
	return numProjector;
}
void ClassEquipment::setNumAirCon(int value) {
	numAirCon = value;
}
int ClassEquipment::getNumAirCon()const {
	return numAirCon;
}
void ClassEquipment::setNumBulb(int value) {
	numBulb = value;
}
int ClassEquipment::getNumBulb()const {
	return numBulb;
}
void ClassEquipment::setNumFan(int value) {
	numFan = value;
}
int ClassEquipment::getNumFan()const {
	return numFan;
}
void ClassEquipment::setDate(const string& value) {
	date = value;
}
string ClassEquipment::getDate()const {
	return date;
}
void ClassEquipment::setHour(int value) {
	hour = value;
}
int ClassEquipment::getHour()const {
	return hour;
}
void ClassEquipment::setMinute(int value) {
	minute = value;
}
int ClassEquipment::getMinute()const {
	return minute;
}
void ClassEquipment::setSecond(int value) {
	second = value;
}
int ClassEquipment::getSecond()const {
	return second;
}

bool is_integer1(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (!isdigit(str[i])) {
			return false;
		}
	}
	return true;
}
void gotoxy2(short x, short y)           //definition of gotoxy function//                                               
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// ASCII codes
string row7(7, 196), row15(15, 196), row23(23, 196), row31(31, 196), row47(47, 196), row55(55, 196), row63(63, 196);
char col = 179;
char cornerUL = 218, cornerUR = 191, cornerLL = 192, cornerLR = 217;
char midd = 197, middO = 194, middU = 193, middL = 195, middR = 180;
string  RowOp(17, 205), RowI(12, 205), RowO(11, 205), RowE(11, 205), RowU(13, 205), RowD(13, 205), RowS(13, 205), RowA(10, 205), RowR(12, 205), RowB(8, 205);
char cornerULCase = 201, cornerURCase = 187, cornerLLCase = 200, cornerLRCase = 188;
char colCase = 186, ColCase = 219;
string rowBox(44, 196), RowCase(50, 205);

ClassDataUser user;
ClassEquipment cEquip;
void ClassEquipment::option(string username, string buildingName, string email, string phoneNum, string password, string fileName, string date1, int hour1, int minute1, int second1) {
	int ch;
	string choose;
again:
	system("cls");
	gotoxy2(68, 0);
	cout << cornerULCase << RowOp << cornerURCase << endl;
	gotoxy2(68, 1);
	cout << ColCase << " Data Management " << ColCase << endl;
	gotoxy2(68, 2);
	cout << cornerLLCase << RowOp << cornerLRCase << endl << endl;
	int y1 = 3, y2 = 4, y3 = 5;
	for (int i = 1; i <= 10; i++) {
		gotoxy2(52, y1);
		cout << cornerULCase << RowCase << cornerURCase << endl;
		gotoxy2(52, y2);
		cout << ColCase << setw(51) << ColCase << endl;
		gotoxy2(52, y3);
		cout << cornerLLCase << RowCase << cornerLRCase << endl;
		y1 += 4;
		y2 += 4;
		y3 += 4;
	}
	gotoxy2(73, 3);
	cout << "[1] Entry" << endl;
	gotoxy2(73, 7);
	cout << "[2] Show" << endl;
	gotoxy2(73, 11);
	cout << "[3] Edit" << endl;
	gotoxy2(73, 15);
	cout << "[4] Update" << endl;
	gotoxy2(73, 19);
	cout << "[5] Delete" << endl;
	gotoxy2(73, 23);
	cout << "[6] Search" << endl;
	gotoxy2(73, 27);
	cout << "[7] Add" << endl;
	gotoxy2(73, 31);
	cout << "[8] Reset" << endl;
	gotoxy2(73, 35);
	cout << "[9] About" << endl;
	gotoxy2(73, 39);
	cout << "[10] Exit" << endl << endl;
	cout << "Input your option: ";
	fflush(stdin); getline(cin, choose);
	if (choose == "1") {
		system("cls");
		cEquip.input(fileName);
	}
	else if (choose == "2") {
		system("cls");
		gotoxy2(71, 0);
		cout << cornerULCase << RowO << cornerURCase << endl;
		gotoxy2(71, 1);
		cout << ColCase << " Show Data " << ColCase << endl;
		gotoxy2(71, 2);
		cout << cornerLLCase << RowO << cornerLRCase << endl << endl;
		cEquip.output(fileName);
	}
	else if (choose == "3") {
		system("cls");
		cEquip.edit(fileName);
	}
	else if (choose == "4") {
		system("cls");
		cEquip.update(fileName);
	}
	else if (choose == "5") {
		system("cls");
		cEquip.deleted(fileName);
	}
	else if (choose == "6") {
		system("cls");
		cEquip.search(fileName);
	}
	else if (choose == "7") {
		system("cls");
		cEquip.add(fileName);
	}
	else if (choose == "8") {
		system("cls");
		cEquip.reset(fileName);
	}
	else if (choose == "9") {
		system("cls");
		cEquip.about(username, buildingName, email, phoneNum, password, fileName, date1, hour1, minute1, second1);
	}
	else if (choose == "10") {
		exit(0);
	}
	else {
		system("cls");
		cout << "You input invalid option!" << endl;
	}
	cout << "\n<< Press Enter to process [Data Management] again >>" << endl;
	ch = _getch();
	if (ch == 13) {
		goto again;
	}
	system("cls");
}
ClassEquipment dataUser[1000];
void ClassEquipment::input(string fileName) {
againAA:
	int id = 0, i = 0, n, j = 0, p = 0, x = 0, no = 0;
	string choose, choose1;
	string classNum1[100], strNum;
	string numTable1, numChair1, numWhiteboard1, numPC1, numPro1, numAirCon1, numBulb1, numFan1;
	int numTable2[20], numChair2[20], numWhiteboard2[20], numPC2[20], numPro2[20], numAirCon2[20], numBulb2[20], numFan2[20];
	int yy, mm, dd, h[20], min[20], sec[20];
	string year, month, day, dateT[20];
	fstream readNo;
	readNo.open(fileName + ".bin", ios::in | ios::binary);
	while (readNo.read((char*)&dataUser[id], sizeof(ClassEquipment))) {
		no++;
	}
	//no++;
	id = dataUser[id].getIndex();
	readNo.close();
	id++;
	cout << "\n\n\n\n\n";
	cout << setw(53) << cornerULCase << RowCase << cornerURCase << endl;
	for (int i = 1; i <= 15; i++) {
		cout << setw(53) << ColCase << setw(51) << ColCase << endl;
	}
	cout << setw(53) << cornerLLCase << RowCase << cornerLRCase << endl;
	gotoxy2(71, 6);
	cout << cornerULCase << RowI << cornerURCase << endl;
	gotoxy2(71, 7);
	cout << ColCase << " Entry Data " << ColCase << endl;
	gotoxy2(71, 8);
	cout << cornerLLCase << RowI << cornerLRCase << endl;
	gotoxy2(55, 12);
	cout << cornerUL << rowBox << cornerUR << endl;
	gotoxy2(55, 13);
	cout << col << setw(45) << col << endl;
	gotoxy2(55, 14);
	cout << cornerLL << rowBox << cornerLR << endl;
	gotoxy2(55, 11);
	cout << "Nnumber of Class to Entry:" << endl;
	gotoxy2(55, 18);
	cout << cornerULCase << RowB << cornerURCase << setw(16) << cornerULCase << RowB << cornerURCase << " " << cornerULCase << RowB << cornerURCase << endl;
	gotoxy2(55, 19);
	cout << colCase << " RESET  " << colCase << setw(16) << colCase << " CANCEL " << colCase << " " << colCase << "   OK   " << colCase << endl;
	gotoxy2(55, 20);
	cout << cornerLLCase << RowB << cornerLRCase << setw(16) << cornerLLCase << RowB << cornerLRCase << " " << cornerLLCase << RowB << cornerLRCase << endl;
again0:
	gotoxy2(57, 13);
	fflush(stdin); getline(cin, strNum);
	if (strNum.empty()) {
		goto again0;
	}
	if (is_integer1(strNum)) {
		n = stoi(strNum);
	}
	else {
		goto again0;
	}
	if (n > 13) {
		goto again0;
	}
	cout << "\n\n\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
	fflush(stdin); getline(cin, choose);
	if (choose == "Y" || choose == "y") {
		system("cls");
		cout << endl;
		cout << setw(72) << cornerULCase << RowI << cornerURCase << endl;
		cout << setw(72) << ColCase << " Entry Data " << ColCase << endl;
		cout << setw(72) << cornerLLCase << RowI << cornerLRCase << endl << endl;
		cout << cornerUL << row23 << middO << row47 << middO << row55 << middO << row23 << cornerUR << endl;
		cout << col << "\tIdentify\t" << col << "\t\t  Non-Electric\t\t\t" << col << "\t\t\tElectric\t\t\t" << col << "\t\t\t" << col << endl;
		cout << middL << row7 << middO << row15 << midd << row15 << middO << row15 << middO << row15 << midd << row15 << middO << row15 << middO << row7 << middO << row7 << middO << row7 << middR << " DATE OF DATA ENTRY\t" << col << endl;
		cout << col << " No\t" << col << " Class\t\t" << col << " Table\t\t" << col << " Chair\t\t" << col << " Whiteboard\t" << col << " PC\t\t" << col << " Projector\t" << col << " AC\t" << col << " Bulb\t" << col << " Fan\t" << col << "\t\t\t" << col << endl;
		for (x = 0; x < n; x++) {
			no++;
			cout << middL << row7 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row7 << midd << row7 << midd << row7 << midd << row23 << middR << endl;
			cout << col << setw(6) << no << " " << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(8) << col << setw(8) << col << setw(8) << col << setw(24) << col << endl;
		}
		cout << cornerLL << row7 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row7 << middU << row7 << middU << row7 << middU << row23 << cornerLR << endl << endl;
		cout << cornerULCase << RowB << cornerURCase << setw(123) << cornerULCase << RowB << cornerURCase << " " << cornerULCase << RowB << cornerURCase << endl;
		cout << colCase << " RESET  " << colCase << setw(123) << colCase << " CANCEL " << colCase << " " << colCase << "   OK   " << colCase << endl;
		cout << cornerLLCase << RowB << cornerLRCase << setw(123) << cornerLLCase << RowB << cornerLRCase << " " << cornerLLCase << RowB << cornerLRCase << endl;
		int y = 10;
		for (p = 0; p < n; p++) {
		again11:
			gotoxy2(10, y);
			fflush(stdin); getline(cin, classNum1[p]);
			if (classNum1[p].empty()) {
				goto again11;
			}
		again1:
			gotoxy2(26, y);
			fflush(stdin); getline(cin, numTable1);
			if (numTable1.empty()) {
				goto again1;
			}
			if (is_integer1(numTable1)) {
				numTable2[p] = stoi(numTable1);
			}
			else {
				goto again1;
			}
		again2:
			gotoxy2(42, y);
			fflush(stdin); getline(cin, numChair1);
			if (numChair1.empty()) {
				goto again2;
			}
			if (is_integer1(numChair1)) {
				numChair2[p] = stoi(numChair1);
			}
			else {
				goto again2;
			}
		again3:
			gotoxy2(58, y);
			fflush(stdin); getline(cin, numWhiteboard1);
			if (numWhiteboard1.empty()) {
				goto again3;
			}
			if (is_integer1(numWhiteboard1)) {
				numWhiteboard2[p] = stoi(numWhiteboard1);
			}
			else {
				goto again3;
			}
		again4:
			gotoxy2(74, y);
			fflush(stdin); getline(cin, numPC1);
			if (numPC1.empty()) {
				goto again4;
			}
			if (is_integer1(numPC1)) {
				numPC2[p] = stoi(numPC1);
			}
			else {
				goto again4;
			}
		again5:
			gotoxy2(90, y);
			fflush(stdin); getline(cin, numPro1);
			if (numPro1.empty()) {
				goto again5;
			}
			if (is_integer1(numPro1)) {
				numPro2[p] = stoi(numPro1);
			}
			else {
				goto again5;
			}
		again6:
			gotoxy2(106, y);
			fflush(stdin); getline(cin, numAirCon1);
			if (numAirCon1.empty()) {
				goto again6;
			}
			if (is_integer1(numAirCon1)) {
				numAirCon2[p] = stoi(numAirCon1);
			}
			else {
				goto again6;
			}
		again7:
			gotoxy2(114, y);
			fflush(stdin); getline(cin, numBulb1);
			if (numBulb1.empty()) {
				goto again7;
			}
			if (is_integer1(numBulb1)) {
				numBulb2[p] = stoi(numBulb1);
			}
			else {
				goto again7;
			}
		again8:
			gotoxy2(122, y);
			fflush(stdin); getline(cin, numFan1);
			if (numFan1.empty()) {
				goto again8;
			}
			if (is_integer1(numFan1)) {
				numFan2[p] = stoi(numFan1);
			}
			else {
				goto again8;
			}
			time_t now = time(0);
			tm* dt = localtime(&now);
			yy = dt->tm_year + 1900;
			mm = dt->tm_mon + 1;
			dd = dt->tm_mday;
			h[p] = dt->tm_hour;
			min[p] = dt->tm_min;
			sec[p] = dt->tm_sec;
			year = to_string(yy);
			month = to_string(mm);
			day = to_string(dd);
			dateT[p] = day + "/" + month + "/" + year;
			string dateTime = dateT[p] + " " + to_string(h[p]) + ":" + to_string(min[p]) + ":" + to_string(sec[p]);
			gotoxy2(130, y);
			cout << dateTime << endl;
			y += 2;
		}
		cout << "\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
		fflush(stdin); getline(cin, choose1);
		if (choose1 == "Y" || choose1 == "y") {
			for (i = id; i < (n + id); i++) {
				dataUser[i].setIndex(i);
				dataUser[i].setClassNum(classNum1[j]);
				dataUser[i].setNumTable(numTable2[j]);
				dataUser[i].setNumChair(numChair2[j]);
				dataUser[i].setNumWhiteboard(numWhiteboard2[j]);
				dataUser[i].setNumPC(numPC2[j]);
				dataUser[i].setNumProjector(numPro2[j]);
				dataUser[i].setNumAirCon(numAirCon2[j]);
				dataUser[i].setNumBulb(numBulb2[j]);
				dataUser[i].setNumFan(numFan2[j]);
				dataUser[i].setDate(dateT[j]);
				dataUser[i].setHour(h[j]);
				dataUser[i].setMinute(min[j]);
				dataUser[i].setSecond(sec[j]);
				fstream writeDataUser;
				writeDataUser.open(fileName + ".bin", ios::app | ios::binary);
				writeDataUser.write((char*)&dataUser[i], sizeof(ClassEquipment));
				writeDataUser.close();
				j++;
			}
			system("cls");
			cout << "<< Entry Data Successful >>" << endl;
		}
		else if (choose1 == "N" || choose1 == "n") {
			system("cls");
			cout << "2 Exit from Delete Data!\n";
		}
		else {
			system("cls");
			goto againAA;
		}

	}
	else if (choose == "N" || choose == "n") {
		system("cls");
		cout << "1 Exit from Delete Data!\n";
	}
	else {
		system("cls");
		goto againAA;
	}

}
void ClassEquipment::output(string fileName) {
	int id = 0, no = 0;
	int sumTable = 0, sumChair = 0, sumWhiteboard = 0, sumPC = 0, sumProjector = 0, sumAirCon = 0, sumBulb = 0, sumFan = 0;
	fstream readDataUser;
	readDataUser.open(fileName + ".bin", ios::in | ios::binary);
	if (readDataUser.peek() == EOF) {
		cout << "<< No Data! >>" << endl;
	}
	else {
		cout << cornerUL << row23 << middO << row47 << middO << row55 << middO << row23 << cornerUR << endl;
		cout << col << "\tIdentify\t" << col << "\t\t  Non-Electric\t\t\t" << col << "\t\t\tElectric\t\t\t" << col << "\t\t\t" << col << endl;
		cout << middL << row7 << middO << row15 << midd << row15 << middO << row15 << middO << row15 << midd << row15 << middO << row15 << middO << row7 << middO << row7 << middO << row7 << middR << " DATE OF DATA ENTRY\t" << col << endl;
		cout << col << " No\t" << col << " Class\t\t" << col << " Table\t\t" << col << " Chair\t\t" << col << " Whiteboard\t" << col << " PC\t\t" << col << " Projector\t" << col << " AC\t" << col << " Bulb\t" << col << " Fan\t" << col << "\t\t\t" << col << endl;
		while (readDataUser.read((char*)&dataUser[id], sizeof(ClassEquipment))) {
			no++;
			cout << middL << row7 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row7 << midd << row7 << midd << row7 << midd << row23 << middR << endl;
			cout << col << setw(6) << no << " "
				//cout << col << setw(6) << dataUser[id].getIndex() << " "
				<< col << setw(14) << dataUser[id].getClassNum() << " "
				<< col << setw(14) << dataUser[id].getNumTable() << " "
				<< col << setw(14) << dataUser[id].getNumChair() << " "
				<< col << setw(14) << dataUser[id].getNumWhiteboard() << " "
				<< col << setw(14) << dataUser[id].getNumPC() << " "
				<< col << setw(14) << dataUser[id].getNumProjector() << " "
				<< col << setw(6) << dataUser[id].getNumAirCon() << " "
				<< col << setw(6) << dataUser[id].getNumBulb() << " "
				<< col << setw(6) << dataUser[id].getNumFan() << " "
				<< col << " " << dataUser[id].getDate() << " " << dataUser[id].getHour() << ":" << dataUser[id].getMinute() << ":" << dataUser[id].getSecond() << "\t" << col << endl;
			sumTable += dataUser[id].getNumTable();
			sumChair += dataUser[id].getNumChair();
			sumWhiteboard += dataUser[id].getNumWhiteboard();
			sumPC += dataUser[id].getNumPC();
			sumProjector += dataUser[id].getNumProjector();
			sumAirCon += dataUser[id].getNumAirCon();
			sumBulb += dataUser[id].getNumBulb();
			sumFan += dataUser[id].getNumFan();
		}
		cout << middL << row7 << middU << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row7 << midd << row7 << midd << row7 << midd << row23 << middR << endl;
		cout << col << "\t  Total\t\t" << col << setw(14) << sumTable << " " << col << setw(14) << sumChair << " " << col << setw(14) << sumWhiteboard << " " << col << setw(14) << sumPC << " " << col << setw(14) << sumProjector << " " << col << setw(6) << sumAirCon << " " << col << setw(6) << sumBulb << " " << col << setw(6) << sumFan << " " << col << setw(24) << col << endl;
		cout << cornerLL << row23 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row7 << middU << row7 << middU << row7 << middU << row23 << cornerLR << endl;
	}
	readDataUser.close();
}
void ClassEquipment::edit(string fileName) {
again:
	int id = 0, id1 = 0, editNo1, no = 0, no1 = 0, ch;
	bool chk = false, chk1 = false;
	string choose, choose1, choose2;
	string newClassNum, editNo, editClassNum;
	string newNumTable, newNumChair, newNumWhiteboard, newNumPC, newNumPro, newNumAirCon, newNumBulb, newNumFan;
	int newNumTable1, newNumChair1, newNumWhiteboard1, newNumPC1, newNumPro1, newNumAirCon1, newNumBulb1, newNumFan1;
	string fileName1 = fileName + ".bin";
	string fileNameTemp = "tempfile.bin";
	fstream readDataUser;
	readDataUser.open(fileName + ".bin", ios::in | ios::binary);
	fstream writeDataUserTemp;
	writeDataUserTemp.open("tempfile.bin", ios::app | ios::binary);
	if (readDataUser.peek() == EOF) {
		cout << setw(72) << cornerULCase << RowE << cornerURCase << endl;
		cout << setw(72) << ColCase << " Edit Data " << ColCase << endl;
		cout << setw(72) << cornerLLCase << RowE << cornerLRCase << endl << endl;
		cout << "<< No Data! >>" << endl;
	}
	else {
		cout << "\n\n\n\n\n";
		cout << setw(53) << cornerULCase << RowCase << cornerURCase << endl;
		for (int i = 1; i <= 18; i++) {
			cout << setw(53) << ColCase << setw(51) << ColCase << endl;
		}
		cout << setw(53) << cornerLLCase << RowCase << cornerLRCase << endl;
		int y1 = 12, y2 = 13, y3 = 14;
		for (int i = 1; i <= 2; i++) {
			gotoxy2(55, y1);
			cout << cornerUL << rowBox << cornerUR << endl;
			gotoxy2(55, y2);
			cout << col << setw(45) << col << endl;
			gotoxy2(55, y3);
			cout << cornerLL << rowBox << cornerLR << endl;
			y1 += 5;
			y2 += 5;
			y3 += 5;
		}
		gotoxy2(71, 6);
		cout << cornerULCase << RowE << cornerURCase << endl;
		gotoxy2(71, 7);
		cout << ColCase << " Edit Data " << ColCase << endl;
		gotoxy2(71, 8);
		cout << cornerLLCase << RowE << cornerLRCase << endl;
		gotoxy2(55, 11);
		cout << "Edit By No:" << endl;
		gotoxy2(55, 16);
		cout << "Edit By Class Number:" << endl;
		gotoxy2(55, 21);
		cout << cornerULCase << RowB << cornerURCase << setw(16) << cornerULCase << RowB << cornerURCase << " " << cornerULCase << RowB << cornerURCase << endl;
		gotoxy2(55, 22);
		cout << colCase << " RESET  " << colCase << setw(16) << colCase << " CANCEL " << colCase << " " << colCase << "   OK   " << colCase << endl;
		gotoxy2(55, 23);
		cout << cornerLLCase << RowB << cornerLRCase << setw(16) << cornerLLCase << RowB << cornerLRCase << " " << cornerLLCase << RowB << cornerLRCase << endl;
	againA:
		gotoxy2(57, 13);
		fflush(stdin); getline(cin, editNo);
		if (editNo.empty()) {
			goto againA;
		}
		if (is_integer1(editNo)) {
			editNo1 = stoi(editNo);
		}
		else {
			goto againA;
		}
	againB:
		gotoxy2(57, 18);
		fflush(stdin); getline(cin, editClassNum);
		if (editClassNum.empty()) {
			goto againB;
		}
		cout << "\n\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
		fflush(stdin); getline(cin, choose);
		if (choose == "Y" || choose == "y") {
			while (readDataUser.read((char*)&dataUser[id], sizeof(ClassEquipment))) {
				no++;
				if (no == editNo1 && dataUser[id].getClassNum() == editClassNum) {
				againC:
					chk = true;
					system("cls");
					gotoxy2(71, 0);
					cout << cornerULCase << RowE << cornerURCase << endl;
					gotoxy2(71, 1);
					cout << ColCase << " Edit Data " << ColCase << endl;
					gotoxy2(71, 2);
					cout << cornerLLCase << RowE << cornerLRCase << endl << endl;
					int y1 = 5, y2 = 6, y3 = 7;
					for (int i = 1; i <= 9; i++) {
						gotoxy2(52, y1);
						cout << cornerULCase << RowCase << cornerURCase << endl;
						gotoxy2(52, y2);
						cout << ColCase << setw(51) << ColCase << endl;
						gotoxy2(52, y3);
						cout << cornerLLCase << RowCase << cornerLRCase << endl;
						y1 += 4;
						y2 += 4;
						y3 += 4;
					}
					gotoxy2(70, 6);
					cout << "[1] Class Number" << endl;
					gotoxy2(70, 10);
					cout << "[2] Table" << endl;
					gotoxy2(70, 14);
					cout << "[3] Chair" << endl;
					gotoxy2(70, 18);
					cout << "[4] Whiteboard" << endl;
					gotoxy2(70, 22);
					cout << "[5] PC" << endl;
					gotoxy2(70, 26);
					cout << "[6] Projector" << endl;
					gotoxy2(70, 30);
					cout << "[7] AC" << endl;
					gotoxy2(70, 34);
					cout << "[8] Bulb" << endl;
					gotoxy2(70, 38);
					cout << "[9] Fan" << endl << endl;
					cout << "\nInput your choice: ";
					fflush(stdin); getline(cin, choose1);
					if (choose1 == "1" || choose1 == "2" || choose1 == "3" || choose1 == "4" || choose1 == "5" || choose1 == "6" || choose1 == "7" || choose1 == "8" || choose1 == "9") {
					againD:
						system("cls");
						cout << endl;
						cout << setw(72) << cornerULCase << RowE << cornerURCase << endl;
						cout << setw(72) << ColCase << " Edit Data " << ColCase << endl;
						cout << setw(72) << cornerLLCase << RowE << cornerLRCase << endl << endl;
						cout << cornerUL << row23 << middO << row47 << middO << row55 << middO << row23 << cornerUR << endl;
						cout << col << "\tIdentify\t" << col << "\t\t  Non-Electric\t\t\t" << col << "\t\t\tElectric\t\t\t" << col << "\t\t\t" << col << endl;
						cout << middL << row7 << middO << row15 << midd << row15 << middO << row15 << middO << row15 << midd << row15 << middO << row15 << middO << row7 << middO << row7 << middO << row7 << middR << " DATE OF DATA ENTRY\t" << col << endl;
						cout << col << " No\t" << col << " Class\t\t" << col << " Table\t\t" << col << " Chair\t\t" << col << " Whiteboard\t" << col << " PC\t\t" << col << " Projector\t" << col << " AC\t" << col << " Bulb\t" << col << " Fan\t" << col << "\t\t\t" << col << endl;
						cout << middL << row7 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row7 << midd << row7 << midd << row7 << midd << row23 << middR << endl;
						cout << col << setw(8) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(8) << col << setw(8) << col << setw(8) << col << setw(24) << col << endl;
						cout << cornerLL << row7 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row7 << middU << row7 << middU << row7 << middU << row23 << cornerLR << endl << endl;
						cout << cornerULCase << RowB << cornerURCase << setw(123) << cornerULCase << RowB << cornerURCase << " " << cornerULCase << RowB << cornerURCase << endl;
						cout << colCase << " RESET  " << colCase << setw(123) << colCase << " CANCEL " << colCase << " " << colCase << "   OK   " << colCase << endl;
						cout << cornerLLCase << RowB << cornerLRCase << setw(123) << cornerLLCase << RowB << cornerLRCase << " " << cornerLLCase << RowB << cornerLRCase << endl;
						gotoxy2(2, 10);
						cout << no << endl;
						//string dateTime = dataUser[id].getDate() + " " + to_string(dataUser[id].getHour()) + ":" + to_string(dataUser[id].getMinute()) + ":" + to_string(dataUser[id].getSecond());
						//gotoxy2(130, 10);
						//cout << dateTime << endl;
						if (choose1 != "1") {
							gotoxy2(10, 10);
							cout << dataUser[id].getClassNum() << endl;
						}
						if (choose1 != "2") {
							gotoxy2(26, 10);
							cout << dataUser[id].getNumTable() << endl;
						}
						if (choose1 != "3") {
							gotoxy2(42, 10);
							cout << dataUser[id].getNumChair() << endl;
						}
						if (choose1 != "4") {
							gotoxy2(58, 10);
							cout << dataUser[id].getNumWhiteboard() << endl;
						}
						if (choose1 != "5") {
							gotoxy2(74, 10);
							cout << dataUser[id].getNumPC() << endl;
						}
						if (choose1 != "6") {
							gotoxy2(90, 10);
							cout << dataUser[id].getNumProjector() << endl;
						}
						if (choose1 != "7") {
							gotoxy2(106, 10);
							cout << dataUser[id].getNumAirCon() << endl;
						}
						if (choose1 != "8") {
							gotoxy2(114, 10);
							cout << dataUser[id].getNumBulb() << endl;
						}
						if (choose1 != "9") {
							gotoxy2(122, 10);
							cout << dataUser[id].getNumFan() << endl;
						}
						if (choose1 == "1") {
						again0:
							gotoxy2(10, 10);
							fflush(stdin); getline(cin, newClassNum);
							if (newClassNum.empty()) {
								goto again0;
							}
						}
						else if (choose1 == "2") {
						again1:
							gotoxy2(26, 10);
							fflush(stdin); getline(cin, newNumTable);
							if (newNumTable.empty()) {
								goto again1;
							}
							if (is_integer1(newNumTable)) {
								newNumTable1 = stoi(newNumTable);
							}
							else {
								goto again1;
							}
						}
						else if (choose1 == "3") {
						again2:
							gotoxy2(42, 10);
							fflush(stdin); getline(cin, newNumChair);
							if (newNumChair.empty()) {
								goto again2;
							}
							if (is_integer1(newNumChair)) {
								newNumChair1 = stoi(newNumChair);
							}
							else {
								goto again2;
							}
						}
						else if (choose1 == "4") {
						again3:
							gotoxy2(58, 10);
							fflush(stdin); getline(cin, newNumWhiteboard);
							if (newNumWhiteboard.empty()) {
								goto again3;
							}
							if (is_integer1(newNumWhiteboard)) {
								newNumWhiteboard1 = stoi(newNumWhiteboard);
							}
							else {
								;
								goto again3;
							}
						}
						else if (choose1 == "5") {
						again4:
							gotoxy2(74, 10);
							fflush(stdin); getline(cin, newNumPC);
							if (newNumPC.empty()) {
								goto again4;
							}
							if (is_integer1(newNumPC)) {
								newNumPC1 = stoi(newNumPC);
							}
							else {
								goto again4;
							}
						}
						else if (choose1 == "6") {
						again5:
							gotoxy2(90, 10);
							fflush(stdin); getline(cin, newNumPro);
							if (newNumPro.empty()) {
								goto again5;
							}
							if (is_integer1(newNumPro)) {
								newNumPro1 = stoi(newNumPro);
							}
							else {
								goto again5;
							}
						}
						else if (choose1 == "7") {
						again6:
							gotoxy2(106, 10);
							fflush(stdin); getline(cin, newNumAirCon);
							if (newNumAirCon.empty()) {
								goto again6;
							}
							if (is_integer1(newNumAirCon)) {
								newNumAirCon1 = stoi(newNumAirCon);
							}
							else {
								goto again6;
							}
						}
						else if (choose1 == "8") {
						again7:
							gotoxy2(114, 10);
							fflush(stdin); getline(cin, newNumBulb);
							if (newNumBulb.empty()) {
								goto again7;
							}
							if (is_integer1(newNumBulb)) {
								newNumBulb1 = stoi(newNumBulb);
							}
							else {
								goto again7;
							}
						}
						else if (choose1 == "9") {
						again8:
							gotoxy2(122, 10);
							fflush(stdin); getline(cin, newNumFan);
							if (newNumFan.empty()) {
								goto again8;
							}
							if (is_integer1(newNumFan)) {
								newNumFan1 = stoi(newNumFan);
							}
							else {
								goto again8;
							}
						}
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
						string dateTime = dateT + " " + to_string(h) + ":" + to_string(min) + ":" + to_string(sec);
						gotoxy2(130, 10);
						cout << dateTime << endl;
						cout << "\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
						fflush(stdin); getline(cin, choose2);
						if (choose2 == "Y" || choose2 == "y") {
							//chk1 = false;
							if (choose1 == "1") {
								dataUser[id].setClassNum(newClassNum);
							}
							else if (choose1 == "2") {
								dataUser[id].setNumTable(newNumTable1);
							}
							else if (choose1 == "3") {
								dataUser[id].setNumChair(newNumChair1);
							}
							else if (choose1 == "4") {
								dataUser[id].setNumWhiteboard(newNumWhiteboard1);
							}
							else if (choose1 == "5") {
								dataUser[id].setNumPC(newNumPC1);
							}
							else if (choose1 == "6") {
								dataUser[id].setNumProjector(newNumPro1);
							}
							else if (choose1 == "7") {
								dataUser[id].setNumAirCon(newNumAirCon1);
							}
							else if (choose1 == "8") {
								dataUser[id].setNumBulb(newNumBulb1);
							}
							else if (choose1 == "9") {
								dataUser[id].setNumFan(newNumFan1);
							}
							dataUser[id].setDate(dateT);
							dataUser[id].setHour(h);
							dataUser[id].setMinute(min);
							dataUser[id].setSecond(sec);
							system("cls");
							cout << "<< Edit Data Successful >>" << endl;
						}
						else if (choose2 == "N" || choose2 == "n") {
							goto againC;
						}
						else {
							system("cls");
							goto againD;
						}
					}
					else {
						system("cls");
						cout << "You input invalid choice!" << endl;
					}
					cout << "\n<< Press Enter to process [Edit Data Option] again >>" << endl;
					ch = _getch();
					if (ch == 13) {
						goto againC;
					}
					system("cls");
				}
				writeDataUserTemp.write((char*)&dataUser[id], sizeof(ClassEquipment));
			}
			if (chk == false) {
				system("cls");
				cout << "<< Edit Failed! >>" << endl;
			}
			readDataUser.close();
			writeDataUserTemp.close();
			remove(fileName1.c_str()); // style to remove and rename file name
			rename(fileNameTemp.c_str(), fileName1.c_str());
		}
		else if (choose == "N" || choose == "n") {
			system("cls");
			cout << "Exit from Edit Data!" << endl;
		}
		else {
			system("cls");
			goto again;
		}
	}
}
void ClassEquipment::update(string fileName) {
againAA:
	int id = 0, editNo1, no = 0;
	bool chk = false, chk1 = false;
	string choose, choose1;
	string newClassNum, editNo, editClassNum;
	string newNumTable, newNumChair, newNumWhiteboard, newNumPC, newNumPro, newNumAirCon, newNumBulb, newNumFan;
	int newNumTable1, newNumChair1, newNumWhiteboard1, newNumPC1, newNumPro1, newNumAirCon1, newNumBulb1, newNumFan1;
	string fileName1 = fileName + ".bin";
	string fileNameTemp = "tempfile.bin";
	fstream readDataUser;
	readDataUser.open(fileName + ".bin", ios::in | ios::binary);
	fstream writeDataUserTemp;
	writeDataUserTemp.open("tempfile.bin", ios::app | ios::binary);
	if (readDataUser.peek() == EOF) {
		cout << setw(71) << cornerULCase << RowD << cornerURCase << endl;
		cout << setw(71) << ColCase << " Update Data " << ColCase << endl;
		cout << setw(71) << cornerLLCase << RowD << cornerLRCase << endl << endl;
		cout << "<< No Data! >>" << endl;
	}
	else {
		cout << "\n\n\n\n\n";
		cout << setw(53) << cornerULCase << RowCase << cornerURCase << endl;
		for (int i = 1; i <= 18; i++) {
			cout << setw(53) << ColCase << setw(51) << ColCase << endl;
		}
		cout << setw(53) << cornerLLCase << RowCase << cornerLRCase << endl;
		int y1 = 12, y2 = 13, y3 = 14;
		for (int i = 1; i <= 2; i++) {
			gotoxy2(55, y1);
			cout << cornerUL << rowBox << cornerUR << endl;
			gotoxy2(55, y2);
			cout << col << setw(45) << col << endl;
			gotoxy2(55, y3);
			cout << cornerLL << rowBox << cornerLR << endl;
			y1 += 5;
			y2 += 5;
			y3 += 5;
		}
		gotoxy2(70, 6);
		cout << cornerULCase << RowD << cornerURCase << endl;
		gotoxy2(70, 7);
		cout << ColCase << " Update Data " << ColCase << endl;
		gotoxy2(70, 8);
		cout << cornerLLCase << RowD << cornerLRCase << endl;
		gotoxy2(55, 11);
		cout << "Update By No:" << endl;
		gotoxy2(55, 16);
		cout << "Update By Class Number:" << endl;
		gotoxy2(55, 21);
		cout << cornerULCase << RowB << cornerURCase << setw(16) << cornerULCase << RowB << cornerURCase << " " << cornerULCase << RowB << cornerURCase << endl;
		gotoxy2(55, 22);
		cout << colCase << " RESET  " << colCase << setw(16) << colCase << " CANCEL " << colCase << " " << colCase << "   OK   " << colCase << endl;
		gotoxy2(55, 23);
		cout << cornerLLCase << RowB << cornerLRCase << setw(16) << cornerLLCase << RowB << cornerLRCase << " " << cornerLLCase << RowB << cornerLRCase << endl;
	againA:
		gotoxy2(57, 13);
		fflush(stdin); getline(cin, editNo);
		if (editNo.empty()) {
			goto againA;
		}
		if (is_integer1(editNo)) {
			editNo1 = stoi(editNo);
		}
		else {
			goto againA;
		}
	againB:
		gotoxy2(57, 18);
		fflush(stdin); getline(cin, editClassNum);
		if (editClassNum.empty()) {
			goto againB;
		}
		cout << "\n\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
		fflush(stdin); getline(cin, choose);
		if (choose == "Y" || choose == "y") {
			while (readDataUser.read((char*)&dataUser[id], sizeof(ClassEquipment))) {
				no++;
				if (no == editNo1 && dataUser[id].getClassNum() == editClassNum) {
				againBB:
					chk = true;
					system("cls");
					cout << endl;
					cout << setw(71) << cornerULCase << RowU << cornerURCase << endl;
					cout << setw(71) << ColCase << " Update Data " << ColCase << endl;
					cout << setw(71) << cornerLLCase << RowU << cornerLRCase << endl << endl;
					cout << cornerUL << row23 << middO << row47 << middO << row55 << middO << row23 << cornerUR << endl;
					cout << col << "\tIdentify\t" << col << "\t\t  Non-Electric\t\t\t" << col << "\t\t\tElectric\t\t\t" << col << "\t\t\t" << col << endl;
					cout << middL << row7 << middO << row15 << midd << row15 << middO << row15 << middO << row15 << midd << row15 << middO << row15 << middO << row7 << middO << row7 << middO << row7 << middR << " DATE OF DATA ENTRY\t" << col << endl;
					cout << col << " No\t" << col << " Class\t\t" << col << " Table\t\t" << col << " Chair\t\t" << col << " Whiteboard\t" << col << " PC\t\t" << col << " Projector\t" << col << " AC\t" << col << " Bulb\t" << col << " Fan\t" << col << "\t\t\t" << col << endl;
					cout << middL << row7 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row7 << midd << row7 << midd << row7 << midd << row23 << middR << endl;
					cout << col << setw(8) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(8) << col << setw(8) << col << setw(8) << col << setw(24) << col << endl;
					cout << cornerLL << row7 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row7 << middU << row7 << middU << row7 << middU << row23 << cornerLR << endl << endl;
					cout << cornerULCase << RowB << cornerURCase << setw(123) << cornerULCase << RowB << cornerURCase << " " << cornerULCase << RowB << cornerURCase << endl;
					cout << colCase << " RESET  " << colCase << setw(123) << colCase << " CANCEL " << colCase << " " << colCase << "   OK   " << colCase << endl;
					cout << cornerLLCase << RowB << cornerLRCase << setw(123) << cornerLLCase << RowB << cornerLRCase << " " << cornerLLCase << RowB << cornerLRCase << endl;

					gotoxy2(2, 10);
					cout << no << endl;
				again0:
					gotoxy2(10, 10);
					fflush(stdin); getline(cin, newClassNum);
					if (newClassNum.empty()) {
						goto again0;
					}
				again1:
					gotoxy2(26, 10);
					fflush(stdin); getline(cin, newNumTable);
					if (newNumTable.empty()) {
						goto again1;
					}
					if (is_integer1(newNumTable)) {
						newNumTable1 = stoi(newNumTable);
					}
					else {
						goto again1;
					}
				again2:
					gotoxy2(42, 10);
					fflush(stdin); getline(cin, newNumChair);
					if (newNumChair.empty()) {
						goto again2;
					}
					if (is_integer1(newNumChair)) {
						newNumChair1 = stoi(newNumChair);
					}
					else {
						goto again2;
					}
				again3:
					gotoxy2(58, 10);
					fflush(stdin); getline(cin, newNumWhiteboard);
					if (newNumWhiteboard.empty()) {
						goto again3;
					}
					if (is_integer1(newNumWhiteboard)) {
						newNumWhiteboard1 = stoi(newNumWhiteboard);
					}
					else {
						;
						goto again3;
					}
				again4:
					gotoxy2(74, 10);
					fflush(stdin); getline(cin, newNumPC);
					if (newNumPC.empty()) {
						goto again4;
					}
					if (is_integer1(newNumPC)) {
						newNumPC1 = stoi(newNumPC);
					}
					else {
						goto again4;
					}
				again5:
					gotoxy2(90, 10);
					fflush(stdin); getline(cin, newNumPro);
					if (newNumPro.empty()) {
						goto again5;
					}
					if (is_integer1(newNumPro)) {
						newNumPro1 = stoi(newNumPro);
					}
					else {
						goto again5;
					}
				again6:
					gotoxy2(106, 10);
					fflush(stdin); getline(cin, newNumAirCon);
					if (newNumAirCon.empty()) {
						goto again6;
					}
					if (is_integer1(newNumAirCon)) {
						newNumAirCon1 = stoi(newNumAirCon);
					}
					else {
						goto again6;
					}
				again7:
					gotoxy2(114, 10);
					fflush(stdin); getline(cin, newNumBulb);
					if (newNumBulb.empty()) {
						goto again7;
					}
					if (is_integer1(newNumBulb)) {
						newNumBulb1 = stoi(newNumBulb);
					}
					else {
						goto again7;
					}
				again8:
					gotoxy2(122, 10);
					fflush(stdin); getline(cin, newNumFan);
					if (newNumFan.empty()) {
						goto again8;
					}
					if (is_integer1(newNumFan)) {
						newNumFan1 = stoi(newNumFan);
					}
					else {
						goto again8;
					}
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
					string dateTime = dateT + " " + to_string(h) + ":" + to_string(min) + ":" + to_string(sec);
					gotoxy2(130, 10);
					cout << dateTime << endl;
					cout << "\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
					fflush(stdin); getline(cin, choose1);
					if (choose1 == "Y" || choose1 == "y") {
						//chk1 = true;
						dataUser[id].setClassNum(newClassNum);
						dataUser[id].setNumTable(newNumTable1);
						dataUser[id].setNumChair(newNumChair1);
						dataUser[id].setNumWhiteboard(newNumWhiteboard1);
						dataUser[id].setNumPC(newNumPC1);
						dataUser[id].setNumProjector(newNumPro1);
						dataUser[id].setNumAirCon(newNumAirCon1);
						dataUser[id].setNumBulb(newNumBulb1);
						dataUser[id].setNumFan(newNumFan1);
						dataUser[id].setDate(dateT);
						dataUser[id].setHour(h);
						dataUser[id].setMinute(min);
						dataUser[id].setSecond(sec);
						system("cls");
						cout << "<< Update Data Successful >>" << endl;
					}
					else if (choose1 == "N" || choose1 == "n") {
						system("cls");
						cout << "2 Exit from Update Data!\n";
					}
					else {
						system("cls");
						goto againBB;
					}
				}
				writeDataUserTemp.write((char*)&dataUser[id], sizeof(ClassEquipment));
			}
			if (chk == false) {
				system("cls");
				cout << "<< Update Failed! >>" << endl;
			}
			readDataUser.close();
			writeDataUserTemp.close();
			remove(fileName1.c_str()); // style to remove and rename file name
			rename(fileNameTemp.c_str(), fileName1.c_str());
		}
		else if (choose == "N" || choose == "n") {
			system("cls");
			cout << "1 Exit from Update Data!\n";
		}
		else {
			system("cls");
			goto againAA;
		}
	}
}
ClassEquipment dataUser1[1000];
ClassEquipment dataUser3[1000];
void ClassEquipment::deleted(string fileName) {
againAA:
	string deleteClassNum, deleteNo;
	int id = 0, id1 = 0, deleteNo1, no = 0, no1 = 0;
	bool chk = false, chk1 = false;
	string choose, choose1;
	string fileName1 = fileName + ".bin";
	string fileNameTemp = "tempfile.bin";
	fstream readDataUser;
	readDataUser.open(fileName + ".bin", ios::in | ios::binary);
	fstream readDataUser1;
	readDataUser1.open(fileName + ".bin", ios::in | ios::binary);
	fstream writeDataUserTemp;
	writeDataUserTemp.open("tempfile.bin", ios::app | ios::binary);
	if (readDataUser.peek() == EOF) {
		cout << setw(71) << cornerULCase << RowD << cornerURCase << endl;
		cout << setw(71) << ColCase << " Delete Data " << ColCase << endl;
		cout << setw(71) << cornerLLCase << RowD << cornerLRCase << endl << endl;
		cout << "<< No Data! >>" << endl;
	}
	else {
		//againAA:
		cout << "\n\n\n\n\n";
		cout << setw(53) << cornerULCase << RowCase << cornerURCase << endl;
		for (int i = 1; i <= 18; i++) {
			cout << setw(53) << ColCase << setw(51) << ColCase << endl;
		}
		cout << setw(53) << cornerLLCase << RowCase << cornerLRCase << endl;
		int y1 = 12, y2 = 13, y3 = 14;
		for (int i = 1; i <= 2; i++) {
			gotoxy2(55, y1);
			cout << cornerUL << rowBox << cornerUR << endl;
			gotoxy2(55, y2);
			cout << col << setw(45) << col << endl;
			gotoxy2(55, y3);
			cout << cornerLL << rowBox << cornerLR << endl;
			y1 += 5;
			y2 += 5;
			y3 += 5;
		}
		gotoxy2(70, 6);
		cout << cornerULCase << RowD << cornerURCase << endl;
		gotoxy2(70, 7);
		cout << ColCase << " Delete Data " << ColCase << endl;
		gotoxy2(70, 8);
		cout << cornerLLCase << RowD << cornerLRCase << endl;
		//cout << rowDe << endl << endl;
		gotoxy2(55, 11);
		cout << "Delete By No:" << endl;
		gotoxy2(55, 16);
		cout << "Delete By Class Number:" << endl;
		gotoxy2(55, 21);
		cout << cornerULCase << RowB << cornerURCase << setw(16) << cornerULCase << RowB << cornerURCase << " " << cornerULCase << RowB << cornerURCase << endl;
		gotoxy2(55, 22);
		cout << colCase << " RESET  " << colCase << setw(16) << colCase << " CANCEL " << colCase << " " << colCase << "   OK   " << colCase << endl;
		gotoxy2(55, 23);
		cout << cornerLLCase << RowB << cornerLRCase << setw(16) << cornerLLCase << RowB << cornerLRCase << " " << cornerLLCase << RowB << cornerLRCase << endl;
	again1:
		gotoxy2(57, 13);
		fflush(stdin); getline(cin, deleteNo);
		if (deleteNo.empty()) {
			goto again1;
		}
		if (is_integer1(deleteNo)) {
			deleteNo1 = stoi(deleteNo);
		}
		else {
			goto again1;
		}
	again2:
		gotoxy2(57, 18);
		fflush(stdin); getline(cin, deleteClassNum);
		if (deleteClassNum.empty()) {
			goto again2;
		}
		cout << "\n\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
		fflush(stdin); getline(cin, choose);
		if (choose == "Y" || choose == "y") {
			while (readDataUser.read((char*)&dataUser1[id], sizeof(ClassEquipment))) {
				no++;
				if (no == deleteNo1 && dataUser1[id].getClassNum() == deleteClassNum) {
					chk = true;
					system("cls");
					cout << endl;
					cout << setw(71) << cornerULCase << RowD << cornerURCase << endl;
					cout << setw(71) << ColCase << " Delete Data " << ColCase << endl;
					cout << setw(71) << cornerLLCase << RowD << cornerLRCase << endl << endl;
					cout << cornerUL << row23 << middO << row47 << middO << row55 << middO << row23 << cornerUR << endl;
					cout << col << "\tIdentify\t" << col << "\t\t  Non-Electric\t\t\t" << col << "\t\t\tElectric\t\t\t" << col << "\t\t\t" << col << endl;
					cout << middL << row7 << middO << row15 << midd << row15 << middO << row15 << middO << row15 << midd << row15 << middO << row15 << middO << row7 << middO << row7 << middO << row7 << middR << " DATE OF DATA ENTRY\t" << col << endl;
					cout << col << " No\t" << col << " Class\t\t" << col << " Table\t\t" << col << " Chair\t\t" << col << " Whiteboard\t" << col << " PC\t\t" << col << " Projector\t" << col << " AC\t" << col << " Bulb\t" << col << " Fan\t" << col << "\t\t\t" << col << endl;
					cout << middL << row7 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row7 << midd << row7 << midd << row7 << midd << row23 << middR << endl;
					cout << col << setw(6) << no << " "
						<< col << setw(14) << dataUser1[id].getClassNum() << " "
						<< col << setw(14) << dataUser1[id].getNumTable() << " "
						<< col << setw(14) << dataUser1[id].getNumChair() << " "
						<< col << setw(14) << dataUser1[id].getNumWhiteboard() << " "
						<< col << setw(14) << dataUser1[id].getNumPC() << " "
						<< col << setw(14) << dataUser1[id].getNumProjector() << " "
						<< col << setw(6) << dataUser1[id].getNumAirCon() << " "
						<< col << setw(6) << dataUser1[id].getNumBulb() << " "
						<< col << setw(6) << dataUser1[id].getNumFan() << " "
						<< col << " " << dataUser1[id].getDate() << " " << dataUser1[id].getHour() << ":" << dataUser1[id].getMinute() << ":" << dataUser1[id].getSecond() << "\t" << col << endl;
					cout << cornerLL << row7 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row7 << middU << row7 << middU << row7 << middU << row23 << cornerLR << endl << endl;
					cout << cornerULCase << RowB << cornerURCase << setw(123) << cornerULCase << RowB << cornerURCase << " " << cornerULCase << RowB << cornerURCase << endl;
					cout << colCase << " RESET  " << colCase << setw(123) << colCase << " CANCEL " << colCase << " " << colCase << "   OK   " << colCase << endl;
					cout << cornerLLCase << RowB << cornerLRCase << setw(123) << cornerLLCase << RowB << cornerLRCase << " " << cornerLLCase << RowB << cornerLRCase << endl; // Neak Oknha Neang Thean
				}
			}
			readDataUser.close();
			if (chk == true) {
				cout << "\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
				fflush(stdin); getline(cin, choose1);
				if (choose1 == "Y" || choose1 == "y") {
					system("cls");
					cout << "<< Delete Data Successful >>" << endl;
					while (readDataUser1.read((char*)&dataUser3[id1], sizeof(ClassEquipment))) {
						no1++;
						//chk1 = true;
						if (no1 != deleteNo1 || dataUser3[id1].getClassNum() != deleteClassNum) {
							writeDataUserTemp.write((char*)&dataUser3[id1], sizeof(ClassEquipment));
						}
					}
					readDataUser1.close();
					writeDataUserTemp.close();
					remove(fileName1.c_str());
					rename(fileNameTemp.c_str(), fileName1.c_str());
				}
				else if (choose1 == "N" || choose1 == "n") {
					system("cls");
					cout << "2 Exit from Delete Data!\n";
				}
				else {
					system("cls");
					goto againAA;
				}
				//if (chk1 != true) {
				//	system("cls");
				//	cout << "<< 2 Delete Failed! >>" << endl;
				//}
			}
			else {
				system("cls");
				cout << "<< Delete Failed! >>" << endl;
			}
		}
		else if (choose == "N" || choose == "n") {
			system("cls");
			cout << "1 Exit from Delete Data!\n";
		}
		else {
			system("cls");
			goto againAA;
		}
	}
}
void ClassEquipment::search(string fileName) {
	string searchClassNum;
	int id = 0, no = 0;
	bool chk = false;
	string rowS1(19, 205);
	fstream readDataUser;
	readDataUser.open(fileName + ".bin", ios::in | ios::binary);
	cout << endl;
	cout << setw(71) << cornerULCase << RowS << cornerURCase << endl;
	cout << setw(71) << ColCase << " Search Data " << ColCase << endl;
	cout << setw(71) << cornerLLCase << RowS << cornerLRCase << endl << endl;
	if (readDataUser.peek() == EOF) {
		cout << "<< No Data! >>" << endl;
	}
	else {
		gotoxy2(64, 14);
		cout << "<< Search By Class Number >>";
		gotoxy2(55, 15);
		cout << cornerUL << rowBox << cornerUR << endl;
		gotoxy2(55, 16);
		cout << col << setw(45) << col << endl;
		gotoxy2(55, 17);
		cout << cornerLL << rowBox << cornerLR << endl;
	again:
		gotoxy2(57, 16);
		fflush(stdin); getline(cin, searchClassNum);
		if (searchClassNum.empty()) {
			goto again;
		}
		system("cls");
		while (readDataUser.read((char*)&dataUser[id], sizeof(ClassEquipment))) {
			no++;
			if (dataUser[id].getClassNum() == searchClassNum) {
				chk = true;
				cout << setw(68) << cornerULCase << rowS1 << cornerURCase << endl;
				cout << setw(68) << ColCase << " Search Successful " << ColCase << endl;
				cout << setw(68) << cornerLLCase << rowS1 << cornerLRCase << endl << endl;
				cout << cornerUL << row23 << middO << row47 << middO << row55 << middO << row23 << cornerUR << endl;
				cout << col << "\tIdentify\t" << col << "\t\t  Non-Electric\t\t\t" << col << "\t\t\tElectric\t\t\t" << col << "\t\t\t" << col << endl;
				cout << middL << row7 << middO << row15 << midd << row15 << middO << row15 << middO << row15 << midd << row15 << middO << row15 << middO << row7 << middO << row7 << middO << row7 << middR << " DATE OF DATA ENTRY\t" << col << endl;
				cout << col << " No\t" << col << " Class\t\t" << col << " Table\t\t" << col << " Chair\t\t" << col << " Whiteboard\t" << col << " PC\t\t" << col << " Projector\t" << col << " AC\t" << col << " Bulb\t" << col << " Fan\t" << col << "\t\t\t" << col << endl;
				cout << middL << row7 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row7 << midd << row7 << midd << row7 << midd << row23 << middR << endl;
				cout << col << setw(6) << no << " "
					//cout << col << setw(6) << dataUser[id].getIndex() << " "
					<< col << setw(14) << dataUser[id].getClassNum() << " "
					<< col << setw(14) << dataUser[id].getNumTable() << " "
					<< col << setw(14) << dataUser[id].getNumChair() << " "
					<< col << setw(14) << dataUser[id].getNumWhiteboard() << " "
					<< col << setw(14) << dataUser[id].getNumPC() << " "
					<< col << setw(14) << dataUser[id].getNumProjector() << " "
					<< col << setw(6) << dataUser[id].getNumAirCon() << " "
					<< col << setw(6) << dataUser[id].getNumBulb() << " "
					<< col << setw(6) << dataUser[id].getNumFan() << " "
					<< col << " " << dataUser[id].getDate() << " " << dataUser[id].getHour() << ":" << dataUser[id].getMinute() << ":" << dataUser[id].getSecond() << "\t" << col << endl;
				cout << cornerLL << row7 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row7 << middU << row7 << middU << row7 << middU << row23 << cornerLR << endl;
			}
		}
		if (chk == false) {
			cout << "<< Search Not Found! >>" << endl;
		}
	}
	readDataUser.close();
}
void ClassEquipment::add(string fileName) {
	int id = 0, no = 0;
	string addClassNum;
	string addNumTable, addNumChair, addNumWhiteboard, addNumPC, addNumPro, addNumAirCon, addNumBulb, addNumFan;
	int addNumTable1, addNumChair1, addNumWhiteboard1, addNumPC1, addNumPro1, addNumAirCon1, addNumBulb1, addNumFan1;
	string choose;
	fstream readNo;
	readNo.open(fileName + ".bin", ios::in | ios::binary);
	while (readNo.read((char*)&dataUser[id], sizeof(ClassEquipment))) {
		no++;
	}
	no++;
	id = dataUser[id].getIndex();
	readNo.close();
	id++;
againA:
	cout << endl;
	cout << setw(73) << cornerULCase << RowA << cornerURCase << endl;
	cout << setw(73) << ColCase << " Add Data " << ColCase << endl;
	cout << setw(73) << cornerLLCase << RowA << cornerLRCase << endl << endl;
	cout << cornerUL << row23 << middO << row47 << middO << row55 << middO << row23 << cornerUR << endl;
	cout << col << "\tIdentify\t" << col << "\t\t  Non-Electric\t\t\t" << col << "\t\t\tElectric\t\t\t" << col << "\t\t\t" << col << endl;
	cout << middL << row7 << middO << row15 << midd << row15 << middO << row15 << middO << row15 << midd << row15 << middO << row15 << middO << row7 << middO << row7 << middO << row7 << middR << " DATE OF DATA ENTRY\t" << col << endl;
	cout << col << " No\t" << col << " Class\t\t" << col << " Table\t\t" << col << " Chair\t\t" << col << " Whiteboard\t" << col << " PC\t\t" << col << " Projector\t" << col << " AC\t" << col << " Bulb\t" << col << " Fan\t" << col << "\t\t\t" << col << endl;
	cout << middL << row7 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row15 << midd << row7 << midd << row7 << midd << row7 << midd << row23 << middR << endl;
	cout << col << setw(8) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(16) << col << setw(8) << col << setw(8) << col << setw(8) << col << setw(24) << col << endl;
	cout << cornerLL << row7 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row15 << middU << row7 << middU << row7 << middU << row7 << middU << row23 << cornerLR << endl << endl;
	cout << cornerULCase << RowB << cornerURCase << setw(123) << cornerULCase << RowB << cornerURCase << " " << cornerULCase << RowB << cornerURCase << endl;
	cout << colCase << " RESET  " << colCase << setw(123) << colCase << " CANCEL " << colCase << " " << colCase << "   OK   " << colCase << endl;
	cout << cornerLLCase << RowB << cornerLRCase << setw(123) << cornerLLCase << RowB << cornerLRCase << " " << cornerLLCase << RowB << cornerLRCase << endl;
	gotoxy2(2, 10);
	cout << no << endl;
again0:
	gotoxy2(10, 10);
	fflush(stdin); getline(cin, addClassNum);
	if (addClassNum.empty()) {
		goto again0;
	}
again1:
	gotoxy2(26, 10);
	fflush(stdin); getline(cin, addNumTable);
	if (addNumTable.empty()) {
		goto again1;
	}
	if (is_integer1(addNumTable)) {
		addNumTable1 = stoi(addNumTable);
	}
	else {
		goto again1;
	}
again2:
	gotoxy2(42, 10);
	fflush(stdin); getline(cin, addNumChair);
	if (addNumChair.empty()) {
		goto again2;
	}
	if (is_integer1(addNumChair)) {
		addNumChair1 = stoi(addNumChair);
	}
	else {
		goto again2;
	}
again3:
	gotoxy2(58, 10);
	fflush(stdin); getline(cin, addNumWhiteboard);
	if (addNumWhiteboard.empty()) {
		goto again3;
	}
	if (is_integer1(addNumWhiteboard)) {
		addNumWhiteboard1 = stoi(addNumWhiteboard);
	}
	else {
		goto again3;
	}
again4:
	gotoxy2(74, 10);
	fflush(stdin); getline(cin, addNumPC);
	if (addNumPC.empty()) {
		goto again4;
	}
	if (is_integer1(addNumPC)) {
		addNumPC1 = stoi(addNumPC);
	}
	else {
		goto again4;
	}
again5:
	gotoxy2(90, 10);
	fflush(stdin); getline(cin, addNumPro);
	if (addNumPro.empty()) {
		goto again5;
	}
	if (is_integer1(addNumPro)) {
		addNumPro1 = stoi(addNumPro);
	}
	else {
		goto again5;
	}
again6:
	gotoxy2(106, 10);
	fflush(stdin); getline(cin, addNumAirCon);
	if (addNumAirCon.empty()) {
		goto again6;
	}
	if (is_integer1(addNumAirCon)) {
		addNumAirCon1 = stoi(addNumAirCon);
	}
	else {
		goto again6;
	}
again7:
	gotoxy2(114, 10);
	fflush(stdin); getline(cin, addNumBulb);
	if (addNumBulb.empty()) {
		goto again7;
	}
	if (is_integer1(addNumBulb)) {
		addNumBulb1 = stoi(addNumBulb);
	}
	else {
		goto again7;
	}
again8:
	gotoxy2(122, 10);
	fflush(stdin); getline(cin, addNumFan);
	if (addNumFan.empty()) {
		goto again8;
	}
	if (is_integer1(addNumFan)) {
		addNumFan1 = stoi(addNumFan);
	}
	else {
		goto again8;
	}
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
	string dateTime = dateT + " " + to_string(h) + ":" + to_string(min) + ":" + to_string(sec);
	gotoxy2(130, 10);
	cout << dateTime << endl;
	cout << "\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
	fflush(stdin); getline(cin, choose);
	if (choose == "Y" || choose == "y") {
		dataUser[id].setIndex(id);
		dataUser[id].setClassNum(addClassNum);
		dataUser[id].setNumTable(addNumTable1);
		dataUser[id].setNumChair(addNumChair1);
		dataUser[id].setNumWhiteboard(addNumWhiteboard1);
		dataUser[id].setNumPC(addNumPC1);
		dataUser[id].setNumProjector(addNumPro1);
		dataUser[id].setNumAirCon(addNumAirCon1);
		dataUser[id].setNumBulb(addNumBulb1);
		dataUser[id].setNumFan(addNumFan1);
		dataUser[id].setDate(dateT);
		dataUser[id].setHour(h);
		dataUser[id].setMinute(min);
		dataUser[id].setSecond(sec);
		fstream writeDataUser;
		writeDataUser.open(fileName + ".bin", ios::app | ios::binary);
		writeDataUser.write((char*)&dataUser[id], sizeof(ClassEquipment));
		writeDataUser.close();
		system("cls");
		cout << "<< Add Data Successful >>" << endl;
	}
	else if (choose == "N" || choose == "n") {
		system("cls");
		cout << "Exit from Addition Data!\n";
	}
	else {
		system("cls");
		goto againA;
	}
}
void ClassEquipment::reset(string fileName) {
	string ch;
	string fileName1 = fileName + ".bin";
	string fileNameTemp = "tempfile.bin";
	cout << setw(72) << cornerULCase << RowR << cornerURCase << endl;
	cout << setw(72) << ColCase << " Reset Data " << ColCase << endl;
	cout << setw(72) << cornerLLCase << RowR << cornerLRCase << endl << endl;
	cout << "Do you want to Reset Data?" << endl;
	cout << "\n=> Press [Y] to [RESET] : ";
	fflush(stdin); getline(cin, ch);
	if (ch == "Y" || ch == "y") {
		system("cls");
		cout << "<< RESET Successful >>" << endl;
		remove(fileName1.c_str());
	}
	else {
		system("cls");
		cout << "<< RESET failed! >>" << endl;
	}
}
void ClassEquipment::about(string username, string buildingName, string email, string phoneNum, string password, string fileName, string date1, int hour1, int minute1, int second1) {
	cout << setw(72) << cornerULCase << RowR << cornerURCase << endl;
	cout << setw(72) << ColCase << " Your  Info " << ColCase << endl;
	cout << setw(72) << cornerLLCase << RowR << cornerLRCase << endl << endl;
	cout << cornerUL << row15 << middO << row15 << middO << row31 << middO << row15 << middO << row15 << middO << row23 << middO << row23 << cornerUR << endl;
	cout << col << " Username\t" << col << " Building Name\t" << col << " Email\t\t\t\t" << col << " Phone Number\t" << col << " Password\t" << col << " File Name\t\t" << col << " Date of registration\t" << col << endl;
	cout << middL << row15 << midd << row15 << midd << row31 << midd << row15 << midd << row15 << midd << row23 << midd << row23 << middR << endl;
	cout << col << setw(14) << username << " ";
	cout << col << setw(14) << buildingName << " ";
	cout << col << setw(20) << email << "@gmail.com ";
	cout << col << setw(14) << phoneNum << " ";
	cout << col << setw(14) << password << " ";
	cout << col << setw(18) << fileName << ".bin ";
	cout << col << " " << date1 << " " << hour1 << ":" << minute1 << ":" << second1 << "\t" << col << endl;
	cout << cornerLL << row15 << middU << row15 << middU << row31 << middU << row15 << middU << row15 << middU << row23 << middU << row23 << cornerLR << endl;
}