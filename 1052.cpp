#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string tmp;
    vector< vector<string> > dida;
    for (int i = 0; i < 3; i++) {
        getline(cin, tmp);
        int size = tmp.size();
        vector<string> bq;
        for (int j = 0; j < size; j++) {
            if (tmp[j] == '[') {
                for (int k = j; k < size; k++) {
                    if (tmp[k] == ']') {
                        bq.push_back(tmp.substr(j + 1, k - j - 1));
                        break;
                    }
                }
            }
        }
        dida.push_back(bq);
    }
    int hand = dida[0].size();
    int eye = dida[1].size();
    int mouth = dida[2].size();

    int k, a, b, c, d, e;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> a >> b >> c >> d >> e;
        if (a > hand || b > eye || c > mouth || d > eye || e > hand) {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }
        if (a < 1 || b < 1 || c < 1 || d < 1 || e < 1) {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }
        cout << dida[0][a - 1] << "(" << dida[1][b - 1] << dida[2][c - 1] << dida[1][d - 1] << ")" << dida[0][e - 1] << endl;
    }

    return 0;
}