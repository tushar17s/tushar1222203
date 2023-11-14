#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define a structure to represent a student
struct Student {
    string name;
    int rollNumber;
    float marks;
};

// Function to add a new student record
void addStudent(vector<Student> &students) {
    Student newStudent;
    cout << "Enter Student Name: ";
    cin >> newStudent.name;
    cout << "Enter Roll Number: ";
    cin >> newStudent.rollNumber;
    cout << "Enter Marks: ";
    cin >> newStudent.marks;

    students.push_back(newStudent);
    cout << "Student Record Added Successfully!" << endl;
}

// Function to display all student records
void displayStudents(const vector<Student> &students) {
    cout << "Student Records:" << endl;
    for (const Student &student : students) {
        cout << "Name: " << student.name << ", Roll Number: " << student.rollNumber << ", Marks: " << student.marks << endl;
    }
}

int main() {
    vector<Student> students; // Store student records

    while (true) {
        cout << "\nStudent Management System Menu:" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display Student Records" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                displayStudents(students);
                break;
            case 3:
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
