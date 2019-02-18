//Programmer:Zach Bible
//Date: 2/20/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 5
//Purpose: build a calculator with functions

#include <iostream>
#include <cmath>
using namespace std;

void Print_Menu(); //prints menu
void Add_Ints();  //computes sum of ints
void Float_Diff(); //computes difference of floats
int Loop_Sum(int x, int y); //computes the sum of intergers between two ints
void Count_Down(int x); //counts to zero from a positive interger
bool programRerun(); //returns true if user inputs y, false otherwise
int main()
{
	
	int i,x,y,z;
	
	do{
		Print_Menu(); //call print menu
		cin>>i;
		switch(i) //cin switch case from menu selection
		{
			case 1:
				Add_Ints(); //call add ints
				break;
			case 2:
				Float_Diff(); //call float difference
				break;
			case 3: //cin statements for loop sum parameters
				cout<<"Please enter the min: ";
				cin>>x;
				cout<<"Please enter the max: ";
				cin>>y;
				cout<<"The interger sum from "<<x;
				z=Loop_Sum(x,y); //paramaterized loop sum call = int z
				cout<<" to "<<y<<" is "<<z;
				break;
			case 4: //cin for countdown parameter
				cout<<"Please enter the number to count down from: ";
				cin>> x;
				cout<<"counting down to zero ..."<<endl;
				Count_Down(x); //countdown call
				break;
		}
	}while (programRerun()); //program rerun call, will continue if true, end it false
	return 0;
}
void Print_Menu()
{
	cout<<"Welcome to the Calculator Menu\n\n1. Addition of two intergers";
	cout<<"\n2. Subtraction of two floats\n3. Integer sum within a range";
	cout<<"\n4. Counting down from an interger";
	cout<<"\n\nPlease enter your choice of operation: ";
	return;
}
void Add_Ints()
{
	int x,y;
	cout<<"Please enter the first integer: ";
	cin>>x;
	cout<<"Please enter the secont integer to add to: ";
	cin>>y;
	cout<<x<<" + "<<y<<" = "<<(x+y);
	return;
}
void Float_Diff()
{
	float x,y;
	cout<<"Please enter the first float: ";
	cin>>x; 
	cout<<"Please enter the secont float: ";
	cin>>y;
	cout<<x<<" + "<<y<<" = "<<(x-y);
	return;
}
int Loop_Sum(int x,int y)
{
	int z=0;
	for(;x<(y+1);x++)
	{
    	z = z + x;
	}
	return z;
}
void Count_Down(int x)
{
	for(;x>-1;x--)
	{
    	cout<<x<<endl;
  	}
	return;
}
bool programRerun()
{
	char yorn;
	cout<<"\nWould you like to run the program again? (Yes (y)/ No (n)): ";
	cin>>yorn;
	if (yorn == 'y')
	{
    	return true; //while loop will continue executing
	}
	else
	{
		cout<<"exiting program"<<endl;
    	return false; //while loop will not continue running
	}
}


