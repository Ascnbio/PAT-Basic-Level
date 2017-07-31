#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> iv;
vector<int> ir;

void callatz(int n) {
    while (n != 1) {
        if (n % 2 == 0) n >>= 1;
        else if (n % 2 == 1) n = (3 * n + 1) >> 1;
        iv.push_back(n);
    }
}

bool compare(int i) {
    for (auto j : iv) {
        if (i == j) return false;
    }
    return true;
}

int main() {
    cin >> n;
    int in[n];
    for (int i = 0; i < n; i++) cin >> in[i];
    for (auto i : in) callatz(i);
    sort(iv.begin(), iv.end());
    iv.erase(unique(iv.begin(), iv.end()), iv.end());

    for (auto i : in) {
        if (compare(i)) ir.push_back(i);
    }

    sort(ir.begin(), ir.end(), greater<int>());

    auto iter = ir.begin();
    for (; iter < ir.end() - 1; iter++) cout << *iter << " ";
    cout << *(ir.end() - 1);

    return 0;
}