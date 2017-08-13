#include <iostream>
#include <string>
#include <vector>
using namespace std;

int m, n, s;
vector<string> name;
vector<string> winner;

bool exsisted(string n) {
    for (auto i : winner) if (i == n) return true;
    return false;
}

int main() {
    cin >> m >> n >> s;
    string tmp;
    while (cin >> tmp) name.push_back(tmp);

    for (int i = s - 1; i < m; ) {
        if (!exsisted(name[i])) {
            cout << name[i] << endl;
            winner.push_back(name[i]);
            i += n;
        }
        else i++;
    }
    if (winner.size() == 0) cout << "Keep going...";
    return 0;
}