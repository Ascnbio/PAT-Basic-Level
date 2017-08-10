#include <iostream>
using namespace std;

int score[1000] = {0};

int main() {
    int n, k;
    cin >> n;
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        score[tmp]++;
    }
    cin >> k;
    for (int i = 0; i < k - 1; i++) {
        cin >> tmp;
        cout << score[tmp] << " ";
    }
    cin >> tmp;
    cout << score[tmp];
    return 0;
}