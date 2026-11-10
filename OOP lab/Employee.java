class Emp {
    String name;
    int id;
    double sal;
    String Department;

    Emp(String name, int id, double sal, String Department) {
        this.name = name;
        this.id = id;
        this.sal = sal;
        this.Department = Department;
    }

    public void get_id() {
        System.out.println("ID: " + id);
    }

    public void get_name() {
        System.out.println("Name: " + name);
    }

    public void set_id(int id) {
        this.id = id;
    }
    
    public void set_name(String name) {
        this.name = name;
    }

    public void calsal() {
        System.out.println("Salary: " + sal);
    }

}

class Teaching extends Emp {
    String Course_assigned;
    int No_of_courses;

    Teaching(String name, int id, double sal, String Department, String Course_assigned, int No_of_courses) {
        super(name, id, sal, Department);
        this.Course_assigned = Course_assigned;
        this.No_of_courses = No_of_courses;
    }

    public void get_course() {
        System.out.println("Course: " + Course_assigned);
    }

    public void set_course(String Course_assigned) {
        this.Course_assigned = Course_assigned;
    }


    public void calsal() { 
        System.out.println("Salary: " + (sal + No_of_courses*2000));
    }

}

class Admin extends Emp {
    String section;
    String Designation;

    Admin(String name, int id, double sal, String Department, String section, String Designation) {
        super(name, id, sal, Department);
        this.section = section;
        this.Designation = Designation;
    }

    public void get_sec() {
        System.out.println("Section: " + section);
    }

    public void set_sec(String section) {
        this.section = section;
    }

    public void calsal() {
        System.out.println("Salary: " + (sal + 10000));
    }
}

class Manager extends Emp {
    int Mgid;
    int tenure;
    String term_name;

    Manager(String name, int id, double sal, String Department, int Mgid, int tenure, String term_name) {
        super(name, id, sal, Department);
        this.Mgid = Mgid;
        this.tenure = tenure;
        this.term_name = term_name;
    }

    public void get_Mgid() {
        super.get_id();
        System.out.println("Manager ID: " + Mgid);
    }

    public void cal_sal() {
        System.out.println("Salary: " + (sal + 20000));
    }

}

public class Employee {
    public static void main(String args[]) {
        Emp E1 = new Emp("Rajiv", 101, 10000, "Sales");
        E1.get_name();

        Teaching T1 = new Teaching("Rohit", 202, 20000, "CSE", "OOP", 3);
        T1.calsal();

        Admin A1 = new Admin("Harry", 420, 30000, "Finance", "Salary", "Senior Admin");
        A1.get_id();

        Manager M1 = new Manager("Faizan", 567, 40000, "Administration", 4224, 5, "Manager");
        M1.get_Mgid();
    }
}