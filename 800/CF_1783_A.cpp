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
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int maxele = arr[n-1];
        int minele = arr[0];
        if(maxele == minele){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << maxele << " ";
            for(int i = 0;i<n-1;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}