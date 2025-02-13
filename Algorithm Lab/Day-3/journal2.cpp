#include<bits/stdc++.h>
using namespace std;
struct Student {
    string lastName;
    string firstName;
};
bool compareStudents(const Student &a, const Student &b) {
    if (a.lastName == b.lastName) {
        return a.firstName < b.firstName;
    }
    return a.lastName < b.lastName;
}
int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        cin >> students[i].lastName >> students[i].firstName;
    }
    sort(students.begin(), students.end(), compareStudents);
    for (int i = 0; i < n; ++i) {
        cout << students[i].lastName << " " << students[i].firstName << endl;
    }
    return 0;
}