//Programmer:Zach Bible
//Date: 4/10/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 11
//Purpose: Use a header/implementation file to handle information in a class

#include "bankAccount.h" //include header file
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
  //const declaration for rand seed, two acct names.
  const int seed = 19;
  const string acctTwo_name = "Pluto Alkeides";
  const string acctThree_name = "Coeus Plouton";
  //seeds the rand fucntion
  srand(seed);
  //declaration of bankAccount objects, one default, two parmertized
  bankAccount acctOne;
  bankAccount acctTwo(acctTwo_name);
  bankAccount acctThree(acctThree_name);
  
  cout<<"-----Account balances before the competition---"<<endl;
  //cout acct into block block
  acctOne.showBalance();
  acctTwo.showBalance();
  acctThree.showBalance();
  
  cout<<"Begin the competition..."<<endl;
  //account competition call
  bankAccountsCompetition(acctOne,acctTwo,acctThree);
  
  cout<<"-----Account balances after the competition---"<<endl;
  //cout acct info block
  acctOne.showBalance();
  acctTwo.showBalance();
  acctThree.showBalance();
  
  return 0;
}
