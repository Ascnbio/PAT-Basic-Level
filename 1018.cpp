#include <iostream>
using namespace std;

int result[2][3] = {0, 0, 0, 0, 0, 0};
int most[2][3] = {0, 0, 0, 0, 0, 0};

void cmp(char a, char b) {
    if (a == b) { result[0][1]++; result[1][1]++; return; }
    if (a == 'B' && b == 'C') { result[0][0]++; result[1][2]++; most[0][0]++; return; }
    if (a == 'C' && b == 'J') { result[0][0]++; result[1][2]++; most[0][1]++; return; }
    if (a == 'J' && b == 'B') { result[0][0]++; result[1][2]++; most[0][2]++; return; }
    if (b == 'B' && a == 'C') { result[1][0]++; result[0][2]++; most[1][0]++; return; }
    if (b == 'C' && a == 'J') { result[1][0]++; result[0][2]++; most[1][1]++; return; }
    if (b == 'J' && a == 'B') { result[1][0]++; result[0][2]++; most[1][2]++; return; }
}

int main() {
    int n;
    cin >> n;
    char tmp1, tmp2;
    for (int i = 0; i < n; i++) { cin >> tmp1 >> tmp2; cmp(tmp1, tmp2); }
    cout << result[0][0] << " " << result[0][1] << " " << result[0][2] << endl;
    cout << result[1][0] << " " << result[1][1] << " " << result[1][2] << endl;
    char str[4] = "BCJ";
    int tmp = 0;
    tmp = most[0][0] >= most[0][1] ? 0 : 1;
    tmp = most[0][tmp] >= most[0][2] ? tmp : 2;
    cout << str[tmp] << " ";
    tmp = most[1][0] >= most[1][1] ? 0 : 1;
    tmp = most[1][tmp] >= most[1][2] ? tmp : 2;
    cout << str[tmp];
    return 0;
}