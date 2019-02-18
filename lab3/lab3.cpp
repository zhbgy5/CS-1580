//Programmer:Zach Bible
//Date: 2/6/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 3
//Purpose: Color of fourtune game!

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
  char yorn = 'y'; //Repetition char
  int lnum,isum,i,cnum; //Lucky number,Integer sum,Integer counter,Color number
  string lcolor; // Lucky color

  do
  {
  	isum = 0;	//reset vars
  	i = 1;
  	cout<<"Welcome to the game of Colors of Fourtune!"<<endl;

  	do  //get 0-100, toss out of scope
    {
  	  cout<<"Please choose your lucky number from 0 to 100: ";
	  cin>>lnum;
    } while(lnum<0 || lnum>100);

	cout<<"From now on, all inputs must be in lowercase."<<endl;

  	cnum= lnum % 7; //get color number 0-6
  	lcolor ="empty";

  	if(cnum == 0) //if chain to output question for next color
    {
  	  do
	  { //couts broken up to save column space
        cout<<"Your color of fortune is the one that comes after ";
  	    cout<<"red. That is? ";
  		cin>>lcolor;
	  }while(lcolor != "orange");
	}
	else if (cnum == 1)
	{
	  do
	  {
        cout<<"Your color of fortune is the one that comes after ";
  		cout<<"orange. That is? ";
  		cin>>lcolor;
	  }while(lcolor != "yellow");
	}
	else if (cnum == 2)
	{
	  do
	  {
        cout<<"Your color of fortune is the one that comes after ";
  	    cout<<"yellow. That is? ";
  	    cin>>lcolor;
	  }while(lcolor != "green");
	}
	else if (cnum ==3)
	{
	  do
	  {
        cout<<"Your color of fortune is the one that comes after ";
  		cout<<"green. That is? ";
  		cin>>lcolor;
	  }while(lcolor != "blue");
	}
	else if (cnum == 4)
	{
	  do
	  {
        cout<<"Your color of fortune is the one that comes after ";
  		cout<<"blue. That is? ";
  		cin>>lcolor;
	  }while(lcolor != "indigo");
	}
	else if (cnum == 5)
	{
	  do
	  {
        cout<<"Your color of fortune is the one that comes after ";
  		cout<<"indigo. That is? ";
  		cin>>lcolor;
	  }while(lcolor != "violet");
	}
	else if (cnum == 6)
	{
	  do
	  {
        cout<<"Your color of fortune is the one that comes after ";
        cout<<"Violet. That is? ";
  		cin>>lcolor;
	  }while(lcolor != "red");
	}

	cnum++; //increment cnum to accurately reflect lucky color
	cnum = cnum % 7; //ensure cnum is 0-6
	lnum = lnum % 10; // obtain unit number 0-9

	if (cnum == 0 || cnum == 2 || cnum == 4 || cnum == 6)
	{
	  do //integer sum loop
	  {
		isum = isum + i;
	  	i++;
	  }while (i<11);
	}
	else
	{
	  do //integer sum loop
	  {
	  	isum = isum + i;
	  	i++;
	  }while (i<101);
    }
    //output statement including calculation, cout broken up
	cout<<"Congratulations! Based on your lucky number and color,";
	cout<<" your reward prize would be: "<<(lnum*isum)<<"!"<<endl;
	cout<<"Would you like to try the Colors of Fortune again?";
	cout<<" (Yes (y)/ No(n)): ";

  	cin>>yorn; // repetition input
  	cout<<endl; // endl for proper output formatting
  }while(yorn == 'y'); // program repetition condition

  cout<<"Hope that you had fun. Play with us again soon!"<<endl;

  return 0;
}
