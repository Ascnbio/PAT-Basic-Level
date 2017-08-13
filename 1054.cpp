#include <iostream>
#include <string>
using namespace std;

bool isLegal(string str) {
    int pnt = 0;
    for (auto c : str) {
        if (isalpha(c)) {
            cout << "ERROR: " << str << " is not a legal number" << endl;
            return false;
        }
        if (c == '.') pnt++;
        if (pnt >= 2) {
            cout << "ERROR: " << str << " is not a legal number" << endl;
            return false;
        }
    }

    double tmp = stod(str);
    if (!(tmp <= 1000.00 && tmp >= -1000.00)) {
        cout << "ERROR: " << str << " is not a legal number" << endl;
        return false;
    }
    auto size = str.size();
    auto pos = str.find('.');
    if (pos == std::string::npos) return true;
    else if (size - 1 - pos > 2) {
        cout << "ERROR: " << str << " is not a legal number" << endl;
        return false;
    }
    return true;
}

int main() {
    int n, cnt = 0;
    double sum = 0.0;
    string tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (isLegal(tmp)) {
            cnt++;
            sum += stod(tmp);
        }
    }
    if (cnt > 1)
        printf("The average of %d numbers is %.2lf", cnt, sum / cnt);
    else if (cnt == 1)
        printf("The average of 1 number is %.2lf", sum);
    else 
        printf("The average of 0 numbers is Undefined");
    return 0;
}