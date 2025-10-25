#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    int t,n,d;
    cin >> t;    
    for(int i = 0;i<t;i++){
        
        vector<int> a;
        cin >> n;
        for(int j = 0;j<n;j++){
            cin >> d;
            a.push_back(d);
        }
        d = 0;
        int flag= 0;
        int sum = accumulate(a.begin(),a.end(),0);
        for(int j = 1;j<n;j++){
            d += a[j-1];
            sum = accumulate(a.begin()+j,a.end(),0);
            if((d&1)==0 & (sum&1)==0){
                flag++;
            }
            else if((d&1)!=0 & (sum&1)!=0){
                flag++;
            }

        }
        if(flag>0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO"<< endl;
        }
    }
}