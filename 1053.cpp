#include <iostream>
using namespace std;


int main() {
    int n, d, days;
    double e;
    cin >> n >> e >> d;
    int maybe = 0, empty = 0;
    for (int i = 0; i < n; i++) {
        cin >> days;
        double tmp;
        int cnt = 0;
        for (int j = 0; j < days; j++) {
            cin >> tmp;
            if (tmp < e) cnt++;
        }
        if (cnt > days / 2 && days <= d) maybe++;
        if (cnt > days / 2 && days > d) empty++;
    }

    double mb = (double)maybe * 100 / n;
    double et = (double)empty * 100 / n;
    printf("%.1lf%% %.1lf%%", mb, et);

    return 0;
}