//Programmer:Zach Bible
//Date: 4/24/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 13
//Purpose: Use templated classes

#include "fraction.h"

Fraction::Fraction(const int num, const int den){
  mNum = num; 
  mDen = den; 
}

ostream & operator <<(ostream & os, const Fraction & rhs){
  os<<rhs.mNum<<"/"<<rhs.mDen; 
  return os; 
}

bool operator ==(const Fraction & lhs, const Fraction & rhs){
  bool isEquivalent = false; 
  if(lhs.mNum * rhs.mDen == lhs.mDen * rhs.mNum)
    isEquivalent = true; 
  return isEquivalent; 
}

Fraction operator +(const Fraction & lhs, const Fraction & rhs){
  Fraction result; 
  int commonDen, lhsRatio=1, rhsRatio=1; 

  // Find common denominator (least common not implemented)
  if(lhs.mDen == rhs.mDen)
    commonDen = lhs.mDen;
  else
  {
    commonDen = lhs.mDen * rhs.mDen; 
    lhsRatio = commonDen/lhs.mDen; 
    rhsRatio = commonDen/rhs.mDen; 
  }
   
  result.mNum = (lhs.mNum*lhsRatio) + (rhs.mNum*rhsRatio);
  result.mDen = commonDen; 
  return result;  
}
