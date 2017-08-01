#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    int number;
    int de;
    int cai;

    void show() {
        printf("%d %d %d\n", this->number, this->de, this->cai);
    }
};


bool cmp(struct Student a, struct Student b) {
    if ((a.de + a.cai) != (b.de + b.cai)) return (a.de + a.cai) > (b.de + b.cai);
    else if (a.de != b.de) return a.de > b.de;
    else return a.number < b.number;
}

vector<Student> s1, s2, s3, s4;


int main() {
    int n, l, h;
    scanf("%d %d %d", &n, &l, &h);
    int total = n;
    Student s;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &s.number, &s.de, &s.cai);
        if (s.de < l || s.cai < l) { total--; continue; }
        if (s.de >= h && s.cai >=h) { s1.push_back(s); continue; }
        else if (s.de >= h && s.cai < h) { s2.push_back(s); continue; }
        else if (s.de < h && s.cai < h && s.de >= s.cai) { s3.push_back(s); continue; }
        else { s4.push_back(s); continue; }
    }

    sort(s1.begin(), s1.end(), cmp);
    sort(s2.begin(), s2.end(), cmp);
    sort(s3.begin(), s3.end(), cmp);
    sort(s4.begin(), s4.end(), cmp);

    printf("%d\n", total);
    for (auto iter = s1.begin(); iter != s1.end(); iter++)
        (*iter).show();
    for (auto iter = s2.begin(); iter != s2.end(); iter++)
        (*iter).show();
    for (auto iter = s3.begin(); iter != s3.end(); iter++)
        (*iter).show();
    for (auto iter = s4.begin(); iter != s4.end(); iter++)
        (*iter).show();

    return 0;
}