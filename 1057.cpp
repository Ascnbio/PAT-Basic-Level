#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int sum = 0;
    getline(cin, str);
    for (auto c : str) {
        if (isalpha(c))
            sum += tolower(c) - 'a' + 1;
    }
    // 考虑到和为0的时候输出“1 0”是错误的。尴尬。
    int zero = 0, one = 0;
    while (sum != 0) {
        if (sum % 2 == 0) zero++;
        else one++;
        sum /= 2;
    }

    cout << zero << " " << one;

    return 0;
}