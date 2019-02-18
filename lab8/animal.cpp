//Programmer:Zach Bible
//Date: 3/13/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 8
//Purpose: Use Arrays and structs to organize and sort data

#include "animal.h"
#include <iostream>
#include <string>
using namespace std;

void get_animals(int count, animal* A)
{
  //cout block, cin retreives animal data
  for(int i = 0;i<count;i++)
  {
  cout<<"----------Animal "<<(i+1)<<"----------"<<endl;
  cout<<"Please enter the animal name: ";
  cin>>A[i].name;
  cout<<"Now enter the animal weight (lbs): ";
  cin>>A[i].weight;
  }
}

void sort_weight(int count, animal* A)
{
  //interates 5 times
  animal B;
  for(int i=0;i<count;i++)
  {
  	//moves smallest to the left, requires 5 iterations
  	for(int j=1;j<count;j++)
  	{
  	  if(A[j]<A[j-1])
  	  {
  	    B=A[j-1];
  	    A[j-1] = A[j];
  	    A[j] = B;
	  }
    }
  }
}

void print_animals(int count, animal* A)
{
  //cout block
  cout<<"---------- ----------"<<endl;
  cout<<"Printing the animal by their weights"<<endl;
  cout<<"---------- ----------"<<endl;
  for(int i=0;i<count;i++)
  {
  	cout<<i<<". Animal Name: "<<A[i].name<<", Animal Weight(lbs): ";
    cout<<A[i].weight<<endl;
  }
}

bool operator <(const animal& lhs,const animal& rhs)
{
  if (lhs.weight < rhs.weight)
  {
    return true;
  }
  else
  {
	return false;
  }
}

/*ostream& operator << (ostream& os, const animal& p_animal)
{
  os<<"Animal Name: "<<p_animal.name<<", Animal Weight(lbs): "<<p_animal.weight;
}
*/
