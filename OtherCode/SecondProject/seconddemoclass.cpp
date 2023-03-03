#include "seconddemoclass.h"
#include<iostream>
using namespace std;

void SecondDemoClass :: display() const
{
    cout << "I am a constant function" << endl;
}

void SecondDemoClass :: display2()
{
    cout << "I am a non-constant function" << endl;
}
