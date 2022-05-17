#include <string.h>
#include <iostream>
using namespace std;

plan::plan(int Id, string package, string period)
{
    this->Id = Id;
    this->package = package;
    this->period = period;
}

plan::~plan()
{
}
