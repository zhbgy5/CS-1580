//Programmer:Zach Bible
//Date: 4/24/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 13
//Purpose: Use templated classes

#ifndef PAIR_H
#define PAIR_H

#include <iostream>

using std::ostream;

/******************************************************************************
** Modify this Pair class to be a template class
******************************************************************************/
template <typename T>
class Pair{
  public:
    // Constructors 
    Pair(){}
    Pair(const T firstValue, const T secondValue); 
  
    // Setters and Getters
    T getFirst() const {return mFirst;}
    T getSecond() const {return mSecond;}
    void setFirst(const T newValue) {mFirst = newValue;}
    void setSecond(const T newValue) {mSecond = newValue;}
    
    // Friend Functions
    template<typename U>
    friend bool operator == (const Pair<U> & lhs, const Pair<U> & rhs);
    template<typename U>
    friend Pair<U> operator + (const Pair<U> & lhs, const Pair<U> & rhs);
    template<typename U>
    friend ostream & operator << (ostream & os, const Pair<U> & rhs); 
    
  private:
    T mFirst; 
    T mSecond; 
};
#include "pair.hpp"
#endif
