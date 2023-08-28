#pragma once
#include <iostream>
using namespace std;

// class for manage data of all users such a input, output, update, delete, search, add
class ClassEquipment
{
private:
	string classNum;
	int index, numTable, numChair, numWhiteboard, numPC, numProjector, numAirCon, numBulb, numFan;
	string date;
	int hour, minute, second;
public:
	ClassEquipment(int index, string classNum, int numTable, int numChair, int numWhiteboard, int numPC, int numProjector, int numAirCon, int numBulb, int numFan, string date, int hour, int minute, int second);
	ClassEquipment();
	void setIndex(int value);
	int getIndex()const;
	void setClassNum(const string& value);
	string getClassNum()const;
	void setNumTable(int value);
	int getNumTable()const;
	void setNumChair(int value);
	int getNumChair()const;
	void setNumWhiteboard(int value);
	int getNumWhiteboard()const;
	void setNumPC(int value);
	int getNumPC()const;
	void setNumProjector(int value);
	int getNumProjector()const;
	void setNumAirCon(int value);
	int getNumAirCon()const;
	void setNumBulb(int value);
	int getNumBulb()const;
	void setNumFan(int value);
	int getNumFan()const;
	void setDate(const string& value);
	string getDate()const;
	void setHour(int value);
	int getHour()const;
	void setMinute(int value);
	int getMinute()const;
	void setSecond(int value);
	int getSecond()const;
	void option(string username, string buildingName, string email, string phoneNum, string password, string fileName, string date1, int hour1, int minute1, int second1); // option is function of switch for processing case such a input, output, search, update, deleted, add 
	void input(string fileName);
	void output(string fileName);
	void edit(string fileName);
	void update(string fileName);
	void deleted(string fileName);
	void search(string fileName);
	void add(string fileName);
	void reset(string fileName);
	void about(string username, string buildingName, string email, string phoneNum, string password, string fileName, string date1, int hour1, int minute1, int second1);
};