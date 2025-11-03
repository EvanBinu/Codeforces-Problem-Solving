#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        long long arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);

        vector<int> pos;
        for(int i = 0;i<n-1;i++){
            if(abs(arr[i] - arr[i+1])<=k){
                pos.push_back(1);
            }
            else{
                pos.push_back(0);
            }
        }
        int count = 0;
        int maxi = 0;
        
        for(int i = 0;i<n-1;i++){
            if(pos[i] == 1){
                count++;
                maxi = max(maxi,count);
            }
            else{
                count = 0;
            }
        }

        cout << n - 1 - maxi << endl;

    }
}