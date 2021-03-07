#include <bits/stdc++.h>
using namespace std;

int isOperator(char c) {
    if (c == '*' || c == '/' || c == '-' || c == '+') return 1;
    return 0;
}

string toString(char c) {
    string res = "";
    res = res + c;
    return res;
}

string postfix(string infix) {
    int l = infix.length();
    stack<string> contain;
    for (int i = l - 1; i >= 0; i--) {
        if (isalpha(infix[i])) {
            string str = toString(infix[i]);
            contain.push(str);
        } else if (isOperator(infix[i])) {
            string str = "";
            string a = contain.top();
            contain.pop();
            string b = contain.top();
            contain.pop();
            string res = "";
            res = res + a + b + infix[i];
            contain.push(res);
        }
    }
    return contain.top();
}

int main() {
    string str;
    cin >> str;
    cout << postfix(str);
    return 0;
}