#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i = 0;i< t;i++){
        cin >> n;
        int arr[n];
        for(int j = 0;j<n;j++){
            cin >> arr[j];
        }
        vector <int> b;
        vector <int> c;
        int lb,lc;
        int mx = *max_element(arr,arr+n);
        
        for(int k = 0;k<n;k++){
           if(arr[k]!=mx){
            b.push_back(arr[k]);
           }
           else{
            c.push_back(arr[k]);
           }
        }
        lb = b.size();
        lc = c.size();
        if(lb > 0 && lc > 0){
            cout << lb <<" "<< lc << endl;
            for(int it : b){
                cout << it << " ";
            }
            cout << endl;
            for(int it : c){
                cout << it << " ";
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}