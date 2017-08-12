#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Stdu {
    string num;
    int sj;
    int ks;
};

int cmp(Stdu &a, Stdu&b) {
    return a.sj < b.sj;
}


vector<Stdu> sv;
int main() {
    int n;
    cin >> n;
    Stdu tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp.num;
        cin >> tmp.sj >> tmp.ks;
        sv.push_back(tmp);
    }
    sort(sv.begin(), sv.end(), cmp);
    cin >> n;
    int sj;
    for (int i = 0; i < n; i++) {
        cin >> sj;
        sj--;
        cout << sv[sj].num << " " << sv[sj].ks << endl;
    }
    return 0;
}