//user.h
#include "config.h"

//the defination of Users type
typedef struct 
{
    char id[MAX_LEN];
    char name[MAX_LEN];
    char passwd[MAX_LEN];
    char contact[MAX_LEN];
    char address[MAX_LEN];
    double balance;
} User;

//Import user information from an external file
void pullUsers();

//EXport user information to an external file
void pushUsers();

//brief:Get user object
//param: Array index of the user in
//return:User*
User* getUser(int idex);

//Print user information
//param:i
void userInfo(int i);

//Add user
int addUser(User* u);

//Delete users
int deleteUser(const char*id,const char*who);

//Print All Users
void printUsers();

//Check whether the user and password match
int checkPass(const char*name,const char*password, int*idx);

//User top-up
int userTopUp(const char*id,double m);
