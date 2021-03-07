#include<bits/stdc++.h>

using namespace std;

int g_c_d(int a, int b) {
    if (b == 0) return a;
    return g_c_d(b, a % b);
}

void leftRotate(int arr[], int k, int n) {
    int loopTime = g_c_d(k, n);
    for (int i = 0; i < loopTime; i++) {
        int j = i;
        int temp = arr[i];
        while (1) {
            int nextEleIndex = j + k;
            if (nextEleIndex >= n)
                nextEleIndex -= n;
            if (nextEleIndex == i) break;
            arr[j] = arr[nextEleIndex];
            j = nextEleIndex;
        }
        arr[j] = temp;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int k;
    cin >> k;
    leftRotate(arr, k % n, n);
    return 0;
}