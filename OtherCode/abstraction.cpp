#include<iostream>
#include<conio.h>
using namespace std;

class MobileUser
{
public:
    void call()
    {
        cout << "Hello !!" << endl << endl;
    }
    virtual void sendMessage() = 0;
};

class Rahim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Hello, This Is Rahim !!" << endl << endl;
    }
};

class Karim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Hello, This Is Kahim !!" << endl << endl;
    }
};


int main()
{
    MobileUser *m;
    Rahim r;
    Karim k;

    m = &r;
    m -> call();
    m -> sendMessage();

    m = &k;
    m -> sendMessage();

    getch();
    return 0;
}

