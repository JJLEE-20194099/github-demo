#include<bits/stdc++.h>

using namespace std;
void rearrange (int arr[], int n) {
    int tempArr[n];
    for (int i = 0; i < n; i++)
            tempArr[i] = arr[i];
    sort(tempArr, tempArr + n);

    int mid = n / 2;
    int res = n - mid;
    int oddEven = n - res;

    int t = oddEven - 1;

    for (int i = 0; i < n; i += 2) {
        arr[i] = tempArr[t];
        t--;
    }
    t = oddEven;
    for (int i = 1; i < n; i+= 2) {
        arr[i] = tempArr[t];
        t++;
    }

    for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    rearrange(arr, n);
    return 0;
}