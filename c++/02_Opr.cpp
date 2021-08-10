/*Performing opertions using cpp
1.Arith 2.Assign 3.Reltional*/
#include<iostream>
using namespace std;
 int main()
  {
   int a=10;
   int b=20;
   int c=30;
   
   c=a+b;
   cout<<"\n The addition is "<<c;
                                         //Arithmetic Opr

   c=a-b;
   cout<<"\n The subtraction is"<<c;

  
   c=a*b;
   cout<<"\n The multiplication is"<<c;

 
   a += b;
   cout<<"\n The add using assign opt is"<<a;
                                               //Assignment opr
   a -= b;
   cout<<"\n The  sub using assign opt is"<<a;

   if(a==b)
    {
     cout<<" \n A is equal to B "<<endl;
    }  
     else                                      //Relational opr
     {
       cout<<" \n A is not equal to B"<<endl;
     }
    
}
