#include <iostream>
using namespace std;

int N;

int main() {
    cin >> N;
    int num = 0, score = 0;
    int result[N];
    for (auto &r : result) r = 0;
    for (int i = 0; i < N; i++) {
        cin >> num >> score;
        result[num] += score;
    }
    for (int i = 0; i < N; i++) {
        if (result[i] > score) { num = i; score = result[i]; }
    }
    cout << num << " " << score;
    return 0;
}