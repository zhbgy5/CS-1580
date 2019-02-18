//Programmer:Zach Bible
//Date: 3/30/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 9
//Purpose: build a string comparator

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

//purpose: compares the ascii size of two strings
//pre:two strings are inputted
//post: returns 1 if left is large, 0 if same, -1 ifright
int myStrCmp(const char ntca1[],const char ntca2[], const int size);

int main()
{
  //Rerun char
  char yorn;
  //Comparator value
  int CompVal;
  //const var for size
  const int size = 30;
  
  do
  {	
  //Declaration of char arrays in loop to empty
	char arrayOne[size] = {};
	char arrayTwo[size] = {};
	
//Cin block
	cout<<"Enter input for character array 1: ";
	cin.getline(arrayOne,size,'\n');
	cout<<"Enter input for character array 2: ";
	cin.getline(arrayTwo,size,'\n');
//Run comparator
	CompVal = myStrCmp(arrayOne,arrayTwo,size);
	
	cout<<"*****Here is the character array comparison result*****"<<endl;
//cout block
	cout<<"Character array 1: "<<arrayOne<<endl;
	cout<<"Character array 2: "<<arrayTwo<<endl;
//ouputs correct statement based on comparator return
	if(CompVal == 1)
	{
	  cout<<"Array 1 is larger than array 2!"<<endl;
	}
	else if(CompVal == -1)
	{
	  cout<<"Array 2 is larger than array 1!"<<endl;
	}
	else
	{
	  cout<<"They are identical!"<<endl;
	}
	
	cout<<"*******************************************************"<<endl;
	cout<<"Run again? (y/n): ";
//Cin rerun char
	cin>>yorn;
//dumps new line char in buffer
	cin.ignore();
  }while (yorn == 'y'); //rerun call
  return 0;
}

//iterates untill it finds on char larger than other then returns
int myStrCmp(const char ntca1[],const char ntca2[], const int size)
{
  for(int i=0;i<size;i++)
  {
  	if(ntca1[i]>ntca2[i])
  	{
  	  return 1;
	}
	if(ntca1[i]<ntca2[i])
	{
	  return -1;
	}
  }
  return 0;
}


