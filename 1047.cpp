#include <iostream>
#include <map>
#include <string>
using namespace std;

int n;
map<string, int> mapGroup;

int main() {
    cin >> n;
    string tmp;
    int score;
    for (int i = 0; i < n; i++) {
        cin >> tmp >> score;
        string group = tmp.substr(0, tmp.find('-'));
        auto iter = mapGroup.find(group);
        if (iter == mapGroup.end()) mapGroup[group] = score;
        else mapGroup[group] += score;
    }

    score = 0;
    for (auto iter = mapGroup.begin(); iter != mapGroup.end(); iter++) {
        if (iter->second > score) { tmp = iter->first; score = iter->second; }
    }
    cout << tmp << " " << score;

    return 0;
}