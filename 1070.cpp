#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    vector<int> iv;
    for (int i = 0; i < n; i++) {
        cin >> k;
        iv.push_back(k);
    }
    sort(iv.begin(), iv.end());
    int sum = iv[0];
    for (int i = 1; i < n; i++)
        sum = (sum + iv[i]) / 2;
    cout << sum;
    return 0;
}