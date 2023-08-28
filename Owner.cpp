#include "Owner.h"
#include "ClassDataUser.h"
#include <Windows.h>
#include <string>
#include <fstream>

void gotoxy3(short x, short y)           //definition of gotoxy function//                                               
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

ClassDataUser user23;
//Owner(string username, string password) : username(username), password(password) {}
Owner::Owner(string username, string password) {
    this->username = username;
    this->password = password;
}
Owner::Owner() {
    this->username = "NULL";
    this->password = "NULL";
}
bool Owner::login(string username, string password) {
    if (this->username == username && this->password == password) {
        return true;
    }
    else {
        return false;
    }
}
void Owner::loginSystem() {
    string RowO(7, 205), RowCase(50, 205), rowBox(44, 196), RowB(8, 205); // row owner
    char ColCase = 219, colCase = 186;
    char cornerULCase = 201, cornerURCase = 187, cornerLLCase = 200, cornerLRCase = 188;
    char col = 179;
    char cornerUL = 218, cornerUR = 191, cornerLL = 192, cornerLR = 217;
    string ownername;
    char password[100];
    int i;
    char ch;
    string choose2;
    Owner owner1("lyyeang", "ly123");
    Owner owner2("kithmeng", "km123");
againBB:
    cout << "\n\n\n\n\n";
    cout << setw(53) << cornerULCase << RowCase << cornerURCase << endl;
    for (int i = 1; i <= 18; i++) {
        cout << setw(53) << ColCase << setw(51) << ColCase << endl;
    }
    cout << setw(53) << cornerLLCase << RowCase << cornerLRCase << endl;
    gotoxy3(73, 6);
    cout << cornerULCase << RowO << cornerURCase << endl;
    gotoxy3(73, 7);
    cout << ColCase << " Owner " << ColCase << endl;
    gotoxy3(73, 8);
    cout << cornerLLCase << RowO << cornerLRCase << endl;
    //cout << row << endl << endl;
    int y1 = 12, y2 = 13, y3 = 14;
    for (int i = 1; i <= 2; i++) {
        gotoxy3(55, y1);
        cout << cornerUL << rowBox << cornerUR << endl;
        gotoxy3(55, y2);
        cout << col << setw(45) << col << endl;
        gotoxy3(55, y3);
        cout << cornerLL << rowBox << cornerLR << endl;
        y1 += 5;
        y2 += 5;
        y3 += 5;
    }
    gotoxy3(55, 21);
    cout << cornerULCase << RowB << cornerURCase << setw(16) << cornerULCase << RowB << cornerURCase << " " << cornerULCase << RowB << cornerURCase << endl;
    gotoxy3(55, 22);
    cout << colCase << " RESET  " << colCase << setw(16) << colCase << " CANCEL " << colCase << " " << colCase << "   OK   " << colCase << endl;
    gotoxy3(55, 23);
    cout << cornerLLCase << RowB << cornerLRCase << setw(16) << cornerLLCase << RowB << cornerLRCase << " " << cornerLLCase << RowB << cornerLRCase << endl;
    gotoxy3(55, 11);
    cout << "Ownername: ";
    //cin >> ownername;
    gotoxy3(55, 16);
    cout << "Password: ";
againA:
    gotoxy3(57, 13);
    fflush(stdin); getline(cin, ownername);
    if (ownername.empty()) {
        goto againA;
    }
againB:
    gotoxy3(57, 18);
    //cin >> password;
    for (i = 0;;) {
        ch = _getch();
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            password[i] = ch;
            ++i;
            cout << "*";
        }
        if (ch == '\b' && i >= 1) {
            cout << "\b \b";
            --i;
        }
        if (ch == '\r') {
            password[i] = '\0';
            break;
        }
    }
    if (string(password).empty()) {
        goto againB;
    }
    //cout << "\nOwnername is " << ownername << endl;
    //cout << "Password is " << password << endl;
    cout << "\n\n\n\n\n\n\n=> Press Y for OK, N for CANCEL and any key for RESET : ";
    fflush(stdin); getline(cin, choose2);
    if (choose2 == "Y" || choose2 == "y") {
        bool loginSuccess = owner1.login(ownername, password) || owner2.login(ownername, password);
        if (loginSuccess) {
            user23.ownerOption();
        }
        else {
            system("cls");
            cout << "<< Owner Login Failed! >>" << endl;
        }
    }
    else if (choose2 == "N" || choose2 == "n") {
        system("cls");
        cout << "Exit from Owner!\n";
    }
    else {
        system("cls");
        goto againBB;
    }
}

//ClassDataUser userE[1000];
void ClassDataUser::ownerOption() {
    int ch, id = 0;
    string choose1, editUsername;
    string RowO(7, 205), RowCase(50, 205), RowB(8, 205); // row owner
    char ColCase = 219;
    char cornerULCase = 201, cornerURCase = 187, cornerLLCase = 200, cornerLRCase = 188;
again:
    system("cls");
    gotoxy3(73, 5);
    cout << cornerULCase << RowO << cornerURCase << endl;
    gotoxy3(73, 6);
    cout << ColCase << " Owner " << ColCase << endl;
    gotoxy3(73, 7);
    cout << cornerLLCase << RowO << cornerLRCase << endl;
    int y1 = 10, y2 = 11, y3 = 12;
    for (int i = 1; i <= 6; i++) {
        gotoxy3(52, y1);
        cout << cornerULCase << RowCase << cornerURCase << endl;
        gotoxy3(52, y2);
        cout << ColCase << setw(51) << ColCase << endl;
        gotoxy3(52, y3);
        cout << cornerLLCase << RowCase << cornerLRCase << endl;
        y1 += 4;
        y2 += 4;
        y3 += 4;
    }
    gotoxy3(71, 11);
    cout << "[1] Information" << endl;
    gotoxy3(71, 15);
    cout << "[2] Display" << endl;
    gotoxy3(71, 19);
    cout << "[3] Edit User" << endl;
    gotoxy3(71, 23);
    cout << "[4] Update User" << endl;
    gotoxy3(71, 27);
    cout << "[5] Delete User" << endl;
    gotoxy3(71, 31);
    cout << "[6] Manage Data" << endl << endl;
    cout << "Input your choice: ";
    fflush(stdin); getline(cin, choose1);
    if (choose1 == "1") {
        system("cls");
        user23.userInfo(); // show info of all users
    }
    else if (choose1 == "2") {
        system("cls");
        user23.userDisplay(); // show all data that all user input
    }
    else if (choose1 == "3") {
        system("cls");
        user23.editUser(); // edit user information, one by one data per user
    }
    else if (choose1 == "4") {
        system("cls");
        user23.updateUser(); // update user information, all data per user
    }
    else if (choose1 == "5") {
        system("cls");
        user23.deleteUser();
    }
    else if (choose1 == "6") {
        system("cls");
        user23.manageData();
    }
    else {
        system("cls");
        cout << "You input invalid option!" << endl;
    }
    cout << "\n<< Press Enter to process [Owner Option] again >>" << endl;
    ch = _getch();
    if (ch == 13) {
        goto again;
    }
    system("cls");
}