#include <iostream>
using namespace std;

void swap(int num[], int l, int h) {
    while (l < h) {
        int temp = num[l];
        num[l] = num[h];
        num[h] = temp;
        l++; h--;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    m %= n;
    int num[n];
    for (auto &i : num) cin >> i;
    swap(num, 0, n - m - 1);
    swap(num, n - m, n - 1);
    swap(num, 0, n - 1);
    for (int i = 0; i < n - 1; i++) cout << num[i] << " ";
    cout << num[n - 1];
    return 0;
}