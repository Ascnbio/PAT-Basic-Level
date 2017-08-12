#include <iostream>
#include <string>
using namespace std;

const string lo[13] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
const string hi[12] = { "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };

int toEarth(string str, int flag) {
    if (flag) {
        for (int i = 0; i < 13; i++) {
            if (lo[i] == str) return i;
        }
    }
    else {
        for (int i = 0; i < 12; i++) {
            if (hi[i] == str) return ++i;
        }
    }
    return -1;
}

string toMars(int i, int flag) {
    return flag ? lo[i] : hi[--i];
}

int main() {
    int n;
    cin >> n;
    getchar();
    string tmp;
    for (int i = 0; i < n; i++) {
        getline(cin, tmp);
        if (isdigit(tmp[0])) {
            // earth
            int num = stoi(tmp);
            if (num < 13) {
                cout << toMars(num, 1) << endl;
                continue;
            }
            else if (num % 13 == 0) {
                cout << toMars(num / 13, 0) << endl;
            }
            else {
                cout << toMars(num / 13, 0) << " " << toMars(num % 13, 1) << endl;
            }
        }
        else {
            // mars
            int size = tmp.size();
            if (size > 4) {
                string high = tmp.substr(0, tmp.find(' '));
                string low = tmp.substr(tmp.find(' ') + 1, tmp.size());
                int num = toEarth(high, 0) * 13 + toEarth(low, 1);
                cout << num << endl;
                continue;
            }
            else {
                int num = toEarth(tmp, 1);
                if (num != -1) {
                    cout << num << endl;
                    continue;
                }
                else {
                    num = toEarth(tmp, 0);
                    cout << num * 13 << endl;
                    continue;
                }
            }
        }
    }
    return 0;
}