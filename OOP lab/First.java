// class Student {
//     String Name;
//     String College;
//     int id;
//     static int count = 0;

//     Student(String Name, String College, int id) {
//         this.Name = Name;
//         this.College = College;
//         this.id = id;
//         count++ ;
//     }
// }

// public class First {
//     public static void main(String args[]) {
//         Student S1 = new Student("Rajiv", "NIT", 1);
//         Student S2 = new Student("Rajiv", "NIT", 2);
//         Student S3 = new Student("Rajiv", "NIT", 2);
//         Student S4 = new Student("Rajiv", "NIT", 2);

//         System.out.println("Number of students: " + Student.count);
//     }
// }


class Employee {
    int Empid;
    String Name;

    static void printDetails() {
        System.out.println("Inside method");
    }

    void displayName() {
        System.out.println(this.Name);
    }
}

public class First{
    public static void main(String args[]) {
        // Employee.printDetails();

        Employee e1 = new Employee();
        e1.Name = "Rajiv";
        e1.Empid = 23;
        e1.displayName();

        Employee e2 = new Employee();
        e2.Name = "Jasra";
        e1.Empid = 24;
        e2.displayName();
        }
}
