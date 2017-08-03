#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

int cmp(const int &a, const int &b) {
	return a > b;
}

int main() {
	char s[4];
    int n; 
    
    cin >> n;
    sprintf(s, "%04d", n);
	string str = s;
	int cnt = 0;
	for (auto c : str) if (c == str[0]) cnt++;
	if (cnt == 4) { cout << str << " - " << str << " = 0000"; return 0; }
	int big = 0, small = 0, tmp = 0;
	while (tmp != 6174) {
		sort(str.begin(), str.end());
		small = stoi(str);
		sort(str.begin(), str.end(), cmp);
		big = stoi(str);
		tmp = big - small;
		sprintf(s, "%04d", tmp);
		cout << setfill('0') << setw(4) << big << " - "
			 << setfill('0') << setw(4) << small << " = "
			 << setfill('0') << setw(4) << tmp << endl;
		str = s;
	}
	return 0;
}