//Programmer:Zach Bible
//Date: 2/27/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 6
//Purpose: build a calculator with functions

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

//prints menu 
//Pre:none
//Post: menu printed to screen
void Print_Menu();

//Calculates the averge of two ints 
//Pre: both parameters must be ints
//Post: couts the average of parameters
void Average(int,int); 

//Calculates the averge of three ints 
//Pre: all three parameters must be ints
//Post: couts the average of parameters
void Average(int,int,int);

//Calculates the averge of three floats 
//Pre: all three parameters must be floats
//Post: couts the average of parameters
void Average(float,float,float);

//Returns a unique random number via pass-by-referrence
//Pre: both parameters must be ints
//Post: int returns to main as random number via PBR
void RandNum(int&,int&);

//checks if the user would like to rerun
//Pre:none
//post: returns true or false based on user input
bool programRerun();

int main()
{
  int i,x,y,z;
  float q,j,k;
	
  do
  {
    Print_Menu(); //call print menu
	cin>>i;
	switch(i) //cin switch case from menu selection
	{
	  case 1:
	    cout<<"Please enter the first interger: ";
	    cin>>x; //cin inputs for aasfdgjsgerage
	    cout<<"Please enter the second interger: ";
	    cin>>y;
	    Average(x,y); //call Average of two ints
	    break;
	  case 2:
	    cout<<"Please enter the first interger: ";
		cin>>x; //cin inputs for average
		cout<<"Please enter the second interger: ";
		cin>>y;
		cout<<"Please enter the third interger: ";
		cin>>z;
		Average(x,y,z); //call average of three ints
		break;
	  case 3: //cin floats for average
		cout<<"Please enter the first float: ";
		cin>>q;
		cout<<"Please enter the second float: ";
		cin>>j;
		cout<<"Please enter the third float: ";
		cin>>k;
		Average(q,j,k); //call average of three floats
		break;
	  case 4: //cin for rand number generator
		cout<<"Please enter the min: ";
		cin>>x;
		cout<<"Please enter the max: ";
		cin>>y;
		cout<<"The unique random number within "<<x<<" and "<<y<<" is: ";
		RandNum(x,y); //call unique number generator
		cout<<x; //x returned via pass by reference
		break;
	}
  }while (programRerun()); //rerun call, will continue if true, end if false
  return 0;
}

void Print_Menu()
{
  cout<<"Welcome to the Calculator Menu\n\n1. Average of two intergers";
  cout<<"\n2. Average of three intergers\n3. Average of three floats";
  cout<<"\n4. Unique random number generation";
  cout<<"\n\nPlease enter your choice of operation: ";
  return;
}

void Average(int x,int y)
{
  cout<<"The average of "<<x<<" and "<<y<<" is "<<((x+y)/2.00);
} //the 2.0 above garentees return of a float

void Average(int x, int y, int z)
{
  cout<<"The average of "<<x<<", "<<y<<" and "<<z<<" is "<<((x+y+z)/3.00);
} // the 3.0 above garentees return of a float

void Average(float x, float y, float z)
{
  cout<<"The average of "<<x<<", "<<y<<" and "<<z<<" is "<<((x+y+z)/3);
} // couts a float

void RandNum(int &x, int &y)
{
  static int i; //static to garentee unqiue random number
  int j;
  y=y-x; //required for proper formatting
  do
  {
    j = rand() % y + x;	 //calculates a random number between y & x
  }while(j==i);
  i = j;
  x = j; // x returned via pass by reference
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


