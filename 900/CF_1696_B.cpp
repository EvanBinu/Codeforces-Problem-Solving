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
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0;i< n;i++){
            cin >> arr[i];
        }
        int count_zero = 0;
        int flag = 0;
        for(int i = 0;i< n;i++){
            if(arr[i] == 0){
                count_zero++;
            }
        }
        int l = 0;
        int r = n -1;
        while(arr[l] == 0){
            l++;
        }
        while(arr[r] == 0){
            r--;
        }
        for(int i = l;i<=r;i++){
            if(arr[i] == 0){
                flag = 1;
            }
        }
        if(count_zero==n){
            cout << 0 << endl;
        }
        else if(flag == 0){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
        

    }return 0;
}