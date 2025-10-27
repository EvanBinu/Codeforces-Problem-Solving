#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int  l = 0;l<t;l++){
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        if(is_sorted(arr,arr+n)){
            
            int d = INT_MAX;
            for(int j = 1;j<n;j++){
               int diff = abs(arr[j-1] - arr[j]);
               d = min(d,diff);
            }
            d= d/2 +1;
            
            cout << d << endl;
        }
        else{
            cout << 0 << endl;
        }       
    }
}
