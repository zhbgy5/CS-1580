//Programmer:Zach Bible
//Date: 4/24/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 13
//Purpose: Use templated classes

template <typename T>
Pair<T>::Pair(const T firstValue, const T secondValue){
  mFirst = firstValue; 
  mSecond = secondValue; 
}  

template <typename T>
bool operator == (const Pair<T> & lhs, const Pair<T> & rhs){
  return (lhs.mFirst==rhs.mFirst && lhs.mSecond==rhs.mSecond); 
}

template <typename T>
Pair<T> operator + (const Pair<T> & lhs, const Pair<T> & rhs){
  Pair<T> result; 
  result.mFirst = lhs.mFirst + rhs.mFirst; 
  result.mSecond = lhs.mSecond + rhs.mSecond; 
  return result;
}

template<typename T>
ostream & operator << (ostream & os, const Pair<T> & rhs){
  os<<"("<<rhs.mFirst<<", "<<rhs.mSecond<<")"; 
  return os;
}  
