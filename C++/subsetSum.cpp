#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        int arr[n];

        // enter elements into the array!
        for(int i = 0;i < n;i++) {
            cin >> arr[i];
        }

        int sum = 0;

        for(int i = 0;i < n;i++) {
            for(int j = i;j < n;j++) {
                sum += arr[j];
            }
        }

        cout << sum << endl;

    }
    return 0;
}