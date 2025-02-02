#include <iostream>
#include <vector>

using namespace std;

struct Course {
    string name;
    int credits;
    double grade;
};

double calculateGPA(const vector<Course>& courses) {
    double totalPoints = 0;
    int totalCredits = 0;

    for (const auto& course : courses) {
        totalPoints += course.grade * course.credits;
        totalCredits += course.credits;
    }

    return totalCredits ? totalPoints / totalCredits : 0;
}

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<Course> courses(numCourses);

    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter the name of course " << i + 1 << ": ";
        cin >> courses[i].name;
        cout << "Enter the credits for " << courses[i].name << ": ";
        cin >> courses[i].credits;
        cout << "Enter the grade for " << courses[i].name << ": ";
        cin >> courses[i].grade;
    }

    double gpa = calculateGPA(courses);
    cout << "Your GPA is: " << gpa << endl;

    return 0;
}