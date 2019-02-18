//Zach Bible
//cs1580 sec 3A
//File: Assignmnet 1

#include <iostream>
using namespace std;

int main()
{
  int multiplicand, multiplier, product;

  cout<<"This program multiplies two numbers!"<<endl;

  cout<<"Enter the multiplicand: ";
  cin>>multiplicand;
  cout<<"Enter the multiplier: ";
  cin>>multiplier;

  product = multiplicand * multiplier;
  cout<<multiplicand<<"*"<<multiplier<<"="<<product<<endl;

  return 0;
}
