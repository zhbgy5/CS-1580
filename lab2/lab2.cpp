//Programmer:Zach Bible
//Date: 1/30/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 2

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
  int mass,height;				//mass, and height of user
  const int Cfact=703;			//weight to mass conversion
  double bmi;					//calculated bmi
  
  cout<<"Welcome to the BMI calculator program"<<endl;
  cout<<"please input your weight in pounds: "; //information intake
  cin>>mass;
  cout<<"Please input your height in inches: ";
  cin>>height;
  bmi = mass/height; //naive claculation
  cout<<"Naive BMI: "<<bmi<<endl;
  bmi = (mass*Cfact)/(pow(height,2));  //actual calculation
  cout<<"Actual BMI: "<<bmi<<endl;
  cout<<"Rounded bmi: "<<static_cast <int> (bmi)<<endl; //static cast as int
  cout<<"Thank you for using this BMI calculator"<<endl;
  
  return 0;
}
