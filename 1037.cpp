#include <iostream>
using namespace std;
int main() {
    int ps, pg ,pk;
    int as, ag, ak;
    scanf("%d.%d.%d",&ps, &pg, &pk);
    scanf("%d.%d.%d",&as, &ag, &ak);
    int flag;
    if (ps > as || (ps == as && pg > ag) || (ps == as && pg == ag && pk > ak))
        flag = 0;
    else
        flag = 1;
    
    int s, g, k;
    if (flag) {
        if (ak >= pk) k = ak - pk;
        else {
            k = ak + 29 - pk;
            ag--;
        }
        if (ag >= pg) g = ag - pg;
        else {
            g = ag + 17 - pg;
            as--;
        }
        s = as - ps;
    } 
    else {
        cout << "-";
        if (pk >= ak) k = pk - ak;
        else {
            k = pk + 29 - ak;
            pg--;
        }
        if (pg >= ag) g = pg - ag;
        else {
            g = pg + 17 - ag;
            ps--;
        }
        s = ps - as;
    }
    cout << s << "." << g << "." << k;
    return 0;
}