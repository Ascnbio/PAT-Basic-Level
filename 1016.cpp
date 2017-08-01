#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int part(string str, char p) {
    int cnt = 0, sum = 0;
    for (auto c : str) if (c == p) cnt++;
    while (cnt) sum += (p - '0') * pow(10, --cnt);
    return sum;
}

int main() {
    string str1, str2;
    char c1, c2;
    cin >> str1 >> c1 >> str2 >> c2;
    int sum = part(str1, c1) + part(str2, c2);
    cout << sum;
    return 0;
}
