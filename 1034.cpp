#include <iostream>
#include <string>
using namespace std;

// 求最大公约数
long long gcd(long long m, long long n) {
    if (m < n) swap(m, n);
    while (n != 0) {
        long long tmp = m % n;
        m = n;
        n = tmp;
    }
    return m;
}

string sortStr(long long i, long long j) {
    string s;
    if (i == 0) { s = "0"; return s; }
    bool neg = false;
    if ((i < 0 && j > 0) || (i > 0 && j < 0)) // 如果直接写 i * j < 0 的话在极端情况会判断错误
        neg = true; 
    i = abs(i); j = abs(j); 

    if (i % j == 0) {
        s = to_string(i / j);
        if (neg) s = "(-" + s + ")";
        return s;
    }

    // 化简
    long long m = gcd(i, j);
    if (m != 1) { i /= m; j /= m; }

    if (i / j != 0) {
        s = to_string(i / j) + " " + 
            to_string(i - i / j * j) + "/" +
            to_string(j);
        if (neg) s = "(-" + s + ")";
        return s;
    }
    s = to_string(i) + "/" + to_string(j);
    if (neg) s = "(-" + s + ")"; 
    return s;
}

string answer[4];
void cal(long long i1, long long j1, long long i2, long long j2) {
    string tmp;
    // 加
    tmp = sortStr(i1 * j2 + i2 * j1, j1 * j2);
    answer[0] = tmp;
    // 减
    tmp = sortStr(i1 * j2 - i2 * j1, j1 * j2);
    answer[1] = tmp;
    // 乘
    tmp = sortStr(i1 * i2, j1 * j2);
    answer[2] = tmp;
    // 除
    if (i2 == 0) { answer[3] = "Inf"; return; }
    tmp = sortStr(i1 * j2, j1 * i2);
    answer[3] = tmp;
}

int main() {
    string a, b;
    long long i1, j1, i2, j2;
    scanf("%lld/%lld %lld/%lld", &i1, &j1, &i2, &j2);
    cal(i1, j1, i2, j2);
    a = sortStr(i1, j1);
    b = sortStr(i2, j2);
    cout << a << " + " << b << " = " << answer[0] << endl;
    cout << a << " - " << b << " = " << answer[1] << endl;
    cout << a << " * " << b << " = " << answer[2] << endl;
    cout << a << " / " << b << " = " << answer[3];
    
    return 0;
}