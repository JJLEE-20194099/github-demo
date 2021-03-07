# include <bits/stdc++.h>

using namespace std;

void reversalArr(int arr[], int left, int right) {
    int mid = left + (right-left)/2;
    for (int i = left; i<=mid; i++) {
        swap(arr[i], arr[right-i+left]);
    }
}

// auxiliary space o(1)
// time complexity o(n)

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int d;
        cin >> d;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        reversalArr(arr, 0, d-1);
        reversalArr(arr, d, n-1);
        reversalArr(arr, 0, n-1);
        for (int i = 0; i<n; i++)
            cout << arr[i];
        cout << endl;
    }
}