package revision;
class Address{
    String city;
    Address(String city) {
        this.city = city;
    }
}

class Student {
    int id;
    String name;
    Address addr;
    Student() {
        this(0, "Unknown", new Address("NA"));

    }

    Student(int id, String name, Address addr) {
        this.id = id; 
        this.name = name;
        
    }
}


