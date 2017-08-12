#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[1000];
    int ap[26] = { 0 };
    cin.getline(str, 1000);
    int size = strlen(str);
    for (int i = 0; i < size; i++) {
        if (isalpha(str[i]))
            ap[tolower(str[i]) - 'a'] ++;
    }
    char ch;
    int num = 0;
    for (int i = 0; i < 26; i++) {
        if (ap[i] > num) {
            ch = 'a' + i;
            num = ap[i];
        }
    }
    cout << ch << " " << num;
    return 0;
}