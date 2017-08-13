#include <iostream>
using namespace std;

int main() {
    string passwd, tmp;
    int n;
    cin >> passwd >> n;
    getchar();
    for (int i = 0; i < n; i++) {
        getline(cin, tmp);
        if (tmp == "#") return 0;
        if (tmp != passwd) 
            cout << "Wrong password: " << tmp << endl;
        else if (tmp == passwd) {
            cout << "Welcome in";
            return 0;
        }
    }
    cout << "Account locked";
    return 0;
}