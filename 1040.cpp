#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int result = 0, cntP = 0, cntT = 0;
    for (auto c : s) if (c == 'T') cntT++;
    for (auto c : s) {
        if (c == 'P') cntP++;
        else if (c == 'T') cntT--;
        else if (c == 'A') 
            result = (result + (cntP * cntT) % 1000000007) % 1000000007;
    }

    cout << result;
    return 0;
}