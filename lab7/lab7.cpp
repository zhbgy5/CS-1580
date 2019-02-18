//Programmer:Zach Bible
//Date: 3/6/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 7
//Purpose: Use structs to organize and save data

#include "plant.h" //include header file
#include <iostream>
#include <string>
using namespace std;

int main()
{
  plant A; //create plant object
  A.set_owner_info(); //set info in parent class owner
  A.set_plant_info(); //set info in object class plant
  A.get_plant_info(); //print info from both child and parent
  return 0;
}
