#include <iostream>
using namespace std;

int main() {
    int age;
    float marks;
    const int totalSubjects = 5;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "\n--- Student Details ---" << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Total Subjects: " << totalSubjects << endl;

    cout << "Age greater than 18: "
         << (age > 18) << endl;

    cout << "Marks valid: "
         << (marks >= 0 && marks <= 100) << endl;

    return 0;
}
