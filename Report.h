#include <string.h>
#include <iostream>
using namespace std;
class Application
{
private:
    int Id;
    string Name;
    string Category;
    string Type;
    string Status;
public:
    Application(int Id, string Name, string Category, string Type, string Status);
    ~Application();
};

