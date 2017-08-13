#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isPrime(int n) {
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, k, tmp;
    cin >> n;
    int rank[10000];
    for (auto &c : rank) c = 0;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        rank[tmp] = i;
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> tmp;
        cout << setfill('0') << setw(4) << tmp << ": ";
        if (rank[tmp] == 0) {
            cout << "Are you kidding?" << endl;
            continue;
        }
        if (rank[tmp] == -1) {
            cout << "Checked" << endl;
        }
        else if (rank[tmp] == 1) {
            cout << "Mystery Award" << endl;
        }
        else if (isPrime(rank[tmp])) {
            cout << "Minion" << endl;
        }
        else {
            cout << "Chocolate" << endl;
        }
        rank[tmp] = -1;
    }

    return 0;
}