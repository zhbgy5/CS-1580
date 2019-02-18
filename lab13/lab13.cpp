//Programmer:Zach Bible
//Date: 4/24/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 13
//Purpose: Use templated classes

#include "fraction.h"
#include "pair.h"
#include <iostream>

using namespace std; 

int main(){
  // Variable Declarations
  Pair<Fraction> pairOne(Fraction(1,2),Fraction(2,9)); 
  Pair<Fraction> pairTwo(Fraction(1,2),Fraction(2,9));
  
  cout<<"\t-----Integer Pair Output-----"<<endl; 
  cout<<"\tPair One: "<<pairOne<<endl; 
  cout<<"\tPair Two: "<<pairTwo<<endl;
  cout<<"\tThe two pairs are "<<(pairOne==pairTwo? "equal.": "not equal.")<<endl; 
  cout<<"\tThe result of Pair One plus Pair Two is "<<(pairOne + pairTwo)<<endl;
  
  return 0; 
}



