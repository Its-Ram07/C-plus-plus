/* 
two types of header files
         1. system header files 
         
         syntax :-   #include< name of header file you want in your program >

         2.user defined header files (can  be created as external file)
         syntax :-    #include" name of user defined/created header file"
*/

#include <iostream> //one system header file used for taking input and output
#include<cmath>     //another header file used for making math operations in C++
using namespace std;

int main()
{
   int a=9, b=4;

   cout <<"Types of Operators in C++. "<<endl;

  // type 1. Arithmetic operators

   cout <<"the value of a + b is "<<a+b <<endl;  //simple addition
   cout <<"the value of a - b is "<<a-b <<endl;  //simple Substraction
   cout <<"the value of a * b is "<<a*b <<endl;  //simple Multiplication
   cout <<"the value of a / b is "<<a/b <<endl;  //simple Division but since we have given 
                                          //the values in int the decimal values will be neglected
   cout <<"the value of  a++  is "<<a++ <<endl;  // taking value of a and the incrementing it by 1
   cout <<"the value of  a--  is "<<a-- <<endl;  // taking value of a and the decrementing it by 1
   cout <<"the value of  ++a  is "<<++a <<endl;  // first the increment process is done after that the value of a is printed
   cout <<"the value of  --a  is "<<--a <<endl;  // first the decrement process is done after that the value of a is printed
   
   //type  2.Assignment Operators
   
   // used to assign values to the variables 
   // that are int val = 45, non =55;
   // char code = 'F';


   
   
   return 0;
}
