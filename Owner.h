#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

// class for only admin to login to system and then manage users such a info, display
class Owner
{
private:
    string username;
    string password;
public:
    //Owner(string username, string password) : username(username), password(password) {}
    Owner(string username, string password);
    Owner();
    bool login(string username, string password);
    void loginSystem();
};