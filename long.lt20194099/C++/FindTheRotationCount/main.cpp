#include<bits/stdc++.h>

using namespace std;

int findPivot(int arr[], int left, int right) {
    if (left > right) return -1;
    if (left == right) return left;

    int mid = left + (right - left) / 2;

    if (mid > left && arr[mid] < arr[mid - 1]) return mid - 1;
    if (mid < right && arr[mid] > arr[mid + 1]) return mid;

    if (arr[left] <= arr[mid]) return findPivot(arr, mid + 1, right);
    else return findPivot(arr, left, mid - 1);
}

int findKRotation(int arr[], int n) {
    int pivot = findPivot(arr, 0, n - 1);
    return (pivot + 1) % n;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << findKRotation(arr, n);
    return 0;
}

