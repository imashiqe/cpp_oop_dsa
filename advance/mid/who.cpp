#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    int ID;
    std::string Name;
    char Section;
    int TotalMarks;

    bool operator<(const Student& other) const {
        if (TotalMarks == other.TotalMarks) {
            return ID < other.ID;
        }
        return TotalMarks > other.TotalMarks;
    }
};

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; t++) {
        vector<Student> students;
        for (int i = 0; i < 3; i++) {
            Student student;
            cin >> student.ID >> student.Name >> student.Section >> student.TotalMarks;
            students.push_back(student);
        }

        sort(students.begin(), students.end());

        cout << students[0].ID << " " << students[0].Name << " " << students[0].Section << " " << students[0].TotalMarks << std::endl;
    }

    return 0;
}
