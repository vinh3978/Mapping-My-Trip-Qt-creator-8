#include "userInfo.h"
using namespace std;
userInfo::userInfo(string x, string y)
{
    name = x;
    password = y;
}

string userInfo::getName(){
    return name;
}

string userInfo:: getPassword(){
    return password;
}

userInfo:: ~userInfo(){
}
