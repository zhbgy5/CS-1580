//Programmer:Zach Bible
//Date: 4/10/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 11
//Purpose: Use a header/implementation file to handle information in a class

#include "bankAccount.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void bankAccount::updateBalance(const int dollars, const int cents)
{
  mAccountDollars = dollars;
  mAccountCents = cents;
}
bankAccount::bankAccount()
{
  mAccountDollars = 0;
  mAccountCents = 0;
  mAccountName = "Jane Doe the Original";
}
bankAccount::bankAccount(string name)
{
  mAccountDollars = rand();
  mAccountCents = rand() % 100;
  mAccountName = name;
}
void bankAccount::showBalance() const
{
  cout<<mAccountName<<" has a balance of: $"<<mAccountDollars;
  cout<<" dollars and "<<mAccountCents<<" cents"<<endl;
}
void bankAccountsCompetition(bankAccount & acctOne, bankAccount & acctTwo,
bankAccount & acctThree)
{
  if((acctTwo.mAccountDollars + acctThree.mAccountDollars) > 1000000000)
  {
  	//nasty arguments allow program to appropreatly calculuate cents
    acctOne.updateBalance(acctOne.mAccountDollars + acctTwo.mAccountDollars +
	  acctThree.mAccountDollars + (((acctOne.mAccountCents + 
	  acctTwo.mAccountCents + acctThree.mAccountCents)/100) % 1), 
	  ((acctOne.mAccountCents + acctTwo.mAccountCents + 
	  acctThree.mAccountCents) % 100));
	  
	acctTwo.updateBalance(0,0);
	acctThree.updateBalance(0,0);
	
	cout<<"Account "<<acctOne.mAccountName<<" is indeafeasible!"<<endl;
  }
  else if (acctTwo.mAccountDollars > acctThree.mAccountDollars)
  {
  	//nasty arguments allow program to appropreatly calculuate cents
  	acctTwo.updateBalance(acctTwo.mAccountDollars + acctThree.mAccountDollars +
	  (((acctTwo.mAccountCents + acctThree.mAccountCents)/100)%1),
	  ((acctTwo.mAccountCents + acctThree.mAccountCents)%100));
	  
	acctThree.updateBalance(0,0);
	
	cout<<"Account "<<acctTwo.mAccountName<<" is indeafeasible!"<<endl;
  }
  else if (acctTwo.mAccountDollars < acctThree.mAccountDollars)
  {
  	//nasty arguments allow program to appropreatly calculuate cents
  	acctThree.updateBalance(acctTwo.mAccountDollars +acctThree.mAccountDollars+
	  (((acctTwo.mAccountCents + acctThree.mAccountCents)/100)%1),
	  ((acctTwo.mAccountCents + acctThree.mAccountCents)%100));
	  
	acctTwo.updateBalance(0,0);
	
	cout<<"Account "<<acctThree.mAccountName<<" is indeafeasible!"<<endl;
  }
  else
  {
  	//just incase ==
  	cout<<"There was no winner!"<<endl;
  }
}
