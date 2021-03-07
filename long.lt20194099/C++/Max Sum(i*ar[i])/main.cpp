#include <bits/stdc++.h>

using namespace std;

int sum(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += arr[i];
    return s;
}

int calcMaxSum (int arr[], int n) {
    int currSum = 0;
    for (int i = 0; i < n; i++)
        currSum += i*arr[i];
    int maxSum = currSum;
    for (int i = 1; i < n; i++) {
        currSum += sum(arr, n) - n * arr[n - i];
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main() {
    int n;
    cin  >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << calcMaxSum(arr, n);
    return 0;
}
