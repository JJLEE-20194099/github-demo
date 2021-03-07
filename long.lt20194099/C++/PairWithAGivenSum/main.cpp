#include<bits/stdc++.h>

using namespace std;

int findPivot(int arr[], int left, int right) {
    if (left > right) return -1;
    if (left == right) return left;
    int mid = left + (right - left) / 2;

    if (mid > left && arr[mid] < arr[mid - 1]) return mid - 1;
    if (mid < right && arr[mid] > arr[mid + 1]) return mid;

    if (arr[left] >= arr[mid]) return findPivot(arr, 0, mid - 1);
    else return findPivot(arr, mid + 1, right);
}

int binarySearch(int arr[], int left, int right, int k) {
    if (left > right) return -1;
    if (left == right) return left;
    int mid = left + (right - left) / 2;
    if (arr[mid] == k) return mid;
    if (arr[mid] > k) return binarySearch(arr, left, mid - 1, k);
    return binarySearch(arr, mid + 1, right, k);
}

int pairWithAGivenSum(int arr[], int n, int sum) {
    int right = findPivot(arr, 0, n - 1);
    int left = (right + 1) % n;

    while (left != right) {
        if (arr[left] + arr[right] == sum)
            return 1;
        else if (arr[left] + arr[right] < sum)
            left = (left + 1) % n;
        else right = (right - 1 + n) % n;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    cout << pairWithAGivenSum(arr, n, k) << endl;

}