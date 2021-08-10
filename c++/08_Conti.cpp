/*Performing Continue and Break statement program*/
#include<iostream>
using namespace std;

int main()
{
	int a=10;

do
{
	if(a==15)			//a = 15 condition
	{
	a=a+1;				//incr a
	//break;			//use ofbreak 
	continue;			//use of continue
	}
        cout<<"The value of a is"<<a<<endl;
	a++;
}while(a<20);				//while condition check
}
