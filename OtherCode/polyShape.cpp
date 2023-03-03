#include<iostream>
#include<conio.h>
using namespace std;

class Shape
{
public:
    double dim1, dim2;
    Shape(double dim1, double dim2)
    {
        this -> dim1 = dim1;
        this -> dim2 = dim2;
    }

    virtual double area()
    {
        return 0;
    }
};

class Triangle : public Shape
{
public:
    Triangle(double dim1, double dim2)
    : Shape(dim1, dim2)
    {

    }
    double area()
    {
        return 0.5 * dim1 * dim2;
    }
};

class RecTriangle : public Shape
{
public:
    RecTriangle(double dim1, double dim2)
    : Shape(dim1, dim2)
    {

    }
    double area()
    {
        return  dim1 * dim2;
    }
};

int main()
{
    Shape *p;
    Triangle t(10, 20);
    RecTriangle r(10, 20);

    p = &t;
    cout << "Triangle Area = " << p -> area() << endl << endl;

    p = &r;
    cout << "RecTriangle Area = " << p -> area() << endl << endl;

    getch();
    return 0;
}
