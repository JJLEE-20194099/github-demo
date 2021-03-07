#include <bits/stdc++.h>

using namespace std;

void swap(int arr[], int start, int end , int d) {
    for (int i = 0; i < d; i++) {
        int temp = arr[start + i];
        arr[start + i] = arr[end + i];
        arr[end + i] = temp;
    }
}

void leftRotate(int arr[], int d, int n) {
    if (d == 0 || d == n) return ;
    if (d == n - d) {
        swap(arr, 0, d, d);
    } else if (d < n - d) {
        swap(arr, 0, n - d, d);
        leftRotate(arr, d, n - d);
    } else {
        swap(arr, 0, d, n - d);
        leftRotate(arr + n - d, 2 * d - n, d);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        leftRotate(arr, d, n);
        for (int i = 0; i < n; i++)
            cout << arr[i];
        cout << endl;
    }
}