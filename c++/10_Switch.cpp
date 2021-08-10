/*performing switch case program Arithmetic operation as case*/ 
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int ch=0;                                     //choice variable inti
	 
		
	cout<<"Enter an operator \n 1.+,\n 2.-,\n 3.*,\n 4./"<<endl;
	cin>>ch;
	cout<<"Enter the value of a & b "<<endl;
	cin>>a>>b;					//user value


	switch(ch)					//switch
	{
	case 1 :				//case
		c =a+b;				//addition
		cout<<"Addition of  is "<<c<<endl;
		break;

	case 2 :
		c =a-b;
		cout<<"Subtraction  is "<<c<<endl;
		break;
	
	case 3 :
		c =a*b;
		cout<<"multiplication is "<<c<<endl;
		break;
	
	case 4 :
		c =a/b;
		cout<<"Division is "<<c<<endl;
		break;

	default :					//default
		cout<<"invalid operator"<<endl;
		break;
	}

		
}
