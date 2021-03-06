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
    cout << "When we add the given fractions we get: " << numerator << "/" << denominator << endl;
}

void Rational::subtract()
{
    int temp_c = (m_c * (-1));
    numerator = ((m_a * m_b) + (temp_c * m_d));
    denominator = (m_b * m_d);
    cout << "When we subtract the given fractions we get: " << numerator << "/" << denominator << endl;
}

void Rational::multiply()
{
    numerator = (m_a * m_c);
    denominator = (m_b * m_d);
    cout << "When we multiply the given fractions we get: " << numerator << "/" << denominator << endl;
}

void Rational::divide()
{
    numerator = (m_a * m_d);
    denominator = (m_b * m_c);
    cout << "When we divide the given fractions we get: " << numerator << "/" << denominator << endl;
}

int main()
{
    Rational r(3,4,7,4);
    r.add();
    r.multiply();
    r.divide();
    r.subtract();
    return 0;
}
