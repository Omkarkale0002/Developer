#include<iostream>
using namespace std;

int main()
{
int a=10;

do
{
	if(a==15)
	{
	a=a+1;
	break;
	continue;
	}
        cout<<"The value of a is"<<a<<endl;
	a++;
}while(a<20);
}
