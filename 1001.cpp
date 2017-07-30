#include <cstdio>

int main() {    
    int n;
    int i = 0;
    scanf("%d", &n);
    while (n != 1) {
        if (n % 2 == 0) n >>= 1;
        else if (n % 2 == 1) n = (3 * n + 1) >> 1; 
        i++;
    }
    printf("%d", i);
    return 0;
}