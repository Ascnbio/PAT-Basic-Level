#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int m, n, tol;
vector<vector<int>> v;

bool judge(int i, int j) {
    if (abs(v[i - 1][j - 1] - v[i][j]) <= tol) { 
        return false;
    }
    else if (abs(v[i][j - 1] - v[i][j]) <= tol) {
        return false;
    }
    else if (abs(v[i + 1][j - 1] - v[i][j]) <= tol) {
        return false;
    }
    else if (abs(v[i + 1][j] - v[i][j]) <= tol) {
        return false;
    }
    else if (abs(v[i + 1][j + 1] - v[i][j]) <= tol) {
        return false;
    }
    else if (abs(v[i][j + 1] - v[i][j]) <= tol) {
        return false;
    }
    else if (abs(v[i - 1][j + 1] - v[i][j]) <= tol) {
        return false;
    }
    else if (abs(v[i - 1][j] - v[i][j]) <= tol) {
        return false;
    }
    return true;
}


int main() {
    cin >> m >> n >> tol;
    v.resize(n + 2);
    for (int i = 0; i < n + 2; ++i){
        v[i].resize(m + 2);
    }

    map<int, int> num;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> v[i][j];
            num[v[i][j]]++;
        }
    }
    int cnt = 0, x = 0, y = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (num[v[i][j]] == 1 && judge(i, j) == true) {
                cnt++;
                x = i;
                y = j;
            }
        }
    }
    if (cnt == 1)
        cout << "(" << y << ", " << x << "): " << v[x][y];
    else if (cnt == 0) cout << "Not Exist";
    else cout << "Not Unique";
    return 0;
}