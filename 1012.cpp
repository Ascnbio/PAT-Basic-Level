#include <iostream>
#include <iomanip>
using namespace std;
int N;
int cnt[5] = {0, 0, 0, 0, 0};
float result[5] = {0, 0, 0, 0, 0};


void print(int i) {
    if (cnt[i] == 0) {
        if (i == 4) { cout << "N"; return; }
        else { cout << "N "; return; }
    }
    if (i == 3) { cout << fixed << setprecision(1) << result[i] / cnt[i] << setprecision(0) << " "; return; }
    else if (i == 4) { cout << result[i]; return; }
    else { cout << result[i] << " "; return; }
}

int main() {
    cin >> N;
    int num[N];

    int i = 0;
    while (cin >> num[i++]) ;


    for (auto n : num) {
        if (n % 5 == 0 && n % 2 == 0) { result[0] += n; cnt[0]++; }
        else if (n % 5 == 1) { 
            if (cnt[1] % 2 == 0) result[1] += n;
            else result[1] -= n;
            cnt[1]++;
        }
        else if (n % 5 == 2) { result[2]++; cnt[2]++; }
        else if (n % 5 == 3) { result[3] += n; cnt[3]++; }
        else if (n % 5 == 4 && n > result[4]) { result[4] = n; cnt[4]++; }
    }

    for (int i = 0; i < 5; i++) print(i);

    return 0;
}