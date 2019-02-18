//Programmer:Zach Bible
//Date: 4/10/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 11
//Purpose: Use a header/implementation file to handle information in a class

#ifndef BANKACCOUNT
#define BANKACCOUNT

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class bankAccount
{
  private:
  //private Vars for dollars,cents & name
  int mAccountDollars;
  int mAccountCents;
  string mAccountName;
  //purpose:Update private member vars
  //pre:two ints for new dollars/cents
  //post:member vars changed
  void updateBalance(const int dollars, const int cents);
  
  public:
  //purpose: Compare bank accounts & transfer money between them based on results
  //pre: three bankAccount objects
  //post: each has member vars changed
  friend void bankAccountsCompetition(bankAccount & acctOne, bankAccount & acctTwo,
  bankAccount & acctThree);
  //default constructor
  bankAccount();
  //parameterized constructor
  bankAccount(string name);
  //purpose: to print the balance of each account
  //pre: None
  //post: prints account info to terminal
  void showBalance() const;
};
//allows you do avoid scoping
void bankAccountsCompetition(bankAccount & acctOne, bankAccount & acctTwo,
 bankAccount & acctThree);

#endif
