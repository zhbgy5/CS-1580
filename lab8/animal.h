//Programmer:Zach Bible
//Date: 3/13/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 8
//Purpose: Use Arrays and structs to organize and sort data

#ifndef ANIMAL
#define ANIMAL

#include <iostream>
#include <string>
using namespace std;

struct animal
{
  string name; //stores animals name
  float weight; //stores animals weight
};

//cin animal name &weight
//pre: a float for weight must be entered
//post: none
void get_animals(int count, animal* A);
  
//sort elements of an animal struct array
//pre: must enter array size
//post: none
void sort_weight(int count, animal* A);
  
//prints animal info
//pre:none
//post none
void print_animals(int count, animal* A);

//cout overload operator
//ostream& operator << (ostream& os, const animal& p_animal);

//greater than overload operator
bool operator <(const animal& lhs,const animal& rhs);

#endif
