#include <iostream>
using namespace std;

// Define a structure
struct Student {
    string name;
    int age;
    double gpa;
};

int main() {
    // Declare variables of the structure type
    Student student1;
    Student student2;

    // Access and modify structure members
    student1.name = "Alice";
    student1.age = 20;
    student1.gpa = 3.7;

    student2.name = "Bob";
    student2.age = 22;
    student2.gpa = 3.9;

    // Display structure members
    cout << "Student 1: " << student1.name << ", Age: " << student1.age << ", GPA: " << student1.gpa << endl;
    cout << "Student 2: " << student2.name << ", Age: " << student2.age << ", GPA: " << student2.gpa << endl;

    return 0;
}
