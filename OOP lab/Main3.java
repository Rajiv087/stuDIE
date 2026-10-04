// Lab-5 22/09/2026
//Access modifiers 
// create a class employee with public name, protected salary, default dept and private empID. Create a child class Manager with Designation and create a parameterised constructor for manager and display details 

class Employee{
    public String Name; 
    protected double salary;
    String Department;
    private int empID;

    Employee(String Name, double salary, String Department, int empID) {
        this.Name = Name;
        this.salary = salary;
        this.Department = Department;
        this.empID = empID;
    }
    
    int getempID(){
        return empID;
    }
}

class Manager extends Employee{
    String Designation;
    Manager(String Name, double salary, String Department, int empID, String Designation){
        super(Name, salary, Department, empID);
        this.Designation = Designation;
    }

    void displayDetails() {
        System.out.println("Name: " + Name);
        System.out.println("Salary: " + salary);
        System.out.println("Department: " + Department);
        System.out.println("empID: " + getempID());
        System.out.println("Designation: "+ Designation);
    }
}

public class Main3 {
    public static void main(String[] args) {

        Manager M1 = new Manager("Rajiv", 200000, "IT", 100, "SDE");
        M1.displayDetails();
    }
}
