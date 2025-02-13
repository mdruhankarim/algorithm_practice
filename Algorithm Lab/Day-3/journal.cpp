#include<bits/stdc++.h>
using namespace std;
struct Student {
    string name;
    int grade;
};
bool compareStudents(const Student &a, const Student &b) {
    return a.grade > b.grade;
}
int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        cin >> students[i].name >> students[i].grade;
    }
    sort(students.begin(), students.end(), compareStudents);
    for (int i = 0; i < n; ++i) {
        cout << students[i].name << " " << students[i].grade << endl;
    }
    return 0;
}