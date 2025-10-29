// Not accepted
#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string t,s;
        cin >> s >> t;
        long sl = s.size();
        long tl = t.size();
        string arrs[sl];
        string arrt[tl];
        for(int i = 0;i<sl;i++){
            arrs[i] = s[i];
        }
        for(int i = 0;i<tl;i++){
            arrt[i] = t[i];
        }
        sort(arrs,arrs+sl);
        sort(arrt,arrt+tl);
        
        for(int i = 0;i<sl;i++){
            cout << arrs[i];
        }
        cout << endl;
        for(int i = 0;i<tl;i++){
            cout << arrt[i];
        }
        cout << endl;
        
    }
    return 0;
}