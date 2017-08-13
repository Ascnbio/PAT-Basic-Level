#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    int cp[100000];
    for (auto &c : cp) c = -1;
    cin >> n;
    int tmp1, tmp2;
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        cp[tmp1] = tmp2;
        cp[tmp2] = tmp1;
    }
    int party[100000];
    for (auto &c : party) c = -1;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp1;
        party[tmp1] = 1;
    }
    for (int i = 0; i < 100000; i++) {
        if (party[i] == 1 && party[cp[i]] == 1) {
            party[i] = -1;
            party[cp[i]] = -1;
        }
    }
    vector<int> single;
    for (int i = 0; i < 100000; i++) {
        if (party[i] == 1)
            single.push_back(i);
    }
    sort(single.begin(), single.end());
    int size = single.size();
    cout << size << endl;
    if (size == 0) return 0;
    for (int i = 0; i < size - 1; i++) {
        cout << setfill('0') << setw(5) << single[i] << " ";
    }
    cout << setfill('0') << setw(5) << single[size - 1];
    return 0;

}