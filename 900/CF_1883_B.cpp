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
        int n,k;
        string s;
        cin >> n >> k;
        cin >> s;
        int arr[27] = {0};
        for(char x:s){
            arr[x-'a']++;
        }
        int oddf = 0;
        for(int i = 0;i<27;i++){
            if(arr[i]%2!=0) oddf++;
        }
        if(oddf > k+1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}