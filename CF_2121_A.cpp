#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    int t,n,s;
    cin >> t;
    for(int i = 0;i<t;i++){
        cin >> n >> s;
        int arr[n];
        int pos;
        for(int j = 0;j<n;j++){
            cin >> arr[j];
        }
        if(abs(arr[0] - s) < abs(arr[n-1] - s)){
            pos = abs(arr[0] - s) + abs(arr[0] - arr[n-1]);
        }
        else{
            pos = abs(arr[n-1] - s) + abs(arr[0] - arr[n-1]);
        }
        cout << pos << endl;
    }
}