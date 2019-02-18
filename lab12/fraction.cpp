//Programmer:Zach Bible
//Date: 4/17/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 12
//Purpose: Use a class and overloaded operators to perform math on fractions

#include "fraction.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

fraction::fraction(string name, int num, int den)
{
  m_name = name;
  m_num = num;
  m_den = den;
}
fraction fraction::operator /(const fraction &rhs)
{
  fraction temp(" ",(m_num * rhs.m_den),(m_den * rhs.m_num));
  return temp;
}
ostream & operator <<(ostream &os, const fraction &rhs)
{
  cout<<rhs.m_num<<"/"<<rhs.m_den;
}
bool operator ==(const fraction &lhs, const fraction &rhs)
{
  int temp_num,temp_num2;
  temp_num = (lhs.m_num * rhs.m_den);
  temp_num2 =  - (lhs.m_den * rhs.m_num);
  if(temp_num == temp_num2)
  {
    return true;
  }
  else
  {
    return false;
  }
}
fraction operator *(const fraction &lhs, const fraction &rhs)
{
  fraction temp(" ",(lhs.m_num * rhs.m_num),(lhs.m_den * rhs.m_den));
  return temp;
}
fraction operator +(const fraction &lhs, const fraction &rhs)
{
  fraction temp(" ",(lhs.m_num * rhs.m_den) + (lhs.m_den * rhs.m_num),
  (lhs.m_den * rhs.m_den));
  return temp;
}
fraction operator -(const fraction &lhs, const fraction &rhs)
{
  fraction temp(" ",(lhs.m_num * rhs.m_den) - (lhs.m_den * rhs.m_num),
  (lhs.m_den * rhs.m_den));
  return temp;
}

