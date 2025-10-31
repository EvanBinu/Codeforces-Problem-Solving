#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long arr[n];

        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }

        for(int i = 0;i<n;i++){
            cout << n+1 - arr[i] << " "  ;
        }
        cout << endl;
    }
    return 0;
}