#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX = 999999999;
vector<int> prime;
vector<int> p;

bool isPrime(int n) {
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int m, n, size;
    cin >> m >> n;
    for (int i = 2; i < MAX; i++) {
        if (isPrime(i)) prime.push_back(i);
        size = prime.size();
        if (size == m) break;
    }

    for (int i = prime.back(); i < MAX; i++) {
        if (isPrime(i)) p.push_back(i);
        size = p.size();
        if (size == n - m + 1) break;
    }
    
    for (int i = 0; i < size - 1; i++) {
        cout << p[i];
        if (i % 10 == 9) cout << endl;
        else cout << " ";
    }
    cout << p.back();

    return 0;
}