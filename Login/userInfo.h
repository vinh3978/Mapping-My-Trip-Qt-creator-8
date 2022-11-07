#include <string>
#ifndef USERINFO_H
#define USERINFO_H


class userInfo
{
private:
    std:: string name;
    std:: string password;
public:
    userInfo(std::string x, std:: string y);
    ~userInfo();
    std::string getName();
    std:: string getPassword();
};

#endif // USERINFO_H
