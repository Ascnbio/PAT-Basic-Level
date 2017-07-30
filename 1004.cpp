#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    string num;
    int score;

    bool operator <(const Student &s) const {
        return score < s.score;
    }

    void show() {
        cout << this->name << " " << this->num << endl;
    }
};

vector<Student> stud;

int main() {
    int n;
    cin >> n;
    Student s;
    for (int i = 0; i < n; i++) {
        cin >> s.name >> s.num >> s.score;
        stud.push_back(s);
    }
    sort(stud.begin(), stud.end());

    (*(stud.end()-1)).show();
    (*stud.begin()).show();

    return 0;
}
