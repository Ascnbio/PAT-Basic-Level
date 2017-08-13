#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n1, m1, n2, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k); 
    if (n1 * m2 > n2 * m1) {
        swap(n1, n2);
        swap(m1, m2);
    }
    bool flag = false;
    int i = 1;
    while (n1 * k >= m1 * i) i++;
    while (n1 * k < m1 * i && m2 * i < n2 * k) {
        if (gcd(i, k) == 1) {
            if (flag) cout << " ";
            cout << i << "/" << k;
            flag = true;
        }
        i++;
    }
    return 0;
}