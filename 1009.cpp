#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> st;
    string str;

    while (cin >> str) {
        st.push(str);
    }
    
    int size = st.size();
    for (int i = 0; i < size - 1; i++) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << st.top();

    return 0;
}