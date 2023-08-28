#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

// class for manage users such a register, login, info, display, edit user
class ClassDataUser
{
private:
	int no;
	string userName, buildingName, email, phoneNum, password, fileName;
	string date1;
	int hour1, minute1, second1;
public:
	ClassDataUser(int no, string userName, string buildingName, string email, string phoneNum, string password, string fileName, string date1, int hour1, int minute1, int second1);
	ClassDataUser();
	void setNo(int value);
	int getNo()const;
	void setUserName(string& value);
	string getUserName()const;
	void setBuildingName(string& value);
	string getBuildingName()const;
	void setEmail(string& value);
	string getEmail()const;
	void setPhoneNum(string& value);
	string getPhoneNum()const;
	void setPassword(string& value);
	string getPassword()const;
	void setFileName(string& value);
	string getFileName()const;
	void setDate1(const string& value);
	string getDate1()const;
	void setHour1(int value);
	int getHour1()const;
	void setMinute1(int value);
	int getMinute1()const;
	void setSecond1(int value);
	int getSecond1()const;
	void userRegister();
	void userLogin();
	void ownerOption();
	void userInfo(); // show info of all users
	void userDisplay(); // show all data that all user input
	void editUser(); // edit user info for some field by owner
	void updateUser(); // update user info all field by owner
	void deleteUser(); // delete user by owner
	void manageData(); // data management
};