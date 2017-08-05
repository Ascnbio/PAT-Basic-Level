#include <iostream>
using namespace std;

int main() {
	int n;
	char ch;
	cin >> n >> ch;

	int tmp = n, i = 3, cnt = 0;
	while (tmp - i * 2 > 0) {
		tmp -= i * 2;
		i += 2;
		cnt++;
	}
	for (int j = 0; j < cnt; j++) {
		for (int k = j; k > 0; k--) cout << " ";
		for (int k = 0; k < i - 2; k++) cout << ch;
		cout << endl;
		i -= 2;
	}

	for (int k = cnt; k > 0; k--) cout << " ";
	for (int k = 0; k < i - 2; k++) cout << ch;
	cout << endl;

	for (int j = cnt; j > 0; j--) {
		for (int k = j - 1; k > 0; k--) cout << " ";
		for (int k = 0; k < i; k++) cout << ch;
		cout << endl;
		i += 2;
	}

	cout << tmp - 1 << endl;
	return 0;
}