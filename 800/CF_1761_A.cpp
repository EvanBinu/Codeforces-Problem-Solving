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
        int n,a,b;
        cin >>n >> a>> b;
        if((n==a && n==b)|| a+b+2 <= n ){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}