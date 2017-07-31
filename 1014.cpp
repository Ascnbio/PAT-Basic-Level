#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s1, s2;
vector<char> cv;
vector<string> day = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
vector<char> hour = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B',
                     'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N'};


int main() {
    cin >> s1 >> s2;
    int size = min(s1.size(), s2.size());
    for (int i = 0; i < size; i++) {
        if (s1[i] == s2[i] && (s1[i] >= 'A' && s1[i] <= 'G')) {
            cv.push_back(s1[i]);
            for (int j = i + 1; j < size; j++) {
                if (s1[j] == s2[j] && ((s1[j] >= '0' && s1[j] <= '9') || (s1[j] >= 'A' && s1[j] <= 'N'))) {
                    cv.push_back(s1[j]);
                    break;
                }
            }
            break;
        }
    }

    int d, h, m;
    string s3, s4;
    cin >> s3 >> s4;
    size = min(s3.size(), s4.size());
    for (int i = 0; i < size; i++) {
        if (s3[i] == s4[i] && isalpha(s3[i])) { m = i; break; }
    }

    d = cv[0] - 'A';
    size = hour.size();
    for (int i = 0; i < size; i++) {
        if (hour[i] == cv[1]) h = i;
    }

    cout << day[d] << " ";
    if (h < 10) cout << 0;
    cout << h << ":";
    if (m < 10) cout << 0;
    cout << m;

    return 0;
}

