//Programmer:Zach Bible
//Date: 4/17/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 12
//Purpose: Use a class and overloaded operators to perform math on fractions

#ifndef FRACTION
#define FRACTION

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class fraction
{
  private:
  	//private vars for numerator, denominator and name
	int m_num;
	int m_den;
    string m_name;
  public:
  	//parameterized constructor
	fraction(string name, int num, int den);
	//purpose:Division operator
	//pre: two fraction objects
	//post: returns one fraction object
    fraction operator /(const fraction &rhs);
    //purpose:insertion operator
	//pre: one fraction object
	//post: couts one fraction object
	friend ostream & operator <<(ostream &os, const fraction &rhs);
	//purpose:comparison operator
	//pre: two fraction objects
	//post: returns true if same, false else
	friend bool operator ==(const fraction &lhs, const fraction &rhs);
	//purpose:Multiplication operator
	//pre: two fraction objects
	//post: returns one fraction object
	friend fraction operator *(const fraction &lhs, const fraction &rhs);
	//purpose:Addition operator
	//pre: two fraction objects
	//post: returns one fraction object
	friend fraction operator +(const fraction &lhs, const fraction &rhs);
	//purpose:Subtraction operator
	//pre: two fraction objects
	//post: returns one fraction object
	friend fraction operator -(const fraction &lhs, const fraction &rhs);
};

ostream & operator <<(ostream &os, const fraction &rhs);
bool operator ==(const fraction &lhs, const fraction &rhs);
fraction operator *(const fraction &lhs, const fraction &rhs);
fraction operator +(const fraction &lhs, const fraction &rhs);
fraction operator -(const fraction &lhs, const fraction &rhs);

#endif
