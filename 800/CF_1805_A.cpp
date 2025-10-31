#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        long x = arr[0];
        for(int i = 1;i<n;i++){
            x = x^arr[i];
        }
        if(n%2!=0){
            cout << x << endl;
        }
        else if(n%2 == 0 && x==0){
            cout << 0 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}