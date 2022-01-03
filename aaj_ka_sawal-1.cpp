#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        reverse(arr, arr + k);
        reverse(arr + k, arr + n);
        reverse(arr, arr + n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
            cout << endl;

    }

    return 0;


}
