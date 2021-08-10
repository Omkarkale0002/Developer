/*performing Bitwise operations*/
#include<iostream>
using namespace std;
 
	int main()
	   {
	     int a=60;
             int b=13;
             int c=0;
 
            c=a & b;                  //12=0000 1100
            cout<<"The AND opertion is"<<c<<endl;
 
	    c=a | b;                  //61=0011 1101
            cout<<"The OR operation is"<<c<<endl;
 
            c=a ^ b;                  //49=0011 0001
            cout<<"The Ex-or opertaion is"<<c<<endl;
 
	    c= ~a;                    //-61=1100 0011
    	    cout<<"The Compliment opertaion is "<<c<<endl;
 
            c= a << 2;               //240= 1111 0000
            cout<<"The left Shift is"<<c<<endl;
  
  	    c= a >> 2;               //15=0000 1111
 	    cout<<"The right shift is "<<c<<endl;
 
 	   // c= a >>> 2;
           // cout<<"The right shift full no. is"<<c<<endl;
  
}


