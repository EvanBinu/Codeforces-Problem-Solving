// Not accepted
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i <n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i+ 1; j < n; j++) {
                if (arr[j] < arr[i] && (arr[i]%2 !=arr[j]%2)) {
                    swap(arr[i], arr[j]);
                }
            }
        }
        for (int i = 0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
