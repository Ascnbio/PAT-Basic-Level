#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int result[10] = {0};
    for (auto c : str) result[c-'0']++;
    for (int i = 0; i < 10; i++) {
        if (result[i] == 0) continue;
        cout << i << ":" << result[i] << endl;
    }
    return 0;
}