#include <iostream>
using namespace std; 						  // basic Syntax explained earlier

int main()
{
	int num1, num2; 					  //declaring 2 variables as num1 & num2
	
	cout << "enter the value of num1 :\n";   		  // Entering the display text for taking the first no
	
	cin >> num1;					 	  //storing the input in num1 variable
	
	cout << "enter the value of num2 :\n"; 	  		  // Entering the display text for taking the second no
	
	cin >> num2;				 	       	//storing the input in num1 variable

	cout << "the sum is : " << num1 + num2;      		 //we can do simple mathematics in c++ just by using operator signs i.e + - * / 

	return 0;
}
