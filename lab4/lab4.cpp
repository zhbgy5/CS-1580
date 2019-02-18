//Programmer:Zach Bible
//Date: 2/13/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 4
//Purpose: build a calculator

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	int i,x,y,z,q,l;
	float a,b;
	char yorn;
	
	do{
		cout<<"Welcome to the Calculator Menu\n\n1. Addition of two intergers";
		cout<<"\n2. Subtraction of two floats\n3. Integer sum within a range";
		cout<<"\n4. Counting down from an interger\n5. Bonus: the nth Fibonac";
		cout<<"ci number\n\nPlease enter your choice of operation: ";
		cin>>i;
		switch(i)
		{
			case 1:
				cout<<"Please enter the first integer: ";
				cin>>x;
				cout<<"Please enter the secont integer to add to: ";
				cin>>y;
				cout<<x<<" + "<<y<<" = "<<(x+y);
				break;
			case 2:
				cout<<"Please enter the first float: ";
				cin>>a;
				cout<<"Please enter the secont float: ";
				cin>>b;
				cout<<a<<" + "<<b<<" = "<<(a-b);
				break;
			case 3:
				cout<<"Please enter the min: ";
				cin>>x;
				cout<<"Please enter the max: ";
				cin>>y;
				cout<<"The interger sum from "<<x;
				z=0;
				for(x;x<(y+1);x++)
				{
					z = z + x;
				}
				cout<<" to "<<y<<" is "<<z;
				break;
			case 4:
				cout<<"Please enter the number to count down from: ";
				cin>> x;
				cout<<"counting down to zero ..."<<endl;
				for(x;x>-1;x--)
				{
					cout<<x<<endl;
				}
				break;
			case 5:
				cout<<"Please enter the nth term that you want (n>1): ";
				cin>>x;
				cout<<"The Fibonacci series to the "<<x<<"th term is: "<<endl;
				y=0;
				z=0;
				q=-1;
				l=1;
				for(y;y<(x+1);y++)
				{
					z=l+q;
					q=l;
					l=z;
					cout<<z<<endl;
				}
				cout<<"The "<<x<<"th term of Fibonacci number is: "<<z;
				break;
		}
		cout<<"\nWould you like to run the program again? (Yes (y)/ No (n)): ";
		cin>>yorn;
	}while (yorn == 'y');
	return 0;
}
