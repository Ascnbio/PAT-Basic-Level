#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c, d;
    int jia = 0, yi = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;
        if (a + c == b && b != d)
            yi++;
        else if (a + c == d && b != d)
            jia++;
    }
    cout << jia << " " << yi;
    return 0;
}