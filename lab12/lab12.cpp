//Programmer:Zach Bible
//Date: 4/17/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 12
//Purpose: Use a class and overloaded operators to perform math on fractions

#include "fraction.h" //include header file
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
  //initialize fraction objects
  fraction Drew("Drew",1,2);
  fraction Angel("Angel",3,6);
  //cout each fraction
  cout<<"Fraction Drew has value: "<<Drew<<endl;
  cout<<"Fraction Angel has value: "<<Angel<<endl;
  //== operator overload
  if(Drew == Angel)
  {
  	cout<<"The two fractions are equivalent!"<<endl;
  }
  else
  {
  	cout<<"The two fractions are not equivalent!"<<endl;
  }
  //*/+- operator overloads
  cout<<"The multiplication of the two fractions is: "<<(Drew * Angel)<<endl;
  cout<<"Fraction Drew divided by fraction Angel is: "<<(Drew/Angel)<<endl;
  cout<<"The addition of the two fractions is: "<<(Drew + Angel)<<endl;
  cout<<"Fraction Angel subtracted from fraction Drew is: "<<(Angel - Drew)<<endl;
  return 0;
}
