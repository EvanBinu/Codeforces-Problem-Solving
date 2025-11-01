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
        long long a,b,xk,yk,xq,yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;
        vector<pair<long long,long long>> king;
        vector<pair<long long,long long>> queen;

        for(int mx : {1,-1}){
            for(int my : {1,-1}){
                king.push_back({xk + a*mx,yk+b*my});                
                queen.push_back({xq + a*mx,yq+b*my});
                
                if(a!=b){
                    king.push_back({xk + b*mx,yk+a*my});
                    queen.push_back({xq + b*mx,yq+a*my});
                }
            }
        }
        int count = 0;
        for (auto [x, y] : king) {
            for (auto [z, n] : queen) {
                if (x == z && y == n) count++;
            }
        }
        cout << count << endl;

    }
}