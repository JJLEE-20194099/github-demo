#include <bits/stdc++.h>
using namespace std;

int g_c_d(int a, int b) {
    if (b == 0) return a;
    else return g_c_d(b, a % b);
}

void leftRotate(int arr[], int n, int d) {
    int loopTime = g_c_d(n, d);
    for (int i = 0; i < loopTime; i++) {
        int j = i;
        int temp = arr[i];
        while (1) {
            int nextPos = j + d;
            if (nextPos >= n)
                nextPos -= n;
            if (nextPos == i) break;
            arr[j] = arr[nextPos];
            j = nextPos;
        }
        arr[j] = temp;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int d;
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        leftRotate(arr, n, d);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}