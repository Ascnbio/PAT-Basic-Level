#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, tmp;
    vector<int> fn;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        int sum = 0;
        while (tmp) {
            sum += tmp % 10;
            tmp /= 10;
        }
        fn.push_back(sum);
    }
    sort(fn.begin(), fn.end()); 
    auto it = unique(fn.begin(), fn.end());
    fn.resize(distance(fn.begin(), it));
    int size = fn.size();
    cout << size << endl;
    for (int i = 0; i < size - 1; i++) {
        cout << fn[i] << " ";
    }
    cout << fn[size - 1];
    return 0;
}