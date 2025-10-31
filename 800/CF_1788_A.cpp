#include <iostream>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int towcount = 0;
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            if(arr[i] == 2) towcount++;
        }

        int k;
        // int k = 0;
        // int p = 1;
        // for(int i = 0;i<n;i++){
        //     p *=arr[i];
        //     long long product = accumulate(arr+i+1, arr + n, 1LL, multiplies<long long>());
        //     if(p == product){
        //         k = i+1;
        //         break;
        //     }
        // }
        // if(k>0){
        //     cout << k << endl;
        // }
        // else{
        //     cout << -1<<endl;
        // }
        if(towcount%2 != 0){
            cout << -1 << endl;
        }
        else if(towcount == 0){
            cout << 1<< endl;
        }
        else{
            int towhcount = 0;
            for(int i = 0;i<n;i++){
            
                if(arr[i] == 2){ 
                    towhcount++;
                    if(towhcount == towcount/2){
                        k = i+1;
                }
                }
                
            }
            cout << k << endl;
        }

        
    }
    return 0;
}