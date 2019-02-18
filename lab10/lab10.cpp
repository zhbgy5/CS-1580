//Programmer:Zach Bible
//Date: 4/3/2018
//Section: cs1580 sec 3A
//Instructor: San Yeung
//File: Assignmnet 10
//Purpose: Use and input & output file to compute sum of intergers

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;



int main()
{

  //input file intergers
  int v_1, v_2;
  const int MAX = 80;
  //const in/out file names strings
  const string INPUTFILENAME = "questions.dat";
  const string OUTPUTFILENAME = "answers.dat";
  const string OOB = "OUT OF BOUND!";
  //fstream objects
  ifstream fin;
  ofstream fout;
  //in/out file open
  fin.open(INPUTFILENAME.c_str());
  fout.open(OUTPUTFILENAME.c_str());
  
  while(fin >> v_1 && fin >> v_2)
  {
  	//if loops for condition checking
  	if (v_1 > MAX)
  	{
  	  fout << OOB;	
	}
	else
	{
	  fout << v_1;
	}
	
	fout <<" + ";
	
	if (v_2 > MAX)
  	{
  	  fout << OOB;	
	}
	else
	{
	  fout << v_2;
	}
	
	fout <<" = ";
	
  	if(v_1 > MAX || v_2 > MAX)
  	{
  	  fout << OOB;	
	}
	else
	{
	  fout << v_1 + v_2;
	}
	
	fout << endl;
  }
  //in/out File close
  fin.close();
  fout.close();
  
  return 0;
}


