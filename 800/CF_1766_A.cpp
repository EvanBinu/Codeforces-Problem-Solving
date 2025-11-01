#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

bool check(long long x){
    long long countd = 0;
    long long countz = 0;
    while(x){
        if(x%10 == 0){
            countz++;
        }
        countd++;
        x/=10;
    }
    return countz == countd-1;
}
int main(){
    vector<long long> rnum;
    for(int i = 0;i<999999;i++){
        if(check(i)){
            rnum.push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long ans = 0;
        for(int i = 0;i<rnum.size();i++){
            if(rnum[i] <= n){
                ans++;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}