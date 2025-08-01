#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollNumber = r;
        cout << "Student object created!" << endl;
    }

    // Method to display student info
    void displayInfo() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student object destroyed!" << endl;
    }
};

int main() {
    Student s1("Ali", 101);
    s1.displayInfo();

    return 0;
}
