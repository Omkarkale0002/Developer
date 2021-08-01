/*Performing Logical operator AND/OR */
#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	{
	if( a && b)					//Logical AND
	 {
		cout<<"The condition is true:"<<endl;
	 }
	else
	 {
		cout<<"The condition is false:"<<endl;
 	 }
	if( a || b)                              	//OR
	 {
		cout<<"The condition is true"<<endl;
	 }
	else
	 {
		cout<<"The condition is false"<<endl;
	 }
}
}   
