#include <iostream>
using namespace std;

int main() {
    int i = 0, num[10] = {0};
    while (cin >> num[i++]) ;

    for (i = 1; i < 10; i++) {
        if (num[i] != 0) {
            cout << i;
            num[i]--;
            break;
        }
    }

    for (i = 0; i < 10; i++) {
        while (num[i] != 0) {
            cout << i;
            num[i]--;
        }
    }
    return 0;
}
