/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "\nEnter any Number to Check it is Divisible by 5  =  ";
	cin >> number;
	
	if(( number % 5 == 0 ))
	{
		cout << "\nGiven number "<< number << " is Divisible by 5 ";
	}
	else
	{
		cout << "\nGiven number "<< number << " is Not Divisible by 5";
	}
		
 	return 0;
}
