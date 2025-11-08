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
        int arr[n];
        for(int i = 0;i< n;i++){
            cin >> arr[i];
        }
        int answer = arr[n-1] - arr[0];
        for(int i = 1;i<n;i++){
            answer = max(answer,arr[i] - arr[0]);
        }
        for(int i = 0;i<n-1;i++){
            answer = max(answer,arr[n-1] - arr[i]);
        }
        for(int i = 0;i<n-1;i++){
            answer = max(answer,arr[i] - arr[i+1]);
        }
        cout << answer << endl;
    }
}