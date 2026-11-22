#include <iostream>
#include <cmath>    //cmath library of complex math qns solve
using namespace std;

void function1()
{

    int x;

    cout << "enter the value of x for the sollution of e^x";
    cin >> x;

    cout << exp(x) << endl;
}

void function2()
{

    int x;

    cout << "enter the value of x for the sollution of 2^x";
    cin >> x;

    cout << exp2(x) << endl;
}

void function3()
{

    int x;

    cout << "enter the value of x for the sollution of e^x-1";
    cin >> x;

    cout << expm1(x) << endl;
}

void function4()
{

    int x, y;

    cout << "enter the value of x and y for its diffrence ";
    cin >> x;
    cin >> y;

    cout << fdim(x, y) << endl;
}

void function5()
{

    float x;

    cout << "enter the value of x for its rounded down to its nearest integer";
    cin >> x;

    cout << floor(x) << endl;
}

void function6()
{

    int x, y;

    cout << "enter the value of x and y to find the highest in between them ";
    cin >> x;
    cin >> y;

    cout << fmax(x, y) << endl;
}

void function7()
{

    int x, y;

    cout << "enter the value of x and y to find the lowest in between them ";
    cin >> x;
    cin >> y;

    cout << fmin(x, y) << endl;
}

void function8()
{

    int x, y;

    cout << "enter the value of x and y to get the rimainder of x\y ";
    cin >> x;
    cin >> y;

    cout << fmod(x, y) << endl;
}

void function9()
{

    int x, y;

    cout << "enter the value of x and y to find the sqrt of x^2+y^2 ";
    cin >> x;
    cin >> y;

    cout << hypot(x, y) << endl;
}

void function10()
{

    int x;

    cout << "enter the value of x to find the value of log(x)";
    cin >> x;

    cout << log(x) << endl;
}

void function11()
{

    int x, y;

    cout << "enter the value of x and y to find the value of x^y ";
    cin >> x;
    cin >> y;

    cout << pow(x, y) << endl;
}

void function12()
{

    float x;

    cout << "enter the value of x to find its absolute value";
    cin >> x;

    cout << abs(x) << endl;
}

void function13()
{

    int x;

    cout << "enter the value of x to find its cube root value";
    cin >> x;

    cout << cbrt(x) << endl;
}

void function14()
{

    int x;

    cout << "enter the value of x to find the value of sin(x)";
    cin >> x;

    cout << sin(x) << endl;
}

void function15()
{

    int x;

    cout << "enter the value of x to find the value of cos(x)";
    cin >> x;

    cout << cos(x) << endl;
}

void function16()
{

    float x;

    cout << "enter the value of x to get the value of its integer part";
    cin >> x;

    cout << trunc(x) << endl;
}

int main()
{
    function1();
    function2();
    function3();
    function4();
    function5();
    function6();
    function7();
    function8();
    function9();
    function10();
    function11();
    function12();
    function13();
    function14();
    function15();
    function16();

    return 0;
}