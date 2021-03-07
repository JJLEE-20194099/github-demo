#include <bits/stdc++.h>

using namespace std;


int findPivot(int arr[], int left, int right) {
    if (left > right) return -1;
    if (left == right) return left;
    int mid = left + (right - left) / 2;
    if (mid > left && arr[mid] < arr[mid - 1]) return mid - 1;
    if (mid < right && arr[mid] > arr[mid + 1]) return mid;
    if (arr[left] >= arr[mid]) return findPivot(arr, left, mid - 1);
    return findPivot(arr, mid + 1, right);
}

int binarySearch(int arr[], int left, int right, int k) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == k) return mid;
    else if (arr[mid] > k) return binarySearch(arr, left, mid - 1, k);
    else return binarySearch(arr, mid + 1, right, k);
}

int findK(int arr[], int n, int k) {
    int pivot = findPivot(arr, 0, n - 1);

    if (pivot == -1)
        return binarySearch(arr, 0, n - 1, k);
    if (arr[pivot] == k) return pivot;
    if (arr[0] <= k) return binarySearch(arr, 0, pivot - 1, k);
    return binarySearch(arr, pivot + 1, n - 1, k);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int k;
        cin >> k;
        cout << findK(arr, n, k) << endl;
    }
}
