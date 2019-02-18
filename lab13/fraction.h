//Programmer:Zach Bible
//Date: 4/24/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 13
//Purpose: Use templated classes

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using std::ostream;

class Fraction{
  public:
    // Constructors
    Fraction(){}
    Fraction(const int num, const int den); 
    
    // Friend Functions
    friend bool operator ==(const Fraction & lhs, const Fraction & rhs); 
    friend Fraction operator +(const Fraction & lhs, const Fraction & rhs); 
    friend ostream & operator <<(ostream & os, const Fraction & rhs); 
    
  private:
    int mNum; 
    int mDen; 
};

#endif
