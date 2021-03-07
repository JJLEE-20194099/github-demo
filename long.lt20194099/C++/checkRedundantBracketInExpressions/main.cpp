#include<bits/stdc++.h>

using namespace std;

string convert(string str) {
    stack<int> index;

    // i < str.length() vi xau no thay doi do dai do minh replace
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') index.push(i);
        else if (str[i] == ')') {
            if (!index.empty()) {
                int openBracketIndex = index.top();
                index.pop();
                str.replace(openBracketIndex, 1, "0");
                str.replace(i, 1, "1");
            } else str.replace(i, 1, "-1");
        }
    }
    while (!index.empty()) {
        str.replace(index.top(), 1, "-1");
        index.pop();
    }
    return str;
}
//
//string convert(string a)
//{
//    stack<int> st;
//
//    // run the loop upto end of the string
//    for (int i = 0; i < a.length(); i++) {
//
//        // if a[i] is opening bracket then push
//        // into stack
//        if (a[i] == '(')
//            st.push(i);
//
//            // if a[i] is closing bracket ')'
//        else if (a[i] == ')') {
//
//            // If this closing bracket is unmatched
//            if (st.empty())
//                a.replace(i, 1, "-1");
//
//            else {
//
//                // replace all opening brackets with 0
//                // and closing brackets with 1
//                a.replace(i, 1, "1");
//                a.replace(st.top(), 1, "0");
//                st.pop();
//            }
//        }
//    }
//
//    // if stack is not empty then pop out all
//    // elements from it and replace -1 at that
//    // index of the string
//    while (!st.empty()) {
//        a.replace(st.top(), 1, "-1");
//        st.pop();
//    }
//
//    // print final string
//    return a;
//}


int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << convert(str) << endl;
    }
}