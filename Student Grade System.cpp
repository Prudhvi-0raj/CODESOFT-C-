#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main() {
   
    string names[100];
    double grades[100];
    int numStudents;

    cout << "Student Grade System" << endl;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin.ignore();
        getline(cin, names[i]);
        cout << "Enter the grade for " << names[i] << ": ";
        cin >> grades[i];
    }
    double sum = 0;
    double highestGrade = grades[0];
    double lowestGrade = grades[0];

    for (int i = 0; i < numStudents; i++) {
        sum += grades[i];
        if (grades[i] > highestGrade) {
            highestGrade = grades[i];
        }
        if (grades[i] < lowestGrade) {
            lowestGrade = grades[i];
        }
    }

    double averageGrade = sum / numStudents;

    cout << "Average Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
