
public class Bit{
 
    public static void main(String Args[])
       {
        int a=60;
        int b=13;
        int c=0;
       
            c= a & b;  
            System.out.println("The AND opertion is"+c);
 
            c=a | b;                  //61=0011 1101
            System.out.println("The OR operation is"+c);
 
            c=a ^ b;                  //49=0011 0001
            System.out.println("The Ex-or opertaion is"+c);
 
            c= ~a;                    //-61=1100 0011
            System.out.println("The Compliment opertaion is "+c);
 
            c= a << 2;               //240= 1111 0000
            System.out.println("The left Shift is"+c);
  
            c= a >> 2;               //15=0000 1111
            System.out.println("The right shift is "+c);
 
            c= a >>> 2;
            System.out.println("The right shift full no. is"+c);
   }
}
