/*
File Name: main.cpp
Desription:
Authors:
Date Created: Thu Nov  1 18:50:55 PDT 2018
*/

#include<iostream>
#include<cmath>

using namespace std;

class Rational
{
    public:
    Rational(int a, int b,int c,int d);

    void add();
    void subtract();
    void multiply();
    void divide();

    int m_a,m_b,m_c,m_d,numerator,denominator;
};

Rational::Rational(int a, int b, int c, int d)
{
    m_a = a;
    m_b = b;
    m_c = c;
    m_d = d;
}

void Rational::add()
{
    numerator = ((m_a * m_b) + (m_c * m_d));
    denominator = (m_b * m_d);
    cout << numerator << "/" << denominator << endl;
}

void Rational::subtract()
{

}

void Rational::multiply()
{
    numerator = (m_a * m_c);
    denominator = (m_b * m_d);
    cout << numerator << "/" << denominator << endl;
}

void Rational::divide()
{

}

int main()
{
    Rational r(3,4,7,4);
    r.add();
    r.multiply();
    return 0;
}
