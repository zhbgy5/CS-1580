//Programmer:Zach Bible
//Date: 3/6/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 7
//Purpose: Use structs to organize and save data

#ifndef PLANT
#define PLANT

#include <iostream>
#include <string>
using namespace std;

struct owner
{
  //Purpose: Retrieves user input for owner variables
  //pre: user must input strings without spaces
  //post: none
  void set_owner_info();

  //Purpose: Prints user input for owner variables
  //pre: none
  //post: couts owners three member variables
  void get_owner_info();

  private:
    string name; //stores user inputted name
    string email; //stores user inputted email
    string phone_number; //stores user inputted phone number
};

struct plant: owner
{
  //Purpose: Retrieves user input for plant variables
  //pre: user must input strings without spaces
  //post: none
  void set_plant_info();

  //Purpose: Prints user input for owner variables
  //pre: none
  //post: couts all plant information, and parent class owner info
  void get_plant_info();

  private:
    string plant_name; //stores plant name
    string plant_type; //stores plant type
    float height; //stores plant height
    float soil_moisture; //stores soil moisture
    int leaves; //stores leaves count
};

#endif
