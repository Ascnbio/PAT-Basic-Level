#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
        b.push_back(tmp);
    }
    sort(a.begin(), a.end());
    vector<int> ans;
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i] && b[i] > max)
            ans.push_back(b[i]);
        if (b[i] > max) max = b[i];
    }
    int size = ans.size();
    cout << size << endl;
    for (int i = 0; i < size; i++) {
        if (i != 0) cout << " ";
        cout << ans[i];
    }
    cout << endl;
    return 0;
}