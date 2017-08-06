#include <iostream>
#include <string>
using namespace std;


const char z[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
const int power[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };

int main() {
    string tmp;
    int n, flag = 1;
    bool fl = true;
    cin >> n;
    while (cin >> tmp) {
        int sum = 0;
        for (int i = 0; i < 17; i++) {
            flag = 1;
            if (tmp[i] >= '0' && tmp[i] <= '9') {
                sum += (tmp[i] - '0') * power[i];
            }
            else {
                flag = 0; fl = false;
                cout << tmp << endl;
                break;
            }
        }
        if (flag) {
            if (tmp[17] == z[sum % 11]) continue;
            else {
                cout << tmp << endl;
                fl = false;
            }
        }
    }
    if (fl) cout << "All passed";

    return 0;
}