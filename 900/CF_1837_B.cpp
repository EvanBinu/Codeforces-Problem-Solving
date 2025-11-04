#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;

        cin >> s;
        int maxi1 = 0;
        int maxi2 = 0;
        int count1 = 0;
        int count2 = 0;

        for(char x : s){
           if(x=='<'){
            count2 = 0;
            count1++;
            maxi1 = max(maxi1,count1);
           }
           else{
            count1 = 0;
            count2++;
            maxi2 = max(maxi2,count2);
           }
        }
        int maxi = max(maxi1,maxi2);
        cout << maxi+1 << endl; 
        
    }
    return 0;
    
}
