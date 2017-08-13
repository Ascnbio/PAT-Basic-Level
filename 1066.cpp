#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int m, n, a, b, grey;
    cin >> m >> n >> a >> b >> grey;
    int tmp;
    vector<int> iv;
    for (int i = 0; i < m * n; i++) {
        cin >> tmp;
        if (tmp >= a && tmp <= b) tmp = grey;
        iv.push_back(tmp);
    }
    int flag = 0;
    for (int i = 0; i < m * n; i++) {
        cout << setfill('0') << setw(3) << iv[i];
        if (flag == n - 1) { cout << endl; flag = 0; }
        else { cout << " "; flag++; }
    }
}