/*Performing Logical AND/OR operator*/
public class Logi
{
 public static void main(String args[])
	{
		double a = 10;
		double b = 20;
		{
		 if( a && b )                            //logical AND condition check
		  {
			System.out.println("\nThe condition is true");
		  }
		else
       		  {
			System.out.println("The condition is false");
		  }
		if( a || b )				//logicalOR condition check
		  {
			System.out.println("The condition is true");
		  }
		else
		  {
			System.out.println("\nThe condition is false ");
		  }
	}
	}
}
