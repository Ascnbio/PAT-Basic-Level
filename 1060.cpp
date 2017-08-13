#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i < n + 1; i++) cin >> a[i];
    sort(a + 1, a + n + 1, cmp);
    int ed = 0, p = 1;
    while(ed <= n && a[p] > p) {
        ed++;
        p++;
    }
    cout << ed;
    return 0;
}