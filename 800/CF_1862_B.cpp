#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    long t,n;
    cin >> t;
    for(int i = 0;i<t;i++){
        cin >> n;
        vector<long long> a;
        int b[n];
        for(int j = 0;j<n;j++){
            cin >> b[j];
        }
        a.push_back(b[0]);

        for(int l = 1;l<n;l++){
            if(b[l] < b[l-1]){
                a.push_back(b[l]);
                a.push_back(b[l]);
            }
            else{
                a.push_back(b[l]);

            }
            
        }
        cout << a.size()<< endl;
        for(auto it :a ){
            cout << it << " ";
        }
        cout << endl;
    }
    

}