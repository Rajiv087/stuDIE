public class Students {
    String name;
    int marks_1;
    int marks_2;
    int marks_3;
    int total;
    double Percentage;

    public void Setmarks(String name, int marks_1, int marks_2, int marks_3) {
        this.name = name;
        this.marks_1 = marks_1;
        this.marks_2 = marks_2;
        this.marks_3 = marks_3;
    }

    public void Totalmarks() {
        total = marks_1 + marks_2 + marks_3;
    }

    public void Percentage() {
        Percentage = (total/300.0) * 100; 
    }

    public void Displaygrades() {
        System.out.println("Name: " + name);
        System.out.println("Marks: " + marks_1 + ", " + marks_2 + ", " + marks_3);
        System.out.println("Total: " + total);
        System.out.println("Percentage: " + Percentage + "%");
    

    String grade;
    if(Percentage>=90) grade = "A";
    else if (Percentage>=80) grade = "B";
    else if (Percentage>=70) grade = "C";
    else if (Percentage>=60) grade = "D";
    else if (Percentage>=50) grade = "E";
    else grade = "F";

    System.out.println("Grade: " + grade);
    System.out.println("");
    
    }

    public static void main(String args[]) {
        Students s1 = new Students();
        s1.Setmarks("Rajiv", 78, 89, 56);
        s1.Totalmarks();
        s1.Percentage();
        s1.Displaygrades();
        
        Students s2 = new Students();
        s2.Setmarks("Anmol", 99, 79, 87);
        s2.Totalmarks();
        s2.Percentage();
        s2.Displaygrades();

        Students s3 = new Students();
        s3.Setmarks("Rohit", 100, 98, 99);
        s3.Totalmarks();
        s3.Percentage();
        s3.Displaygrades(); 
    }

}
