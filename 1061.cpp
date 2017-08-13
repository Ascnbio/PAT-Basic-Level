#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int score[m];
    for (int i = 0; i < m; i++) cin >> score[i];
    int right[m];
    for (int i = 0; i < m; i++) cin >> right[i];
    int sum = 0, tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            if (tmp == right[j]) sum += score[j];
        }
        cout << sum << endl;
        sum = 0;
    }
}