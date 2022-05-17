#include <string.h>
#include <iostream>
using namespace std;
class Developer
{
private:
    int Id;
    string name;
    string contact;
    string email;
public:
    Developer(int Id, string name, string contact, string email);
    ~Developer();
};