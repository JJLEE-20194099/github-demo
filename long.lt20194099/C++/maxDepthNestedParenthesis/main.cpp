#include<bits/stdc++.h>

using namespace std;

int maxDepthNestedParenthesis(string str) {
    int curr_max = 0;
    int res = 0;
    int l = str.length();
    for (int i = 0; i < l ; i++) {
        if (str[i] == '(') {
            curr_max++;
            res = max (res, curr_max);
        }
        else if (str[i] == ')') {
            if (curr_max > 0)
                curr_max--;
            else return -1;
        }
    }

    if (curr_max != 0) return -1;
    else return res;
}

int main() {
    string str;
    cin >> str;
    cout << maxDepthNestedParenthesis(str) << endl;
    return 0;
}