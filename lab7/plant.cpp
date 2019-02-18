//Programmer:Zach Bible
//Date: 3/6/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 7
//Purpose: Use structs to organize and save data

#include "plant.h"
#include <iostream>
#include <string>
using namespace std;

void owner::set_owner_info() //scope to function declaration
{
  //cin block
  cout<<"What's your name? ";
  cin>>name;
  cout<<"what's your email? ";
  cin>>email;
  cout<<"What's your phone number? ";
  cin>>phone_number;
}

void owner::get_owner_info() //scope to function declaration
{
  //cout block
  cout<<"-----Owner Info-----"<<endl<<"Owner name: "<<name<<endl;
  cout<<"Owner email: "<<email<<endl<<"Owner phone number: "<<phone_number;
  cout<<endl;
}

void plant::set_plant_info() //scope to function declaration
{
  //cin block
  cout<<"What's your plant's name? ";
  cin>>plant_name;
  cout<<"What's your plant's type? ";
  cin>>plant_type;
  cout<<"What's your plant's height (cm)? ";
  cin>>height;
  cout<<"What's the leaves count? ";
  cin>>leaves;
  cout<<"What's the soil moisture (%)? ";
  cin>>soil_moisture;
}

void plant::get_plant_info() //scope to function declaration
{
  //cout block
  cout<<"-----Plant Info-----"<<endl<<"Plant name: "<<plant_name<<endl;
  cout<<"Plant type: "<<plant_type<<endl<<"Plant height (cm): "<<height;
  cout<<endl<<"Leaves count: "<<leaves<<endl<<"Soil moisture (%): ";
  cout<<soil_moisture<<endl;
  get_owner_info();
}
