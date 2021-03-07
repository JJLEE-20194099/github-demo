#include<bits/stdc++.h>

using namespace std;

int isMatching(char a, char b) {
    if (a == '(' && b == ')') return 1;
    if (a == '{' && b == '}') return 1;
    if (a == '[' && b == ']') return 1;
    if (a == 'X') return 1;
    return 0;
}

int isBalanced(string str, stack<char>contain, int index) {
    if (index == str.length())
        return contain.empty();

    if (str[index] == '(' || str[index] == '{' || str[index] == '[') {
        contain.push(str[index]);
        return isBalanced(str, contain, index + 1);
    } else if (str[index] == ')' || str[index] == '}' || str[index] == ']') {
        if (contain.empty()) return 0;
        char topEle = contain.top();
        contain.pop();
        if (!isMatching(topEle, str[index])) return 0;
        return isBalanced(str, contain, index + 1);
    } else if (str[index] == 'X') {
        stack<char> temp = contain;
        temp.push(str[index]);
        int res = isBalanced(str, temp, index + 1);
        if (res) return 1;
        if (contain.empty()) return 0;
        contain.pop();
        return isBalanced(str, contain, index + 1);
    }
}

int main() {
    string str;
    cin >> str;
    stack<char> contain;
    cout << isBalanced(str, contain, 0) << endl;
    return 0;
}