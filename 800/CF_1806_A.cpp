#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    long long t;
    cin >> t;
    long long a,b,c,d;
    while(t--){
        cin >> a>> b>> c>> d;
        if(d<b){
            cout << -1 << endl;
        }
        else{
            long long ymove = abs(d - b);
            a = a + ymove;
            b = b + ymove;
            if(a == c && b == d){
                cout << ymove << endl;
            }
            else{
                if(a<c){
                    cout << -1 << endl;
                }
                else{
                    long long xmove = abs(c - a);
                    cout << (ymove+xmove) << endl;
                }
            }
        }
    }
    return 0;
}