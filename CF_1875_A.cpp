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
        long long a,b,n;
        cin >> a >> b >> n;
        vector<long long> arr(n);
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        long long count = b;
        sort(arr.begin(),arr.end());
        for(int i = 0;i<n;i++){
            count += min(arr[i],a-1);
        }
        cout << count << endl;
    }
    return 0;
}