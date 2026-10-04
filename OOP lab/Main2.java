//Lab-5 22/09/2026
//create an abstract class employee with name and salary having 2 constructors no parameter and 2 parameter constructor. create abstract method calculate bonus and concrete method display details. make 2 child classes developer and manager 

abstract class Employee{
    String Name;
    double salary;

    Employee() {
        System.out.println("This is an employee.");
    }
    Employee(String Name, double salary) {
        this.Name = Name;
        this.salary = salary;
    }

    void displayDetails() {
        System.out.println("Name: "+ Name);
        System.out.println("Salary: "+ salary);
    }

    abstract void calculateBonus();
}

class Developer extends Employee{
    String role;
    Developer(String Name, double salary, String role){
        super(Name, salary);
        this.role = role;
    }
    void calculateBonus() {
        int bonus = 10000;
        System.out.println("Developer Salary after bonus: "+(salary + bonus));
    }
}

class Manager extends Employee{
    int MgID;
    Manager(String Name, double salary, int MgID) {
        super(Name, salary);
        this.MgID = MgID;
    }
    void calculateBonus() {
        int bonus = 20000;
        System.out.println("Manager Salary after bonus: " + (salary + bonus));
    }
}

public class Main2 {
    public static void main(String[] args) {
        Developer d1 = new Developer("Rajiv", 80000, "Web Developer");
        d1.displayDetails();
        d1.calculateBonus();

        Manager m1 = new Manager("Rohan", 90000, 101);
        m1.displayDetails();
        m1.calculateBonus();
    }
}
