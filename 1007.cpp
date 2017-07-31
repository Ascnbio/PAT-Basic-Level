#include <iostream>
#include <math.h>
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
    int n, fl = 0;
    cin >> n;
    int i = 2;
    while (i++ < n - 2) {
        if (isPrime(i) && isPrime(i + 2)) fl++;
    }
    cout << fl;
    
    return 0;
}