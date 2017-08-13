#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

struct stud {
    string name;
    int height;
};

int cmp(stud &a, stud &b) {
    if (a.height == b.height) return a.name < b.name;
    else return a.height > b.height;
}


int n, k;
vector<stud> sv;

void tp(int &flag, int num) {
    list<stud> sl;
    for (int i = 0; i < num; i++) {
        if (i % 2 == 1) sl.push_front(sv[flag]);
        else sl.push_back(sv[flag]);
        flag++;
    }
    auto beg = sl.begin();
    int size = sl.size();
    for (int i = 0; i < size - 1; i++) {
        cout << (beg++)->name << " ";
    }
    cout << beg->name << endl;
}

int main() {
    cin >> n >> k;
    stud tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp.name >> tmp.height;
        sv.push_back(tmp);
    }
    sort(sv.begin(), sv.end(), cmp);
    int p = n / k;
    int m = n - p * k + p;
    int flag = 0;

    tp(flag, m);
    for (int i = 0; i < k - 1; i++) {
        tp(flag, p);
    }


    return 0;
}