#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    long int a, b, c;
    string result;
    int flag = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a + b > c) result = "true";
        else result = "false";
        cout << "Case #" << flag++ << ": " << result << endl;
    }
    return 0;
}