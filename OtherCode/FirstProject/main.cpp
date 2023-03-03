#include <iostream>
#include "firstclass.h"
using namespace std;

int main()
{
    FirstClass object;
    FirstClass *p = &object;
    p ->display();

    //object.display();

    return 0;
}
