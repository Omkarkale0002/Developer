/*performing continue & break statements*/
public class Conti{
	public static void main(String args[])
	{
	int a=10;

	do				//do while loop
	{
         if(a==15)
		{
		a=a+1;
		//continue;		//use of continue
		break;			//use of break
		}
	System.out.println("The value is:"+a);
 	a++; 				//increment
	}
	while(a<20);
	}
}
  
