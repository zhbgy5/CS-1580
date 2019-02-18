//Programmer:Zach Bible
//Date: 3/13/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 8
//Purpose: Use Arrays and structs to organize and sort data

#include "animal.h" //include header file
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int count; //stores array size
  
  //cout inital block
  cout<<"Welcome to my animal sorter!"<<endl;
  cout<<"How many animals would you like to compare?"<<endl;
  
  cin>>count;//retrieves arry size
  
  animal A[5];//creates an animal object arry
  
  get_animals(count,A); //cin block
  
  sort_weight(count,A); //sorts array
  
  print_animals(count,A); //cout block
  
  return 0;
}
