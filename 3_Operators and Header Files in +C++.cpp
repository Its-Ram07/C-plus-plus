/*
two types of header files
         1. system header files

         syntax :-   #include< name of header file you want in your program >

         2.user defined header files (can  be created as external file)
         syntax :-    #include" name of user defined/created header file"
*/

#include <iostream> //one system header file used for taking input and output
#include <cmath>    //another header file used for making math operations in C++
using namespace std;

int main()
{
   int a = 9, b = 4;

   cout << "Types of Operators in C++. " << endl;

   // type 1. Arithmetic operators
    
   cout << " 1. Arithmetic operators ";
   cout << "the value of a + b is " << a + b << endl; // simple addition
   cout << "the value of a - b is " << a - b << endl; // simple Substraction
   cout << "the value of a * b is " << a * b << endl; // simple Multiplication
   cout << "the value of a / b is " << a / b << endl; // simple Division but since we have given
                                                      // the values in int the decimal values will be neglected
   cout << "the value of  a++  is " << a++ << endl; // taking value of a and the incrementing it by 1
   cout << "the value of  a--  is " << a-- << endl; // taking value of a and the decrementing it by 1
   cout << "the value of  ++a  is " << ++a << endl; // first the increment process is done after that the value of a is printed
   cout << "the value of  --a  is " << --a << endl; // first the decrement process is done after that the value of a is printed
   cout<<"  "<<endl;
   cout<<"  "<<endl;
   cout<<"  "<<endl;
   // type  2.Assignment Operators
   cout<<" 2.Assignment Operators"<<endl;
   cout<<" int a= 9, b= 4 "<<endl;
   cout<<endl;
   // used to assign values to the variables
   // that are int val = 45, non =55;
   // char code = 'F';
 
 
   // type  3.Comparison Operators
   //this operator is used to compare values in diffrent variables or other data
   //and they gives output in 0 and 1 form i.e 0 for false condition and vise versa
   cout<<"3.Comparison Operators"<<endl;
   cout<<"the value of a == b is "<<(a==b)<<endl; //  a equal to b 
   cout<<"the value of a != b is "<<(a!=b)<<endl; //  a is not equal to b 
   cout<<"the value of a >= b is "<<(a>=b)<<endl; //  a equal to or greatr than  b
   cout<<"the value of a <= b is "<<(a<=b)<<endl; //  a equal to or lr=esser than  b
   cout<<"the value of a >  b is "<<(a> b)<<endl; //  a is greater than  b
   cout<<"the value of a <  b is "<<(a< b)<<endl; //  a is lesser than  b
   cout<<endl;
   cout<<endl;
   //Note ;- don't forget paranthesis for using comparision operators

   //type 4.Logical Operators 
   cout<<"4.Logical Operators"<<endl;
   
   cout<<" The value of this logical and operator ((a==b) && (a<b)) is :" <<((a==b)&&(a<b)) << endl;
   //for  && "AND" operator both the given condition should be Satisfied for obtaining true condition

   cout<<" The value of this logical or  operator ((a==b) || (a<b)) is :" <<((a==b)||(a<b)) << endl;
   //for  || "OR" operator if anyone of the given condition is  satisfied then the condition if said to be true
 
   cout<<" The value of this logical not operator   ( ! (a<b))      is :" << (!(a<b)) << endl;
   // for ! "NOT" operator the criteria is opposite if the given condition is false 
   // then the true condition will be satisfied or the output will be 1
   

   return 0;
}

/* the following will be the out put of this program

Types of Operators in C++. 
 1. Arithmetic operators the value of a + b is 13
the value of a - b is 5
the value of a * b is 36
the value of a / b is 2
the value of  a++  is 9
the value of  a--  is 10
the value of  ++a  is 10
the value of  --a  is 9



 2.Assignment Operators
 int a= 9, b= 4

3.Comparison Operators
the value of a == b is 0
the value of a != b is 1
the value of a >= b is 1
the value of a <= b is 0
the value of a >  b is 1
the value of a <  b is 0


4.Logical Operators
 The value of this logical and operator ((a==b) && (a<b)) is :0
 The value of this logical or  operator ((a==b) || (a<b)) is :0
 The value of this logical not operator   ( ! (a<b))      is :1


*/
