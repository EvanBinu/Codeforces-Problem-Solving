#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int g = arr[0];
        for (int i = 1; i < n; i++) {
            g = gcd(g, arr[i]);
        }
        if(g>n){
            cout << "NO" << endl;
        }
        else{
            int flag = 0;            
            for(int i = 0;i<n;i++){
                for(int j = i;j<n;j++){
                    if(gcd(arr[i],arr[j]) <=2){
                        flag++;
                    }
                }
            }
            if(flag > 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}