#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    int mask = 1;
    int temp = n;
    while (temp /= 10) mask *= 10;
    
    while (mask) {
        for (int i = 0; i < n / mask; i++) {
            if (mask == 100) cout << "B";
            else if (mask == 10) cout << "S";
            else if (mask == 1) cout << i + 1;
        }
        n %= mask;
        mask /= 10;
    }
    return 0;
}