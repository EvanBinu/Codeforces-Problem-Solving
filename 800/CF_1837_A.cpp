#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    long long t,x,k;
    cin >> t;
    while(t--){
        cin >> x >> k;
        long count =0;
        if(x%k !=0){
            count++;
            cout << count << endl;
            cout << x << endl;
        }
        else{
            cout << 2 << endl;
            cout << (x-1) << " "<< 1 << endl;
        }

    }
    return 0;
}