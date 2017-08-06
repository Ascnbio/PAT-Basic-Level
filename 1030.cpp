#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long int n, p, tmp = 0;
    cin >> n >> p;
    vector<long long int> iv;
    while (cin >> tmp) iv.push_back(tmp);
    sort(iv.begin(), iv.end());
    int result = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + result; j < n; j++) {
            if (iv[j] > iv[i] * p) break;
            result = result > j - i + 1 ? result : j - i + 1;
        } 
    }
    cout << result;

    return 0;
}