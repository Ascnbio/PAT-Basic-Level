#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    int N, tmp = 99999;
    cin >> N;

    // 计算行数列数
    int m = 0, n = 0;
    for (int i = sqrt(N); i > 0; i--) {
        if (N % i == 0) {
            int t = abs(i - N / i);
            if (t < tmp) {
                tmp = t;
                n = i;
                m = N / n;
            }
        }
    }
    // 申请数组空间
    int **a = new int*[m];
    for (int i = 0; i < m; i++) {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
            a[i][j] = 0;
    }

    vector<int> iv;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        iv.push_back(tmp);
    }
    sort(iv.begin(), iv.end());

    // 填充
    int flag = N - 1, x = 0, y = 0;
    a[x][y] = iv[flag--];
    while (flag >= 0) {
        while (y < n - 1 && a[x][y + 1] == 0) a[x][++y] = iv[flag--];
        while (x < m - 1 && a[x + 1][y] == 0) a[++x][y] = iv[flag--];
        while (y >= 1 && a[x][y - 1] == 0) a[x][--y] = iv[flag--];
        while (x >= 1 && a[x - 1][y] == 0) a[--x][y] = iv[flag--];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            cout << a[i][j] << " ";
        }
        cout << a[i][n - 1] << endl;
    }
    return 0;
}