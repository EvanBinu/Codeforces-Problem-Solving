#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n,q;
        cin >> n >> q;
        long long arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int totalsum = accumulate(arr, arr + n, 0);
        vector<long long> prefix_sum(n + 1, 0);
        for(int i = 1;i<=n;i++){
            prefix_sum[i] = prefix_sum[i-1] +arr[i-1];
        }
        long long l,r,k;
        for(int z = 0;z<q;z++){
            cin >> l >> r >> k;
            long long sumremove = prefix_sum[r] - prefix_sum[l-1];
            long long sumadd = (r-l+1)*k;
            long long sum = totalsum - sumremove + sumadd;
            if(sum%2 == 0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}

