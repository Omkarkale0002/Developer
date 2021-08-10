
public class Employee
  { 
   public static String name;
   private double salary;
   
   public Employee(String empname){
      name = empname;
   }
   
   public void Setsalary(double empsalary){
     salary = empsalary;
   }
     
        public void printEmp(){
         
 	  System.out.println("Salary is:"+salary);
          System.out.println("Name is:"+name);
         }
     
        public static void main(String args[])
          {
            Employee empone = new Employee("laura");
            empone.Setsalary(1000);
            empone.printEmp();
            Employee emptwo = new Employee("Sanket");
            emptwo.Setsalary(2000);
            emptwo.printEmp();
            empone.printEmp();
          }
}
    
